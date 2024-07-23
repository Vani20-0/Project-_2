#include "SQLiteWrapper.h"
#include"sqlite3.h"
const char* dir = "C://Users//TUF A15//source//repos//Project2//database";
sqlite3* DB;

SQLiteWrapper::SQLiteWrapper(const char* dir)
{

    int exit = sqlite3_open(dir, &DB);
    if (exit) {
        throw gcnew Exception("Error opening database: " + gcnew String(sqlite3_errmsg(db)));
    }
}

SQLiteWrapper::~SQLiteWrapper()
{
    if (db) {
        sqlite3_close(db);
    }
}

void SQLiteWrapper::handleSQLError(int exitCode, char* errorMessage)
{
    if (exitCode != SQLITE_OK) {
        String^ errMsg = gcnew String(errorMessage);
        sqlite3_free(errorMessage);
        throw gcnew Exception("SQL error: " + errMsg);
    }
}

void SQLiteWrapper::RegisterUser(String^ username, String^ password)
{
    char* errorMessage;
    std::string sql = "INSERT INTO Users (Username, Password, Status, LocationFrom, LocationTo) VALUES ('" +
        msclr::interop::marshal_as<std::string>(username) + "', '" +
        msclr::interop::marshal_as<std::string>(password) + "', 'on hold', '', '');";

    int exit = sqlite3_exec(db, sql.c_str(), nullptr, 0, &errorMessage);
    handleSQLError(exit, errorMessage);
}

int SQLiteWrapper::LoginUser(String^ username, String^ password)
{
    sqlite3_stmt* stmt;
    std::string sql = "SELECT * FROM Users WHERE Username = '" + msclr::interop::marshal_as<std::string>(username) +
        "' AND Password = '" + msclr::interop::marshal_as<std::string>(password) + "';";

    int exit = sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr);
    if (exit != SQLITE_OK) {
        return -1;
    }

    int userID = -1;
    if (sqlite3_step(stmt) == SQLITE_ROW) {
        userID = sqlite3_column_int(stmt, 0);
    }

    sqlite3_finalize(stmt);
    return userID;
}

void SQLiteWrapper::RegisterRider(String^ username, String^ password)
{
    char* errorMessage;
    std::string sql = "INSERT INTO Riders (Username, Password) VALUES ('" +
        msclr::interop::marshal_as<std::string>(username) + "', '" +
        msclr::interop::marshal_as<std::string>(password) + "');";

    int exit = sqlite3_exec(db, sql.c_str(), nullptr, 0, &errorMessage);
    handleSQLError(exit, errorMessage);
}

int SQLiteWrapper::LoginRider(String^ username, String^ password)
{
    sqlite3_stmt* stmt;
    std::string sql = "SELECT * FROM Riders WHERE Username = '" + msclr::interop::marshal_as<std::string>(username) +
        "' AND Password = '" + msclr::interop::marshal_as<std::string>(password) + "';";

    int exit = sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr);
    if (exit != SQLITE_OK) {
        return -1;
    }

    int riderID = -1;
    if (sqlite3_step(stmt) == SQLITE_ROW) {
        riderID = sqlite3_column_int(stmt, 0);
    }

    sqlite3_finalize(stmt);
    return riderID;
}

void SQLiteWrapper::UpdateUserLocation(int userID, String^ locationFrom, String^ locationTo)
{
    char* errorMessage;
    std::string sql = "UPDATE Users SET LocationFrom = '" + msclr::interop::marshal_as<std::string>(locationFrom) +
        "', LocationTo = '" + msclr::interop::marshal_as<std::string>(locationTo) + "', Status = 'on hold' WHERE UserID = " +
        std::to_string(userID) + ";";

    int exit = sqlite3_exec(db, sql.c_str(), nullptr, 0, &errorMessage);
    handleSQLError(exit, errorMessage);
}

DataTable^ SQLiteWrapper::ViewRequests()
{
    sqlite3_stmt* stmt;
    std::string sql = "SELECT UserID, Username, LocationFrom, LocationTo, Status FROM Users WHERE Status = 'on hold';";

    int exit = sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr);
    if (exit != SQLITE_OK) {
        return nullptr;
    }

    DataTable^ table = gcnew DataTable();
    table->Columns->Add("UserID");
    table->Columns->Add("Username");
    table->Columns->Add("LocationFrom");
    table->Columns->Add("LocationTo");
    table->Columns->Add("Status");

    while (sqlite3_step(stmt) == SQLITE_ROW) {
        DataRow^ row = table->NewRow();
        row["UserID"] = sqlite3_column_int(stmt, 0);
        row["Username"] = gcnew String((const char*)sqlite3_column_text(stmt, 1));
        row["LocationFrom"] = gcnew String((const char*)sqlite3_column_text(stmt, 2));
        row["LocationTo"] = gcnew String((const char*)sqlite3_column_text(stmt, 3));
        row["Status"] = gcnew String((const char*)sqlite3_column_text(stmt, 4));
        table->Rows->Add(row);
    }

    sqlite3_finalize(stmt);
    return table;
}

void SQLiteWrapper::UpdateStatusAndAcceptRide(int userID, int riderID, String^ newStatus)
{
    char* errorMessage;
    std::string sql = "UPDATE Users SET Status = '" + msclr::interop::marshal_as<std::string>(newStatus) +
        "' WHERE UserID = " + std::to_string(userID) + ";";

    int exit = sqlite3_exec(db, sql.c_str(), nullptr, 0, &errorMessage);
    handleSQLError(exit, errorMessage);
}

void SQLiteWrapper::InsertAcceptedRide(int userID, int riderID)
{
    char* errorMessage;
    std::string sql = "INSERT INTO AcceptedRides (UserID, RiderID) VALUES (" + std::to_string(userID) +
        ", " + std::to_string(riderID) + ");";

    int exit = sqlite3_exec(db, sql.c_str(), nullptr, 0, &errorMessage);
    handleSQLError(exit, errorMessage);
}

DataTable^ SQLiteWrapper::ViewAcceptedRides()
{
    sqlite3_stmt* stmt;
    std::string sql = "SELECT RideID, UserID, RiderID FROM AcceptedRides;";

    int exit = sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr);
    if (exit != SQLITE_OK) {
        return nullptr;
    }

    DataTable^ table = gcnew DataTable();
    table->Columns->Add("RideID");
    table->Columns->Add("UserID");
    table->Columns->Add("RiderID");

    while (sqlite3_step(stmt) == SQLITE_ROW) {
        DataRow^ row = table->NewRow();
        row["RideID"] = sqlite3_column_int(stmt, 0);
        row["UserID"] = sqlite3_column_int(stmt, 1);
        row["RiderID"] = sqlite3_column_int(stmt, 2);
        table->Rows->Add(row);
    }

    sqlite3_finalize(stmt);
    return table;
}
