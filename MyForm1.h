#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MaskedTextBox^ newnum;

	private: System::Windows::Forms::MaskedTextBox^ newpin;

	private: System::Windows::Forms::MaskedTextBox^ confirm;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ next;

	private: System::Windows::Forms::Button^ exit;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->newnum = (gcnew System::Windows::Forms::MaskedTextBox());
			this->newpin = (gcnew System::Windows::Forms::MaskedTextBox());
			this->confirm = (gcnew System::Windows::Forms::MaskedTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->next = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label1->Location = System::Drawing::Point(112, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 62);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Sign Up ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(119, 213);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Phone Number :";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(119, 273);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 23);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Enter a PIN Code :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(119, 335);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(158, 23);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Confirm PIN Code :";
			// 
			// newnum
			// 
			this->newnum->BackColor = System::Drawing::Color::White;
			this->newnum->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->newnum->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->newnum->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 12));
			this->newnum->ForeColor = System::Drawing::Color::Black;
			this->newnum->Location = System::Drawing::Point(288, 209);
			this->newnum->Name = L"newnum";
			this->newnum->Size = System::Drawing::Size(278, 27);
			this->newnum->TabIndex = 11;
			this->newnum->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &MyForm1::newnum_MaskInputRejected);
			this->newnum->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::newnum_KeyDown);
			// 
			// newpin
			// 
			this->newpin->BackColor = System::Drawing::Color::White;
			this->newpin->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->newpin->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->newpin->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 12));
			this->newpin->ForeColor = System::Drawing::Color::Black;
			this->newpin->Location = System::Drawing::Point(288, 268);
			this->newpin->Name = L"newpin";
			this->newpin->Size = System::Drawing::Size(278, 27);
			this->newpin->TabIndex = 12;
			this->newpin->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::newpin_KeyDown);
			// 
			// confirm
			// 
			this->confirm->BackColor = System::Drawing::Color::White;
			this->confirm->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->confirm->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->confirm->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 12));
			this->confirm->ForeColor = System::Drawing::Color::Black;
			this->confirm->Location = System::Drawing::Point(288, 330);
			this->confirm->Name = L"confirm";
			this->confirm->Size = System::Drawing::Size(278, 27);
			this->confirm->TabIndex = 13;
			this->confirm->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &MyForm1::confirm_MaskInputRejected);
			this->confirm->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::confirm_KeyDown);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->panel1->Location = System::Drawing::Point(35, 142);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(300, 2);
			this->panel1->TabIndex = 14;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->panel2->Location = System::Drawing::Point(94, 77);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(2, 300);
			this->panel2->TabIndex = 15;
			// 
			// next
			// 
			this->next->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->next->Cursor = System::Windows::Forms::Cursors::Hand;
			this->next->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->next->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->next->ForeColor = System::Drawing::Color::White;
			this->next->Location = System::Drawing::Point(443, 384);
			this->next->Name = L"next";
			this->next->Size = System::Drawing::Size(123, 40);
			this->next->TabIndex = 16;
			this->next->Text = L"Next";
			this->next->UseVisualStyleBackColor = false;
			this->next->Click += gcnew System::EventHandler(this, &MyForm1::next_Click);
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::White;
			this->exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->exit->Location = System::Drawing::Point(569, 384);
			this->exit->Margin = System::Windows::Forms::Padding(0);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(115, 40);
			this->exit->TabIndex = 17;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &MyForm1::cancel_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(725, 469);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->next);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->confirm);
			this->Controls->Add(this->newpin);
			this->Controls->Add(this->newnum);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e){
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	}
private: System::Void next_Click(System::Object^ sender, System::EventArgs^ e) {
	if (newpin->Text == confirm->Text)
	{
		MessageBox::Show("Profile made sucessfully.", "Sign Up Complete", MessageBoxButtons::OK, MessageBoxIcon::Information);
	    this->Hide();
	}
	else {
		MessageBox::Show("The PIN Code is incorrect.", "Signing In Failed", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void newnum_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
		newpin->Focus();
}
private: System::Void newpin_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
		confirm->Focus();
}
private: System::Void confirm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
		next->PerformClick();
}
private: System::Void newnum_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
private: System::Void confirm_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
};
}
