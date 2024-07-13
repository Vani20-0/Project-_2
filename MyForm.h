#pragma once
#include "MyForm1.h"
#include "MyForm2.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MaskedTextBox^ num;

	private: System::Windows::Forms::MaskedTextBox^ pin;

	private: System::Windows::Forms::Button^ login;

	private: System::Windows::Forms::Button^ cancel;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ signup;

	private: System::Windows::Forms::Label^ label6;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->num = (gcnew System::Windows::Forms::MaskedTextBox());
			this->pin = (gcnew System::Windows::Forms::MaskedTextBox());
			this->login = (gcnew System::Windows::Forms::Button());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->signup = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label1->Location = System::Drawing::Point(48, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 62);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Log In";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(56, 154);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Phone Number";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(56, 240);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"PIN Code";
			// 
			// num
			// 
			this->num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(223)));
			this->num->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->num->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 12));
			this->num->ForeColor = System::Drawing::Color::Black;
			this->num->Location = System::Drawing::Point(59, 180);
			this->num->Name = L"num";
			this->num->Size = System::Drawing::Size(278, 27);
			this->num->TabIndex = 10;
			//->num->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
			this->num->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::num_KeyDown);
			// 
			// pin
			// 
			this->pin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(223)));
			this->pin->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pin->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 12));
			this->pin->ForeColor = System::Drawing::Color::Black;
			this->pin->Location = System::Drawing::Point(59, 269);
			this->pin->Name = L"pin";
			this->pin->Size = System::Drawing::Size(278, 27);
			this->pin->TabIndex = 10;
			this->pin->UseSystemPasswordChar = true;
			this->pin->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::pin_KeyDown);
			// 
			// login
			// 
			this->login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->login->Cursor = System::Windows::Forms::Cursors::Hand;
			this->login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->login->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->login->ForeColor = System::Drawing::Color::White;
			this->login->Location = System::Drawing::Point(60, 329);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(123, 40);
			this->login->TabIndex = 5;
			this->login->Text = L"Login";
			this->login->UseVisualStyleBackColor = false;
			this->login->Click += gcnew System::EventHandler(this, &MyForm::login_Click);
			// 
			// cancel
			// 
			this->cancel->BackColor = System::Drawing::Color::White;
			this->cancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->cancel->Location = System::Drawing::Point(186, 329);
			this->cancel->Margin = System::Windows::Forms::Padding(0);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(115, 40);
			this->cancel->TabIndex = 6;
			this->cancel->Text = L"Cancel";
			this->cancel->UseVisualStyleBackColor = false;
			this->cancel->Click += gcnew System::EventHandler(this, &MyForm::cancel_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(164, 428);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(196, 23);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Don\'t have an account\? ";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// signup
			// 
			this->signup->AutoSize = true;
			this->signup->BackColor = System::Drawing::Color::Transparent;
			this->signup->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signup->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signup->ForeColor = System::Drawing::SystemColors::Info;
			this->signup->Location = System::Drawing::Point(357, 428);
			this->signup->Name = L"signup";
			this->signup->Size = System::Drawing::Size(74, 23);
			this->signup->TabIndex = 8;
			this->signup->Text = L"Sign Up";
			this->signup->Click += gcnew System::EventHandler(this, &MyForm::signup_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Info;
			this->label6->Location = System::Drawing::Point(437, 428);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 23);
			this->label6->TabIndex = 9;
			this->label6->Text = L"here.";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(725, 469);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->signup);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->login);
			this->Controls->Add(this->pin);
			this->Controls->Add(this->num);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void login_Click(System::Object^ sender, System::EventArgs^ e) {
	if (num->Text == "123") {
		if (pin->Text == "123") {
			MessageBox::Show("Proceed", "Login Sucess", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Hide();
			MyForm2 home;
			home.ShowDialog();
		}
		else
			MessageBox::Show("Invalid PIN code", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
	else
		MessageBox::Show("Invalid Phone Number", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
};
private: System::Void signup_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1 Form1;
	this->Hide();
	Form1.ShowDialog();
	Form1.Close();
	this->Show();
};
private: System::Void num_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
		pin->Focus();
};
private: System::Void pin_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
		login->PerformClick();
}

};
}
