#pragma once

#include <string>
#include <msclr/marshal_cppstd.h>
#include <sqlite3.h>
#include <stdexcept>
#include <vcclr.h>

using namespace System;
using namespace System::Data;
using namespace System::Windows::Forms;

public ref class SQLiteWrapper
{
public:
    SQLiteWrapper(const char* dbPath);
    ~SQLiteWrapper();

    void RegisterUser(String^ username, String^ password);
    int LoginUser(String^ username, String^ password);
    void RegisterRider(String^ username, String^ password);
    int LoginRider(String^ username, String^ password);
    void UpdateUserLocation(int userID, String^ locationFrom, String^ locationTo);
    DataTable^ ViewRequests();
    void UpdateStatusAndAcceptRide(int userID, int riderID, String^ newStatus);
    void InsertAcceptedRide(int userID, int riderID);
    DataTable^ ViewAcceptedRides();

private:
    sqlite3* db;
    void handleSQLError(int exitCode, char* errorMessage);
};
