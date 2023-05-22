#pragma once 
#include "Header.h"
#include <time.h>

namespace billingsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//Conversion Function
	static std::string toStandardString(System::String^ string)
	{
		using System::Runtime::InteropServices::Marshal;

		if (string->Length == 0 || string->Length < 0)
		{
			MessageBox::Show("No field can be empty");
		}
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string returnString(charPointer, string->Length);
		Marshal::FreeHGlobal(pointer);

		return returnString;
	}
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Label^ TotalCals;   
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
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Panel^ ChooseOrderPanel;
	protected:
	private: System::Windows::Forms::Panel^ ReceiptPanel;
	protected:
	private: System::Windows::Forms::Panel^ MenuPanel;
	private: System::Windows::Forms::Panel^ TitlePanel;
	private: System::Windows::Forms::Panel^ panel500;
	private: System::Windows::Forms::Button^ btnTotal;
	private: System::Windows::Forms::Button^ btnReceipt;
	private: System::Windows::Forms::Button^ btnPrint;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::NumericUpDown^ QtyCheeseBurger;
	private: System::Windows::Forms::Label^ label500;
	private: System::Windows::Forms::Label^ label100;
	private: System::Windows::Forms::Label^ numItems;
	private: System::Windows::Forms::Label^ TotalPrice;
	private: System::Windows::Forms::Label^ ComboCost;
	private: System::Windows::Forms::NumericUpDown^ QtyCombo;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ BaconCost;
	private: System::Windows::Forms::NumericUpDown^ QtyBacon;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ BuffaloCost;
	private: System::Windows::Forms::NumericUpDown^ QtyBuffalo;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ CrispyChickenCost;
	private: System::Windows::Forms::NumericUpDown^ QtyCrispyChicken;
	private: System::Windows::Forms::Label^ BBQCost;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ QtyBBQ;
	private: System::Windows::Forms::Label^ BeefBurgerCost;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ QtyBeefBurger;
	private: System::Windows::Forms::Label^ CheeseBurgerCost;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
	private: System::Windows::Forms::Panel^ Panel1;
	private: System::Windows::Forms::Button^ signinInput2;
	protected:
	private: System::Windows::Forms::Panel^ Panel4;
	private: System::Windows::Forms::TextBox^ Passwordtex2;
	private: System::Windows::Forms::Panel^ Panel3;
	private: System::Windows::Forms::TextBox^ usernametex1;
	private: System::Windows::Forms::Panel^ Panel2;
	private: System::Windows::Forms::Button^ registerbut1;
	private: System::Windows::Forms::CheckBox^ CheckBox1;
	private: System::Windows::Forms::Panel^ Panel5;
	private: System::Windows::Forms::Label^ Label1;
	private: System::Windows::Forms::Label^ Label2;
    private: System::Windows::Forms::Panel^ backpnl;
	protected:
	private: System::Windows::Forms::Panel^ register_pnl;
	protected:
	protected:
	private: System::Windows::Forms::TextBox^ txtbox_phone;
	private: System::Windows::Forms::TextBox^ txtbox_confirm;
	private: System::Windows::Forms::TextBox^ txtboxpass;
	private: System::Windows::Forms::TextBox^ txtbox_username;
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::Button^ btn_Register;
	private: System::Windows::Forms::Panel^ confirmpanel;
	protected:
	private: System::Windows::Forms::Label^ confirmlabel;
	private: System::Windows::Forms::Button^ confirmbtn;
	private: System::Windows::Forms::Button^ editorderbtn;
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
			this->ChooseOrderPanel = (gcnew System::Windows::Forms::Panel());
			this->panel500 = (gcnew System::Windows::Forms::Panel());
			this->btnTotal = (gcnew System::Windows::Forms::Button());
			this->btnReceipt = (gcnew System::Windows::Forms::Button());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->ReceiptPanel = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->MenuPanel = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->TotalCals = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->numItems = (gcnew System::Windows::Forms::Label());
			this->TotalPrice = (gcnew System::Windows::Forms::Label());
			this->ComboCost = (gcnew System::Windows::Forms::Label());
			this->QtyCombo = (gcnew System::Windows::Forms::NumericUpDown());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->BaconCost = (gcnew System::Windows::Forms::Label());
			this->QtyBacon = (gcnew System::Windows::Forms::NumericUpDown());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->BuffaloCost = (gcnew System::Windows::Forms::Label());
			this->QtyBuffalo = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->CrispyChickenCost = (gcnew System::Windows::Forms::Label());
			this->QtyCrispyChicken = (gcnew System::Windows::Forms::NumericUpDown());
			this->BBQCost = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->QtyBBQ = (gcnew System::Windows::Forms::NumericUpDown());
			this->BeefBurgerCost = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->QtyBeefBurger = (gcnew System::Windows::Forms::NumericUpDown());
			this->CheeseBurgerCost = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->QtyCheeseBurger = (gcnew System::Windows::Forms::NumericUpDown());
			this->label500 = (gcnew System::Windows::Forms::Label());
			this->TitlePanel = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->Panel1 = (gcnew System::Windows::Forms::Panel());
			this->Label2 = (gcnew System::Windows::Forms::Label());
			this->Panel5 = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->CheckBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->signinInput2 = (gcnew System::Windows::Forms::Button());
			this->Panel4 = (gcnew System::Windows::Forms::Panel());
			this->Passwordtex2 = (gcnew System::Windows::Forms::TextBox());
			this->Panel3 = (gcnew System::Windows::Forms::Panel());
			this->usernametex1 = (gcnew System::Windows::Forms::TextBox());
			this->Panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Label1 = (gcnew System::Windows::Forms::Label());
			this->registerbut1 = (gcnew System::Windows::Forms::Button());
			this->backpnl = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->register_pnl = (gcnew System::Windows::Forms::Panel());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_Register = (gcnew System::Windows::Forms::Button());
			this->txtbox_phone = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_confirm = (gcnew System::Windows::Forms::TextBox());
			this->txtboxpass = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_username = (gcnew System::Windows::Forms::TextBox());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->confirmpanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->confirmbtn = (gcnew System::Windows::Forms::Button());
			this->editorderbtn = (gcnew System::Windows::Forms::Button());
			this->confirmlabel = (gcnew System::Windows::Forms::Label());
			this->ChooseOrderPanel->SuspendLayout();
			this->panel500->SuspendLayout();
			this->ReceiptPanel->SuspendLayout();
			this->MenuPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QtyCombo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QtyBacon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QtyBuffalo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QtyCrispyChicken))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QtyBBQ))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QtyBeefBurger))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QtyCheeseBurger))->BeginInit();
			this->TitlePanel->SuspendLayout();
			this->Panel1->SuspendLayout();
			this->Panel5->SuspendLayout();
			this->Panel4->SuspendLayout();
			this->Panel3->SuspendLayout();
			this->Panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->backpnl->SuspendLayout();
			this->register_pnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->confirmpanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// ChooseOrderPanel
			// 
			this->ChooseOrderPanel->BackColor = System::Drawing::Color::Transparent;
			this->ChooseOrderPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ChooseOrderPanel->Controls->Add(this->panel500);
			this->ChooseOrderPanel->Controls->Add(this->ReceiptPanel);
			this->ChooseOrderPanel->Controls->Add(this->MenuPanel);
			this->ChooseOrderPanel->Controls->Add(this->TitlePanel);
			this->ChooseOrderPanel->Location = System::Drawing::Point(12, 12);
			this->ChooseOrderPanel->Name = L"ChooseOrderPanel";
			this->ChooseOrderPanel->Size = System::Drawing::Size(1336, 640);
			this->ChooseOrderPanel->TabIndex = 0;
			this->ChooseOrderPanel->Visible = false;
			// 
			// panel500
			// 
			this->panel500->BackColor = System::Drawing::Color::Transparent;
			this->panel500->Controls->Add(this->btnTotal);
			this->panel500->Controls->Add(this->btnReceipt);
			this->panel500->Controls->Add(this->btnPrint);
			this->panel500->Controls->Add(this->btnReset);
			this->panel500->Controls->Add(this->btnExit);
			this->panel500->Location = System::Drawing::Point(13, 541);
			this->panel500->Name = L"panel500";
			this->panel500->Size = System::Drawing::Size(1298, 84);
			this->panel500->TabIndex = 1;
			// 
			// btnTotal
			// 
			this->btnTotal->BackColor = System::Drawing::Color::Black;
			this->btnTotal->Font = (gcnew System::Drawing::Font(L"Georgia", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTotal->ForeColor = System::Drawing::Color::OrangeRed;
			this->btnTotal->Location = System::Drawing::Point(5, 3);
			this->btnTotal->Name = L"btnTotal";
			this->btnTotal->Size = System::Drawing::Size(250, 70);
			this->btnTotal->TabIndex = 4;
			this->btnTotal->Text = L"Total";
			this->btnTotal->UseVisualStyleBackColor = false;
			this->btnTotal->Click += gcnew System::EventHandler(this, &MyForm::btnTotal_Click);
			// 
			// btnReceipt
			// 
			this->btnReceipt->BackColor = System::Drawing::Color::Black;
			this->btnReceipt->Font = (gcnew System::Drawing::Font(L"Georgia", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReceipt->ForeColor = System::Drawing::Color::OrangeRed;
			this->btnReceipt->Location = System::Drawing::Point(261, 3);
			this->btnReceipt->Name = L"btnReceipt";
			this->btnReceipt->Size = System::Drawing::Size(250, 70);
			this->btnReceipt->TabIndex = 3;
			this->btnReceipt->Text = L"Receipt";
			this->btnReceipt->UseVisualStyleBackColor = false;
			this->btnReceipt->Click += gcnew System::EventHandler(this, &MyForm::btnReceipt_Click);
			// 
			// btnPrint
			// 
			this->btnPrint->BackColor = System::Drawing::Color::Black;
			this->btnPrint->Font = (gcnew System::Drawing::Font(L"Georgia", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrint->ForeColor = System::Drawing::Color::OrangeRed;
			this->btnPrint->Location = System::Drawing::Point(517, 3);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(250, 70);
			this->btnPrint->TabIndex = 2;
			this->btnPrint->Text = L"Checkout";
			this->btnPrint->UseVisualStyleBackColor = false;
			this->btnPrint->Click += gcnew System::EventHandler(this, &MyForm::btnPrint_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::Color::Black;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Georgia", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->ForeColor = System::Drawing::Color::OrangeRed;
			this->btnReset->Location = System::Drawing::Point(773, 3);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(250, 70);
			this->btnReset->TabIndex = 1;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Black;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Georgia", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->ForeColor = System::Drawing::Color::OrangeRed;
			this->btnExit->Location = System::Drawing::Point(1029, 3);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(250, 70);
			this->btnExit->TabIndex = 0;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// ReceiptPanel
			// 
			this->ReceiptPanel->BackColor = System::Drawing::Color::Transparent;
			this->ReceiptPanel->Controls->Add(this->label8);
			this->ReceiptPanel->Controls->Add(this->richTextBox1);
			this->ReceiptPanel->Location = System::Drawing::Point(850, 112);
			this->ReceiptPanel->Name = L"ReceiptPanel";
			this->ReceiptPanel->Size = System::Drawing::Size(461, 423);
			this->ReceiptPanel->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Georgia", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::OrangeRed;
			this->label8->Location = System::Drawing::Point(123, 2);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(218, 38);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Receipt";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::OrangeRed;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::Black;
			this->richTextBox1->Location = System::Drawing::Point(8, 56);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(434, 355);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// MenuPanel
			// 
			this->MenuPanel->BackColor = System::Drawing::Color::Transparent;
			this->MenuPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->MenuPanel->Controls->Add(this->label20);
			this->MenuPanel->Controls->Add(this->label19);
			this->MenuPanel->Controls->Add(this->label17);
			this->MenuPanel->Controls->Add(this->label16);
			this->MenuPanel->Controls->Add(this->label14);
			this->MenuPanel->Controls->Add(this->label12);
			this->MenuPanel->Controls->Add(this->label10);
			this->MenuPanel->Controls->Add(this->TotalCals);
			this->MenuPanel->Controls->Add(this->label27);
			this->MenuPanel->Controls->Add(this->label24);
			this->MenuPanel->Controls->Add(this->label23);
			this->MenuPanel->Controls->Add(this->label22);
			this->MenuPanel->Controls->Add(this->label18);
			this->MenuPanel->Controls->Add(this->numItems);
			this->MenuPanel->Controls->Add(this->TotalPrice);
			this->MenuPanel->Controls->Add(this->ComboCost);
			this->MenuPanel->Controls->Add(this->QtyCombo);
			this->MenuPanel->Controls->Add(this->label15);
			this->MenuPanel->Controls->Add(this->BaconCost);
			this->MenuPanel->Controls->Add(this->QtyBacon);
			this->MenuPanel->Controls->Add(this->label13);
			this->MenuPanel->Controls->Add(this->BuffaloCost);
			this->MenuPanel->Controls->Add(this->QtyBuffalo);
			this->MenuPanel->Controls->Add(this->label11);
			this->MenuPanel->Controls->Add(this->CrispyChickenCost);
			this->MenuPanel->Controls->Add(this->QtyCrispyChicken);
			this->MenuPanel->Controls->Add(this->BBQCost);
			this->MenuPanel->Controls->Add(this->label9);
			this->MenuPanel->Controls->Add(this->label6);
			this->MenuPanel->Controls->Add(this->QtyBBQ);
			this->MenuPanel->Controls->Add(this->BeefBurgerCost);
			this->MenuPanel->Controls->Add(this->label7);
			this->MenuPanel->Controls->Add(this->label4);
			this->MenuPanel->Controls->Add(this->QtyBeefBurger);
			this->MenuPanel->Controls->Add(this->CheeseBurgerCost);
			this->MenuPanel->Controls->Add(this->label5);
			this->MenuPanel->Controls->Add(this->label3);
			this->MenuPanel->Controls->Add(this->QtyCheeseBurger);
			this->MenuPanel->Controls->Add(this->label500);
			this->MenuPanel->Location = System::Drawing::Point(13, 112);
			this->MenuPanel->Name = L"MenuPanel";
			this->MenuPanel->Size = System::Drawing::Size(831, 423);
			this->MenuPanel->TabIndex = 1;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::OrangeRed;
			this->label20->Location = System::Drawing::Point(586, 313);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(101, 25);
			this->label20->TabIndex = 45;
			this->label20->Text = L"592 kcal";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::OrangeRed;
			this->label19->Location = System::Drawing::Point(586, 269);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(103, 25);
			this->label19->TabIndex = 44;
			this->label19->Text = L"420 kcal";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::OrangeRed;
			this->label17->Location = System::Drawing::Point(586, 227);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(102, 25);
			this->label17->TabIndex = 43;
			this->label17->Text = L"505 kcal";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::OrangeRed;
			this->label16->Location = System::Drawing::Point(586, 187);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(98, 25);
			this->label16->TabIndex = 42;
			this->label16->Text = L"129 kcal";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::OrangeRed;
			this->label14->Location = System::Drawing::Point(586, 137);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(101, 25);
			this->label14->TabIndex = 41;
			this->label14->Text = L"226 kcal";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::OrangeRed;
			this->label12->Location = System::Drawing::Point(586, 90);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(100, 25);
			this->label12->TabIndex = 40;
			this->label12->Text = L"225 kcal";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::OrangeRed;
			this->label10->Location = System::Drawing::Point(588, 48);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(102, 25);
			this->label10->TabIndex = 39;
			this->label10->Text = L"303 kcal";
			// 
			// TotalCals
			// 
			this->TotalCals->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->TotalCals->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TotalCals->ForeColor = System::Drawing::Color::OrangeRed;
			this->TotalCals->Location = System::Drawing::Point(589, 378);
			this->TotalCals->Name = L"TotalCals";
			this->TotalCals->Size = System::Drawing::Size(137, 31);
			this->TotalCals->TabIndex = 38;
			this->TotalCals->Text = L"0.00 kcal";
			this->TotalCals->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label27
			// 
			this->label27->Font = (gcnew System::Drawing::Font(L"Georgia", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::OrangeRed;
			this->label27->Location = System::Drawing::Point(547, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(218, 38);
			this->label27->TabIndex = 37;
			this->label27->Text = L"Calories ";
			this->label27->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label24
			// 
			this->label24->Font = (gcnew System::Drawing::Font(L"Georgia", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::OrangeRed;
			this->label24->Location = System::Drawing::Point(349, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(218, 38);
			this->label24->TabIndex = 26;
			this->label24->Text = L"Price";
			this->label24->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label23
			// 
			this->label23->Font = (gcnew System::Drawing::Font(L"Georgia", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::OrangeRed;
			this->label23->Location = System::Drawing::Point(147, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(243, 38);
			this->label23->TabIndex = 25;
			this->label23->Text = L"Quantity";
			this->label23->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"Georgia", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::OrangeRed;
			this->label22->Location = System::Drawing::Point(3, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(165, 50);
			this->label22->TabIndex = 24;
			this->label22->Text = L"Items";
			this->label22->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Georgia", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::OrangeRed;
			this->label18->Location = System::Drawing::Point(9, 378);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(85, 31);
			this->label18->TabIndex = 23;
			this->label18->Text = L"Total";
			// 
			// numItems
			// 
			this->numItems->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->numItems->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numItems->ForeColor = System::Drawing::Color::OrangeRed;
			this->numItems->Location = System::Drawing::Point(189, 378);
			this->numItems->Name = L"numItems";
			this->numItems->Size = System::Drawing::Size(153, 31);
			this->numItems->TabIndex = 22;
			this->numItems->Text = L"0";
			this->numItems->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TotalPrice
			// 
			this->TotalPrice->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->TotalPrice->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TotalPrice->ForeColor = System::Drawing::Color::OrangeRed;
			this->TotalPrice->Location = System::Drawing::Point(392, 378);
			this->TotalPrice->Name = L"TotalPrice";
			this->TotalPrice->Size = System::Drawing::Size(137, 31);
			this->TotalPrice->TabIndex = 21;
			this->TotalPrice->Text = L"0.00 LE";
			this->TotalPrice->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ComboCost
			// 
			this->ComboCost->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ComboCost->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ComboCost->ForeColor = System::Drawing::Color::OrangeRed;
			this->ComboCost->Location = System::Drawing::Point(392, 305);
			this->ComboCost->Name = L"ComboCost";
			this->ComboCost->Size = System::Drawing::Size(135, 31);
			this->ComboCost->TabIndex = 20;
			this->ComboCost->Text = L"0.00 LE";
			this->ComboCost->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// QtyCombo
			// 
			this->QtyCombo->BackColor = System::Drawing::Color::Black;
			this->QtyCombo->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QtyCombo->ForeColor = System::Drawing::Color::OrangeRed;
			this->QtyCombo->Location = System::Drawing::Point(190, 305);
			this->QtyCombo->Name = L"QtyCombo";
			this->QtyCombo->Size = System::Drawing::Size(152, 31);
			this->QtyCombo->TabIndex = 19;
			this->QtyCombo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->QtyCombo->ValueChanged += gcnew System::EventHandler(this, &MyForm::QtyCombo_ValueChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::OrangeRed;
			this->label15->Location = System::Drawing::Point(11, 313);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(79, 23);
			this->label15->TabIndex = 18;
			this->label15->Text = L"Combo";
			// 
			// BaconCost
			// 
			this->BaconCost->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->BaconCost->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BaconCost->ForeColor = System::Drawing::Color::OrangeRed;
			this->BaconCost->Location = System::Drawing::Point(392, 263);
			this->BaconCost->Name = L"BaconCost";
			this->BaconCost->Size = System::Drawing::Size(135, 31);
			this->BaconCost->TabIndex = 17;
			this->BaconCost->Text = L"0.00 LE";
			this->BaconCost->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// QtyBacon
			// 
			this->QtyBacon->BackColor = System::Drawing::Color::Black;
			this->QtyBacon->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QtyBacon->ForeColor = System::Drawing::Color::OrangeRed;
			this->QtyBacon->Location = System::Drawing::Point(190, 261);
			this->QtyBacon->Name = L"QtyBacon";
			this->QtyBacon->Size = System::Drawing::Size(152, 31);
			this->QtyBacon->TabIndex = 16;
			this->QtyBacon->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->QtyBacon->ValueChanged += gcnew System::EventHandler(this, &MyForm::QtyBacon_ValueChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::OrangeRed;
			this->label13->Location = System::Drawing::Point(11, 269);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(118, 23);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Beef Bacon";
			// 
			// BuffaloCost
			// 
			this->BuffaloCost->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->BuffaloCost->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BuffaloCost->ForeColor = System::Drawing::Color::OrangeRed;
			this->BuffaloCost->Location = System::Drawing::Point(392, 217);
			this->BuffaloCost->Name = L"BuffaloCost";
			this->BuffaloCost->Size = System::Drawing::Size(135, 31);
			this->BuffaloCost->TabIndex = 14;
			this->BuffaloCost->Text = L"0.00 LE";
			this->BuffaloCost->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// QtyBuffalo
			// 
			this->QtyBuffalo->BackColor = System::Drawing::Color::Black;
			this->QtyBuffalo->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QtyBuffalo->ForeColor = System::Drawing::Color::OrangeRed;
			this->QtyBuffalo->Location = System::Drawing::Point(191, 217);
			this->QtyBuffalo->Name = L"QtyBuffalo";
			this->QtyBuffalo->Size = System::Drawing::Size(152, 31);
			this->QtyBuffalo->TabIndex = 13;
			this->QtyBuffalo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->QtyBuffalo->ValueChanged += gcnew System::EventHandler(this, &MyForm::QtyBuffalo_ValueChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::OrangeRed;
			this->label11->Location = System::Drawing::Point(8, 227);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(139, 23);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Spicy Buffalo";
			// 
			// CrispyChickenCost
			// 
			this->CrispyChickenCost->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->CrispyChickenCost->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CrispyChickenCost->ForeColor = System::Drawing::Color::OrangeRed;
			this->CrispyChickenCost->Location = System::Drawing::Point(392, 175);
			this->CrispyChickenCost->Name = L"CrispyChickenCost";
			this->CrispyChickenCost->Size = System::Drawing::Size(135, 31);
			this->CrispyChickenCost->TabIndex = 11;
			this->CrispyChickenCost->Text = L"0.00 LE";
			this->CrispyChickenCost->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// QtyCrispyChicken
			// 
			this->QtyCrispyChicken->BackColor = System::Drawing::Color::Black;
			this->QtyCrispyChicken->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QtyCrispyChicken->ForeColor = System::Drawing::Color::OrangeRed;
			this->QtyCrispyChicken->Location = System::Drawing::Point(190, 173);
			this->QtyCrispyChicken->Name = L"QtyCrispyChicken";
			this->QtyCrispyChicken->Size = System::Drawing::Size(152, 31);
			this->QtyCrispyChicken->TabIndex = 10;
			this->QtyCrispyChicken->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->QtyCrispyChicken->ValueChanged += gcnew System::EventHandler(this, &MyForm::QtyCrispyChicken_ValueChanged);
			// 
			// BBQCost
			// 
			this->BBQCost->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->BBQCost->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BBQCost->ForeColor = System::Drawing::Color::OrangeRed;
			this->BBQCost->Location = System::Drawing::Point(393, 131);
			this->BBQCost->Name = L"BBQCost";
			this->BBQCost->Size = System::Drawing::Size(136, 31);
			this->BBQCost->TabIndex = 8;
			this->BBQCost->Text = L"0.00 LE";
			this->BBQCost->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::OrangeRed;
			this->label9->Location = System::Drawing::Point(8, 183);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(160, 23);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Crispy Chicken";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::OrangeRed;
			this->label6->Location = System::Drawing::Point(390, 132);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 25);
			this->label6->TabIndex = 8;
			this->label6->Text = L"0.00 LE";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// QtyBBQ
			// 
			this->QtyBBQ->BackColor = System::Drawing::Color::Black;
			this->QtyBBQ->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QtyBBQ->ForeColor = System::Drawing::Color::OrangeRed;
			this->QtyBBQ->Location = System::Drawing::Point(191, 129);
			this->QtyBBQ->Name = L"QtyBBQ";
			this->QtyBBQ->Size = System::Drawing::Size(152, 31);
			this->QtyBBQ->TabIndex = 7;
			this->QtyBBQ->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->QtyBBQ->ValueChanged += gcnew System::EventHandler(this, &MyForm::QtyBBQ_ValueChanged);
			// 
			// BeefBurgerCost
			// 
			this->BeefBurgerCost->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->BeefBurgerCost->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BeefBurgerCost->ForeColor = System::Drawing::Color::OrangeRed;
			this->BeefBurgerCost->Location = System::Drawing::Point(392, 89);
			this->BeefBurgerCost->Name = L"BeefBurgerCost";
			this->BeefBurgerCost->Size = System::Drawing::Size(136, 31);
			this->BeefBurgerCost->TabIndex = 5;
			this->BeefBurgerCost->Text = L"0.00 LE";
			this->BeefBurgerCost->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::OrangeRed;
			this->label7->Location = System::Drawing::Point(11, 142);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(139, 23);
			this->label7->TabIndex = 6;
			this->label7->Text = L"BBQ Chicken";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::OrangeRed;
			this->label4->Location = System::Drawing::Point(389, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"0.00 LE";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// QtyBeefBurger
			// 
			this->QtyBeefBurger->BackColor = System::Drawing::Color::Black;
			this->QtyBeefBurger->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QtyBeefBurger->ForeColor = System::Drawing::Color::OrangeRed;
			this->QtyBeefBurger->Location = System::Drawing::Point(190, 85);
			this->QtyBeefBurger->Name = L"QtyBeefBurger";
			this->QtyBeefBurger->Size = System::Drawing::Size(152, 31);
			this->QtyBeefBurger->TabIndex = 4;
			this->QtyBeefBurger->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->QtyBeefBurger->ValueChanged += gcnew System::EventHandler(this, &MyForm::QtyBeefBurger_ValueChanged);
			// 
			// CheeseBurgerCost
			// 
			this->CheeseBurgerCost->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->CheeseBurgerCost->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CheeseBurgerCost->ForeColor = System::Drawing::Color::OrangeRed;
			this->CheeseBurgerCost->Location = System::Drawing::Point(393, 44);
			this->CheeseBurgerCost->Name = L"CheeseBurgerCost";
			this->CheeseBurgerCost->Size = System::Drawing::Size(135, 31);
			this->CheeseBurgerCost->TabIndex = 2;
			this->CheeseBurgerCost->Text = L"0.00 LE";
			this->CheeseBurgerCost->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::OrangeRed;
			this->label5->Location = System::Drawing::Point(11, 97);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 23);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Beef Burger";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::OrangeRed;
			this->label3->Location = System::Drawing::Point(390, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"0.00 LE";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// QtyCheeseBurger
			// 
			this->QtyCheeseBurger->BackColor = System::Drawing::Color::Black;
			this->QtyCheeseBurger->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QtyCheeseBurger->ForeColor = System::Drawing::Color::OrangeRed;
			this->QtyCheeseBurger->Location = System::Drawing::Point(191, 41);
			this->QtyCheeseBurger->Name = L"QtyCheeseBurger";
			this->QtyCheeseBurger->Size = System::Drawing::Size(151, 31);
			this->QtyCheeseBurger->TabIndex = 1;
			this->QtyCheeseBurger->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->QtyCheeseBurger->ValueChanged += gcnew System::EventHandler(this, &MyForm::QtyCheeseBurger_ValueChanged);
			// 
			// label500
			// 
			this->label500->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label500->ForeColor = System::Drawing::Color::OrangeRed;
			this->label500->Location = System::Drawing::Point(8, 50);
			this->label500->Name = L"label500";
			this->label500->Size = System::Drawing::Size(163, 33);
			this->label500->TabIndex = 0;
			this->label500->Text = L"Cheese Burger";
			// 
			// TitlePanel
			// 
			this->TitlePanel->BackColor = System::Drawing::Color::Transparent;
			this->TitlePanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->TitlePanel->Controls->Add(this->button1);
			this->TitlePanel->Controls->Add(this->textBox1);
			this->TitlePanel->Controls->Add(this->label100);
			this->TitlePanel->Location = System::Drawing::Point(13, 22);
			this->TitlePanel->Name = L"TitlePanel";
			this->TitlePanel->Size = System::Drawing::Size(1298, 84);
			this->TitlePanel->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::OrangeRed;
			this->button1->Location = System::Drawing::Point(1096, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox1->Location = System::Drawing::Point(837, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(253, 35);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Item Name";
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click_1);
			// 
			// label100
			// 
			this->label100->Font = (gcnew System::Drawing::Font(L"Georgia", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label100->ForeColor = System::Drawing::Color::OrangeRed;
			this->label100->Location = System::Drawing::Point(1, 4);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(530, 72);
			this->label100->TabIndex = 0;
			this->label100->Text = L"FCIS Burger Factory";
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// Panel1
			// 
			this->Panel1->BackColor = System::Drawing::Color::Black;
			this->Panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Panel1->Controls->Add(this->Label2);
			this->Panel1->Controls->Add(this->Panel5);
			this->Panel1->Controls->Add(this->CheckBox1);
			this->Panel1->Controls->Add(this->signinInput2);
			this->Panel1->Controls->Add(this->Panel4);
			this->Panel1->Controls->Add(this->Panel3);
			this->Panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->Panel1->Location = System::Drawing::Point(600, 0);
			this->Panel1->Name = L"Panel1";
			this->Panel1->Size = System::Drawing::Size(770, 749);
			this->Panel1->TabIndex = 0;
			// 
			// Label2
			// 
			this->Label2->AutoSize = true;
			this->Label2->BackColor = System::Drawing::Color::Transparent;
			this->Label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Label2->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label2->ForeColor = System::Drawing::Color::OrangeRed;
			this->Label2->Location = System::Drawing::Point(287, 321);
			this->Label2->Name = L"Label2";
			this->Label2->Size = System::Drawing::Size(196, 18);
			this->Label2->TabIndex = 4;
			this->Label2->Text = L"continue without signing in";
			this->Label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// Panel5
			// 
			this->Panel5->BackColor = System::Drawing::Color::Black;
			this->Panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Panel5->Controls->Add(this->label25);
			this->Panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Panel5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 12.25F));
			this->Panel5->Location = System::Drawing::Point(0, 554);
			this->Panel5->Name = L"Panel5";
			this->Panel5->Size = System::Drawing::Size(766, 191);
			this->Panel5->TabIndex = 3;
			this->Panel5->Click += gcnew System::EventHandler(this, &MyForm::others);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::OrangeRed;
			this->label25->Location = System::Drawing::Point(15, 25);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(743, 125);
			this->label25->TabIndex = 0;
			this->label25->Text = resources->GetString(L"label25.Text");
			// 
			// CheckBox1
			// 
			this->CheckBox1->AutoSize = true;
			this->CheckBox1->BackColor = System::Drawing::SystemColors::WindowText;
			this->CheckBox1->Checked = true;
			this->CheckBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->CheckBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CheckBox1->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CheckBox1->ForeColor = System::Drawing::Color::OrangeRed;
			this->CheckBox1->Location = System::Drawing::Point(270, 250);
			this->CheckBox1->Name = L"CheckBox1";
			this->CheckBox1->Size = System::Drawing::Size(213, 18);
			this->CheckBox1->TabIndex = 2;
			this->CheckBox1->Text = L"I agree to the terms of conditions";
			this->CheckBox1->UseVisualStyleBackColor = false;
			this->CheckBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			this->CheckBox1->Click += gcnew System::EventHandler(this, &MyForm::others);
			// 
			// signinInput2
			// 
			this->signinInput2->BackColor = System::Drawing::Color::Black;
			this->signinInput2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signinInput2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->signinInput2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signinInput2->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signinInput2->ForeColor = System::Drawing::Color::OrangeRed;
			this->signinInput2->Location = System::Drawing::Point(267, 274);
			this->signinInput2->Name = L"signinInput2";
			this->signinInput2->Size = System::Drawing::Size(236, 30);
			this->signinInput2->TabIndex = 1;
			this->signinInput2->Text = L"Sign in";
			this->signinInput2->UseVisualStyleBackColor = false;
			this->signinInput2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// Panel4
			// 
			this->Panel4->BackColor = System::Drawing::Color::Black;
			this->Panel4->Controls->Add(this->Passwordtex2);
			this->Panel4->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Panel4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Panel4->Location = System::Drawing::Point(267, 200);
			this->Panel4->Name = L"Panel4";
			this->Panel4->Size = System::Drawing::Size(264, 48);
			this->Panel4->TabIndex = 1;
			this->Panel4->Click += gcnew System::EventHandler(this, &MyForm::others);
			// 
			// Passwordtex2
			// 
			this->Passwordtex2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->Passwordtex2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Passwordtex2->Font = (gcnew System::Drawing::Font(L"Georgia", 10.25F));
			this->Passwordtex2->ForeColor = System::Drawing::Color::OrangeRed;
			this->Passwordtex2->Location = System::Drawing::Point(3, 15);
			this->Passwordtex2->Name = L"Passwordtex2";
			this->Passwordtex2->Size = System::Drawing::Size(233, 16);
			this->Passwordtex2->TabIndex = 0;
			this->Passwordtex2->Text = L"Password";
			this->Passwordtex2->Click += gcnew System::EventHandler(this, &MyForm::textBox2_Click);
			// 
			// Panel3
			// 
			this->Panel3->BackColor = System::Drawing::Color::Black;
			this->Panel3->Controls->Add(this->usernametex1);
			this->Panel3->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Panel3->Location = System::Drawing::Point(267, 148);
			this->Panel3->Name = L"Panel3";
			this->Panel3->Size = System::Drawing::Size(264, 46);
			this->Panel3->TabIndex = 0;
			this->Panel3->Click += gcnew System::EventHandler(this, &MyForm::others);
			// 
			// usernametex1
			// 
			this->usernametex1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->usernametex1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernametex1->Font = (gcnew System::Drawing::Font(L"Georgia", 10.25F));
			this->usernametex1->ForeColor = System::Drawing::Color::OrangeRed;
			this->usernametex1->Location = System::Drawing::Point(3, 11);
			this->usernametex1->Name = L"usernametex1";
			this->usernametex1->Size = System::Drawing::Size(233, 16);
			this->usernametex1->TabIndex = 0;
			this->usernametex1->Text = L"Username/Phone Number";
			this->usernametex1->Click += gcnew System::EventHandler(this, &MyForm::textbox1_Click);
			// 
			// Panel2
			// 
			this->Panel2->BackColor = System::Drawing::Color::Black;
			this->Panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Panel2->Controls->Add(this->pictureBox1);
			this->Panel2->Controls->Add(this->Label1);
			this->Panel2->Controls->Add(this->registerbut1);
			this->Panel2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Panel2->Location = System::Drawing::Point(711, 0);
			this->Panel2->Name = L"Panel2";
			this->Panel2->Size = System::Drawing::Size(0, 749);
			this->Panel2->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(145, 36);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(281, 268);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// Label1
			// 
			this->Label1->AutoSize = true;
			this->Label1->BackColor = System::Drawing::Color::Transparent;
			this->Label1->Font = (gcnew System::Drawing::Font(L"Georgia", 18.25F, System::Drawing::FontStyle::Bold));
			this->Label1->ForeColor = System::Drawing::Color::OrangeRed;
			this->Label1->Location = System::Drawing::Point(151, 321);
			this->Label1->Name = L"Label1";
			this->Label1->Size = System::Drawing::Size(275, 30);
			this->Label1->TabIndex = 1;
			this->Label1->Text = L"FCIS Burger Factory";
			this->Label1->Click += gcnew System::EventHandler(this, &MyForm::others);
			// 
			// registerbut1
			// 
			this->registerbut1->BackColor = System::Drawing::Color::Black;
			this->registerbut1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->registerbut1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->registerbut1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->registerbut1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerbut1->ForeColor = System::Drawing::Color::OrangeRed;
			this->registerbut1->Location = System::Drawing::Point(177, 387);
			this->registerbut1->Name = L"registerbut1";
			this->registerbut1->Size = System::Drawing::Size(216, 30);
			this->registerbut1->TabIndex = 0;
			this->registerbut1->Text = L"Register";
			this->registerbut1->UseVisualStyleBackColor = false;
			this->registerbut1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// backpnl
			// 
			this->backpnl->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->backpnl->Controls->Add(this->label21);
			this->backpnl->Controls->Add(this->register_pnl);
			this->backpnl->Controls->Add(this->btnBack);
			this->backpnl->Location = System::Drawing::Point(12, 12);
			this->backpnl->Name = L"backpnl";
			this->backpnl->Size = System::Drawing::Size(1336, 640);
			this->backpnl->TabIndex = 0;
			this->backpnl->Visible = false;
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"Georgia", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::OrangeRed;
			this->label21->Location = System::Drawing::Point(274, 123);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(869, 72);
			this->label21->TabIndex = 0;
			this->label21->Text = L"FCIS Burger Factory";
			this->label21->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// register_pnl
			// 
			this->register_pnl->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->register_pnl->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->register_pnl->Controls->Add(this->checkBox2);
			this->register_pnl->Controls->Add(this->pictureBox2);
			this->register_pnl->Controls->Add(this->btn_Register);
			this->register_pnl->Controls->Add(this->txtbox_phone);
			this->register_pnl->Controls->Add(this->txtbox_confirm);
			this->register_pnl->Controls->Add(this->txtboxpass);
			this->register_pnl->Controls->Add(this->txtbox_username);
			this->register_pnl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->register_pnl->Location = System::Drawing::Point(274, 211);
			this->register_pnl->Name = L"register_pnl";
			this->register_pnl->Size = System::Drawing::Size(869, 403);
			this->register_pnl->TabIndex = 1;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->ForeColor = System::Drawing::Color::OrangeRed;
			this->checkBox2->Location = System::Drawing::Point(14, 333);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(198, 33);
			this->checkBox2->TabIndex = 6;
			this->checkBox2->Text = L"Show Password";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(439, 39);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(342, 232);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// btn_Register
			// 
			this->btn_Register->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_Register->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Register->ForeColor = System::Drawing::Color::OrangeRed;
			this->btn_Register->Location = System::Drawing::Point(540, 313);
			this->btn_Register->Name = L"btn_Register";
			this->btn_Register->Size = System::Drawing::Size(241, 48);
			this->btn_Register->TabIndex = 4;
			this->btn_Register->Text = L"Register";
			this->btn_Register->UseVisualStyleBackColor = false;
			this->btn_Register->Click += gcnew System::EventHandler(this, &MyForm::btn_Register_Click);
			// 
			// txtbox_phone
			// 
			this->txtbox_phone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtbox_phone->BackColor = System::Drawing::SystemColors::InfoText;
			this->txtbox_phone->Font = (gcnew System::Drawing::Font(L"Georgia", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbox_phone->ForeColor = System::Drawing::Color::OrangeRed;
			this->txtbox_phone->Location = System::Drawing::Point(14, 259);
			this->txtbox_phone->Multiline = true;
			this->txtbox_phone->Name = L"txtbox_phone";
			this->txtbox_phone->Size = System::Drawing::Size(318, 46);
			this->txtbox_phone->TabIndex = 3;
			this->txtbox_phone->Text = L"Phone Number";
			this->txtbox_phone->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtbox_phone->Click += gcnew System::EventHandler(this, &MyForm::txtbox_phone_Click);
			// 
			// txtbox_confirm
			// 
			this->txtbox_confirm->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtbox_confirm->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->txtbox_confirm->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbox_confirm->ForeColor = System::Drawing::Color::OrangeRed;
			this->txtbox_confirm->Location = System::Drawing::Point(14, 177);
			this->txtbox_confirm->Multiline = true;
			this->txtbox_confirm->Name = L"txtbox_confirm";
			this->txtbox_confirm->Size = System::Drawing::Size(318, 46);
			this->txtbox_confirm->TabIndex = 2;
			this->txtbox_confirm->Text = L"Confirm Password";
			this->txtbox_confirm->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtbox_confirm->Click += gcnew System::EventHandler(this, &MyForm::txtbox_confirm_Click);
			// 
			// txtboxpass
			// 
			this->txtboxpass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtboxpass->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->txtboxpass->Font = (gcnew System::Drawing::Font(L"Georgia", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtboxpass->ForeColor = System::Drawing::Color::OrangeRed;
			this->txtboxpass->Location = System::Drawing::Point(14, 103);
			this->txtboxpass->Multiline = true;
			this->txtboxpass->Name = L"txtboxpass";
			this->txtboxpass->Size = System::Drawing::Size(318, 46);
			this->txtboxpass->TabIndex = 1;
			this->txtboxpass->Text = L"Password";
			this->txtboxpass->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtboxpass->Click += gcnew System::EventHandler(this, &MyForm::txtboxpass_Click);
			// 
			// txtbox_username
			// 
			this->txtbox_username->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtbox_username->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->txtbox_username->Font = (gcnew System::Drawing::Font(L"Georgia", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbox_username->ForeColor = System::Drawing::Color::OrangeRed;
			this->txtbox_username->Location = System::Drawing::Point(14, 24);
			this->txtbox_username->Multiline = true;
			this->txtbox_username->Name = L"txtbox_username";
			this->txtbox_username->Size = System::Drawing::Size(318, 46);
			this->txtbox_username->TabIndex = 0;
			this->txtbox_username->Text = L"Username";
			this->txtbox_username->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtbox_username->Click += gcnew System::EventHandler(this, &MyForm::txtbox_username_Click);
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Georgia", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBack->ForeColor = System::Drawing::Color::OrangeRed;
			this->btnBack->Location = System::Drawing::Point(13, 17);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(246, 60);
			this->btnBack->TabIndex = 0;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &MyForm::btnBack_Click);
			// 
			// confirmpanel
			// 
			this->confirmpanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->confirmpanel->Controls->Add(this->pictureBox3);
			this->confirmpanel->Controls->Add(this->confirmbtn);
			this->confirmpanel->Controls->Add(this->editorderbtn);
			this->confirmpanel->Controls->Add(this->confirmlabel);
			this->confirmpanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->confirmpanel->Location = System::Drawing::Point(0, 0);
			this->confirmpanel->Name = L"confirmpanel";
			this->confirmpanel->Size = System::Drawing::Size(711, 749);
			this->confirmpanel->TabIndex = 0;
			this->confirmpanel->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(148, 85);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(324, 235);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// confirmbtn
			// 
			this->confirmbtn->BackColor = System::Drawing::Color::Black;
			this->confirmbtn->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmbtn->ForeColor = System::Drawing::Color::OrangeRed;
			this->confirmbtn->Location = System::Drawing::Point(373, 480);
			this->confirmbtn->Name = L"confirmbtn";
			this->confirmbtn->Size = System::Drawing::Size(198, 64);
			this->confirmbtn->TabIndex = 2;
			this->confirmbtn->Text = L"Confirm";
			this->confirmbtn->UseVisualStyleBackColor = false;
			this->confirmbtn->Click += gcnew System::EventHandler(this, &MyForm::confirmbtn_Click);
			// 
			// editorderbtn
			// 
			this->editorderbtn->BackColor = System::Drawing::Color::Black;
			this->editorderbtn->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editorderbtn->ForeColor = System::Drawing::Color::OrangeRed;
			this->editorderbtn->Location = System::Drawing::Point(40, 480);
			this->editorderbtn->Name = L"editorderbtn";
			this->editorderbtn->Size = System::Drawing::Size(198, 64);
			this->editorderbtn->TabIndex = 1;
			this->editorderbtn->Text = L"Edit order";
			this->editorderbtn->UseVisualStyleBackColor = false;
			this->editorderbtn->Click += gcnew System::EventHandler(this, &MyForm::editorderbtn_Click);
			// 
			// confirmlabel
			// 
			this->confirmlabel->Font = (gcnew System::Drawing::Font(L"Georgia", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmlabel->ForeColor = System::Drawing::Color::OrangeRed;
			this->confirmlabel->Location = System::Drawing::Point(129, 346);
			this->confirmlabel->Name = L"confirmlabel";
			this->confirmlabel->Size = System::Drawing::Size(366, 85);
			this->confirmlabel->TabIndex = 0;
			this->confirmlabel->Text = L"Please confirm your order";
			this->confirmlabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->Panel2);
			this->Controls->Add(this->confirmpanel);
			this->Controls->Add(this->Panel1);
			this->Controls->Add(this->ChooseOrderPanel);
			this->Controls->Add(this->backpnl);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FCIS Burger Factory";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ChooseOrderPanel->ResumeLayout(false);
			this->panel500->ResumeLayout(false);
			this->ReceiptPanel->ResumeLayout(false);
			this->MenuPanel->ResumeLayout(false);
			this->MenuPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QtyCombo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QtyBacon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QtyBuffalo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QtyCrispyChicken))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QtyBBQ))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QtyBeefBurger))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QtyCheeseBurger))->EndInit();
			this->TitlePanel->ResumeLayout(false);
			this->TitlePanel->PerformLayout();
			this->Panel1->ResumeLayout(false);
			this->Panel1->PerformLayout();
			this->Panel5->ResumeLayout(false);
			this->Panel5->PerformLayout();
			this->Panel4->ResumeLayout(false);
			this->Panel4->PerformLayout();
			this->Panel3->ResumeLayout(false);
			this->Panel3->PerformLayout();
			this->Panel2->ResumeLayout(false);
			this->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->backpnl->ResumeLayout(false);
			this->register_pnl->ResumeLayout(false);
			this->register_pnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->confirmpanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		System::Windows::Forms::DialogResult iExit;
		iExit = MessageBox::Show("Are you sure?", "FCIS Burger Factory", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (iExit == System::Windows::Forms::DialogResult::Yes)
			Application::Exit();
	}
	catch(Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		QtyCheeseBurger->Value = 0;
		QtyBeefBurger->Value = 0;
		QtyBBQ->Value = 0;
		QtyCrispyChicken->Value = 0;
		QtyBuffalo->Value = 0;
		QtyBacon->Value = 0;
		QtyCombo->Value = 0;
		
		richTextBox1->Clear();

		CheeseBurgerCost->Text = "0.00 LE";
		BeefBurgerCost->Text = "0.00 LE";
		BBQCost->Text = "0.00 LE";
		CrispyChickenCost->Text = "0.00 LE";
		BuffaloCost->Text = "0.00 LE";
		BaconCost->Text = "0.00 LE";
		ComboCost->Text = "0.00 LE";

		numItems->Text = "0";
		TotalPrice->Text = "0.00 LE";
		TotalCals->Text = "0.00 kcal";

		label500->ForeColor = Color::OrangeRed;
		label500->BackColor = Color::Black;

		label5->ForeColor = Color::OrangeRed;
		label5->BackColor = Color::Black;

		label7->ForeColor = Color::OrangeRed;
		label7->BackColor = Color::Black;

		label9->ForeColor = Color::OrangeRed;
		label9->BackColor = Color::Black;

		label11->ForeColor = Color::OrangeRed;
		label11->BackColor = Color::Black;

		label13->ForeColor = Color::OrangeRed;
		label13->BackColor = Color::Black;

		label15->ForeColor = Color::OrangeRed;
		label15->BackColor = Color::Black;
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
	   //Total price for each item
private: System::Void QtyCheeseBurger_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	double i = Convert::ToDouble(QtyCheeseBurger->Value);
	CheeseBurgerCost->Text = Convert::ToString(i * CheeseBurger)+" LE";
}
private: System::Void QtyBeefBurger_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	double i = Convert::ToDouble(QtyBeefBurger->Value);
	BeefBurgerCost->Text = Convert::ToString(i * BeefBurger) + " LE";
}
private: System::Void QtyBBQ_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	double i = Convert::ToDouble(QtyBBQ->Value);
	BBQCost->Text = Convert::ToString(i * BBQChicken) + " LE";
}
private: System::Void QtyCrispyChicken_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	double i = Convert::ToDouble(QtyCrispyChicken->Value);
	CrispyChickenCost->Text = Convert::ToString(i * CrispyChicken)+" LE";
}
private: System::Void QtyBuffalo_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	double i = Convert::ToDouble(QtyBuffalo->Value);
	BuffaloCost->Text = Convert::ToString(i * SpicyBuffalo)+" LE";
}
private: System::Void QtyBacon_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	double i = Convert::ToDouble(QtyBacon->Value);
	BaconCost->Text = Convert::ToString(i * BeefBacon)+" LE";
}
private: System::Void QtyCombo_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	double i = Convert::ToDouble(QtyCombo->Value);
	ComboCost->Text = Convert::ToString(i * Combo)+" LE";
}
	 //Total quantity
private: System::Void btnTotal_Click(System::Object^ sender, System::EventArgs^ e) {
	double q[8], totalQty=0;
	q[0] = Convert::ToDouble(QtyCheeseBurger->Value);
	q[1] = Convert::ToDouble(QtyBeefBurger->Value);
	q[2] = Convert::ToDouble(QtyBBQ->Value);
	q[3] = Convert::ToDouble(QtyCrispyChicken->Value);
	q[4] = Convert::ToDouble(QtyBuffalo->Value);
	q[5] = Convert::ToDouble(QtyBacon->Value);
	q[6] = Convert::ToDouble(QtyCombo->Value);
	for (int i = 0; i < 7; i++) 
		totalQty += q[i];
	numItems->Text = Convert::ToString(totalQty);
	//Total price
	TotalPrice->Text = Convert::ToString(TotalPriceCalc(q))+" LE";
	//Total calories
	TotalCals->Text = Convert::ToString(TotalCalorieCalc(q))+" kcal";
}
	   //Receipt
private: System::Void btnReceipt_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Clear();
	richTextBox1->AppendText(label22->Text + "\t" + "\t" + "\t" + label23->Text + "\t" + "\t" + label24->Text + "\n" + "\n");

	if (QtyCheeseBurger->Value != 0) 
		richTextBox1->AppendText(label500->Text + "\t" + "\t" + QtyCheeseBurger->Value + "\t" + "\t" + CheeseBurgerCost->Text + "\n" + "\n");
	
	 if (QtyBeefBurger->Value != 0) 
		richTextBox1->AppendText(label5->Text + "\t" + "\t" + "\t" + QtyBeefBurger->Value + "\t" + "\t" + BeefBurgerCost->Text + "\n" + "\n");

	 if (QtyBBQ->Value != 0) 
		richTextBox1->AppendText(label7->Text + "\t" + "\t" + QtyBBQ->Value + "\t" + "\t" + BBQCost->Text + "\n" + "\n");

	 if (QtyCrispyChicken->Value != 0) 
		richTextBox1->AppendText(label9->Text + "\t" + "\t" + QtyCrispyChicken->Value + "\t" + "\t" + CrispyChickenCost->Text + "\n" + "\n");
	
	 if (QtyBuffalo->Value != 0) 
		 richTextBox1->AppendText(label11->Text + "\t" + "\t" + QtyBuffalo->Value + "\t" + "\t" + BuffaloCost->Text + "\n" + "\n");
	
	 if (QtyBacon->Value != 0) 
		richTextBox1->AppendText(label13->Text + "\t" + "\t" + "\t" + QtyBacon->Value + "\t" + "\t" + BaconCost->Text + "\n" + "\n");

	 if (QtyCombo->Value != 0) 
		 richTextBox1->AppendText(label15->Text + "\t" + "\t" + "\t" + QtyCombo->Value + "\t" + "\t" + ComboCost->Text + "\n" + "\n");
	 //Receipt total
	 richTextBox1->AppendText(label18->Text + "\t" + "\t" + "\t" + "\t" + numItems->Text + "\t" + "\t" + TotalPrice->Text + "\n" + "\n");
}
	   //Text Reset on click of all elements in the page
	   private: System::Void textbox1_Click(System::Object^ sender, System::EventArgs^ e) {
		   if (usernametex1->Text == "Username/Phone Number")
			   usernametex1->Text = "";
		   
		   if (Passwordtex2->Text == "") 
			   Passwordtex2->Text = "Password";
		  
		   if (Passwordtex2->Text == "Password") 
			   Passwordtex2->PasswordChar = NULL;
	   }
	private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Passwordtex2->Text == "Password")
			Passwordtex2->Text = "";
		
		if (usernametex1->Text == "")
			usernametex1->Text = "Username/Phone Number";
		
		if (Passwordtex2->Text != "Password") 
			Passwordtex2->PasswordChar = '*';
	}
private: System::Void others(System::Object^ sender, System::EventArgs^ e) {
	if (usernametex1->Text == "")
		usernametex1->Text = "Username/Phone Number";
	
	if (Passwordtex2->Text == "")
		Passwordtex2->Text = "Password";
	
	if (Passwordtex2->Text == "Password") 
		Passwordtex2->PasswordChar = NULL;
}
	   //Signin Button activation
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (CheckBox1->Checked)
		signinInput2->Enabled = true;
	else
		signinInput2->Enabled = false;
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (usernametex1->Text == "")
		usernametex1->Text = "Username/Phone Number";
	
	if (Passwordtex2->Text == "")
		Passwordtex2->Text = "Password";
	
	if (Passwordtex2->Text == "Password") 
		Passwordtex2->PasswordChar = NULL;
	
	if (MessageBox::Show("Are you sure want to continue without signing in ? this will stop synchronizing your settings and won`t customize any settings. ", "Are you sure ? ", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
	{
		Panel1->Hide();
		Panel2->Hide();
		ChooseOrderPanel->Show();
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (usernametex1->Text == "")
		usernametex1->Text = "Username/Phone Number";
	
	if (Passwordtex2->Text == "")
		Passwordtex2->Text = "Password";
	
	if (Passwordtex2->Text == "Password") 
		Passwordtex2->PasswordChar = NULL;
	
	Panel1->Hide();
	Panel2->Hide();
	backpnl->Show();
	register_pnl->Show();
}
	   //Login 
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (usernametex1->Text != "Username/Phone Number")
	{
		if (toStandardString(usernametex1->Text) == acc1.username||toStandardString(usernametex1->Text)==acc1.phonenumber||usernametex1->Text=="admin")
		{
			if (usernametex1->Text == "admin") {
				if (Passwordtex2->Text == "admin") {
					MessageBox::Show("sign is successful", "FCIS Burger Factory");
					Panel1->Hide();
					Panel2->Hide();
					ChooseOrderPanel->Show();
				}
				else
					MessageBox::Show("Incorrect password", "FCIS Burger Factory");
			}
			else if (toStandardString(Passwordtex2->Text) == acc1.password)
			{
				MessageBox::Show("sign is successful", "FCIS Burger Factory");
				Panel1->Hide();
				Panel2->Hide();
				ChooseOrderPanel->Show();
			}
			else
				MessageBox::Show("Incorrect password", "FCIS Burger Factory");
		}
		else
			MessageBox::Show("User doesn`t exist", "FCIS Burger Factory");
	}
	else
		MessageBox::Show("Invalid username", "FCIS Burger Factory");
	
	if (usernametex1->Text == "")
		usernametex1->Text = "Username/Phone Number";
	
	if (Passwordtex2->Text == "")
		Passwordtex2->Text = "Password";
	
	if (Passwordtex2->Text == "Password") 
		Passwordtex2->PasswordChar = NULL;	
}
    //Registry
private: System::Void btn_Register_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Registryfunction(toStandardString(txtbox_username->Text), toStandardString(txtbox_phone ->Text), toStandardString(txtboxpass->Text), toStandardString(txtbox_confirm->Text))) {
		MessageBox::Show("Account Created Successfully", "FCIS Burger Factory");
		Panel1->Show();
		Panel2->Show();
		backpnl->Hide();
		register_pnl->Hide();
	}
	else 
		MessageBox::Show("Inavalid Info","FCIS Burger Factory");

	acc1.username = toStandardString(txtbox_username->Text);
	acc1.password = toStandardString(txtboxpass->Text);
	acc1.phonenumber = toStandardString(txtbox_phone->Text);
}

private: System::Void txtbox_username_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtbox_username->Text == "Username") 
		txtbox_username->Text = "";
		
	if (txtboxpass->Text == "") 
		txtboxpass->Text = "Password";
	
	if (txtbox_confirm->Text == "") 
		txtbox_confirm->Text = "Confirm Password";
	
	if (txtbox_phone->Text == "") 
		txtbox_phone->Text = "Phone Number";
	
	if (txtbox_confirm->Text == "Confirm Password"||checkBox2->Checked==true) 
		txtbox_confirm->PasswordChar = NULL;
	
	if (txtboxpass->Text == "Password"||checkBox2->Checked==true) 
		txtboxpass->PasswordChar = NULL;
	
	if (checkBox2->Checked == false) {
		if (txtboxpass->Text != "Password") 
			txtboxpass->PasswordChar = '*';
		
		if (txtbox_confirm->Text != "Confirm Password") 
			txtbox_confirm->PasswordChar = '*';
	}
}
private: System::Void txtboxpass_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtboxpass->Text == "Password") 
		txtboxpass->Text = "";
	
	if(txtbox_username->Text=="") 
		txtbox_username->Text = "Username";
	
	if (txtbox_confirm->Text == "") 
		txtbox_confirm->Text = "Confirm Password";
	
	if (txtbox_phone->Text == "") 
		txtbox_phone->Text = "Phone Number";
	
	
	if (txtbox_confirm->Text == "Confirm Password"||checkBox2->Checked==true) 
		txtbox_confirm->PasswordChar = NULL;
	
	if (checkBox2->Checked == false) {
		if (txtboxpass->Text != "Password") 
			txtboxpass->PasswordChar = '*';
		
		if (txtbox_confirm->Text != "Confirm Password") 
			txtbox_confirm->PasswordChar = '*';
	}
}
private: System::Void txtbox_confirm_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtbox_confirm->Text == "Confirm Password") 
		txtbox_confirm->Text = "";
	
	if (txtbox_username->Text == "") 
		txtbox_username->Text = "Username";
	
	if (txtboxpass->Text == "") 
		txtboxpass->Text = "Password";
	
	if (txtbox_phone->Text == "") 
		txtbox_phone->Text = "Phone Number";
	
	if (txtboxpass->Text == "Password"||checkBox2->Checked==true) 
		txtboxpass->PasswordChar = NULL;
	
	if (checkBox2->Checked == false) {
		if (txtboxpass->Text != "Password") 
			txtboxpass->PasswordChar = '*';
		
		if (txtbox_confirm->Text != "Confirm Password") 
			txtbox_confirm->PasswordChar = '*';
	}
}
private: System::Void txtbox_phone_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtbox_phone->Text == "Phone Number") 
		txtbox_phone->Text = "";
	
	if (txtbox_username->Text == "") 
		txtbox_username->Text = "Username";
	
	if (txtbox_confirm->Text == "") 
		txtbox_confirm->Text = "Confirm Password";
	
	if (txtboxpass->Text == "") 
		txtboxpass->Text = "Password";
	
	if (txtbox_confirm->Text == "Confirm Password" || checkBox2->Checked == true) 
		txtbox_confirm->PasswordChar = NULL;
	
	if (txtboxpass->Text == "Password"||checkBox2->Checked==true) 
		txtboxpass->PasswordChar = NULL;
	
	if (checkBox2->Checked == false) {
		if (txtboxpass->Text != "Password") 
			txtboxpass->PasswordChar = '*';
		
		if (txtbox_confirm->Text != "Confirm Password") 
			txtbox_confirm->PasswordChar = '*';
	}
}
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	
	txtbox_username->Text = "Username";
	txtboxpass->Text = "Password";
	txtbox_confirm->Text = "Confirm Password";
	txtbox_phone->Text = "Phone Number";
	txtboxpass->PasswordChar = NULL;
	txtbox_confirm->PasswordChar = NULL;
	
	backpnl->Hide();
	register_pnl->Hide();
	Panel2->Show();
	Panel1->Show();
}
	   //Search in menu
private: System::Void textBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Item Name"|| textBox1->Text == "Cheese Burger" || textBox1->Text == "cheese burger" || textBox1->Text == "Cheese burger"|| textBox1->Text == "Beef Burger" || textBox1->Text == "beef burger" || textBox1->Text == "Beef burger"|| textBox1->Text == "BBQ Chicken" || textBox1->Text == "BBQ" || textBox1->Text == "BBQ chicken"
		||textBox1->Text == "Crispy Chicken" || textBox1->Text == "Crispy" || textBox1->Text == "crispy chicken"|| textBox1->Text == "Spicy Buffalo" || textBox1->Text == "Buffalo" || textBox1->Text == "Spicy"
		||textBox1->Text == "Beef Bacon" || textBox1->Text == "Bacon" || textBox1->Text == "beef bacon"|| textBox1->Text == "Combo" || textBox1->Text == "combo") 
		textBox1->Text = "";
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Cheese Burger" || textBox1->Text == "cheese burger" || textBox1->Text == "Cheese burger") {
		label500->ForeColor = Color::Black;
		label500->BackColor = Color::OrangeRed;

		label5->ForeColor = Color::OrangeRed;
		label5->BackColor = Color::Black;

		label7->ForeColor = Color::OrangeRed;
		label7->BackColor = Color::Black;

		label9->ForeColor = Color::OrangeRed;
		label9->BackColor = Color::Black;

		label11->ForeColor = Color::OrangeRed;
		label11->BackColor = Color::Black;

		label13->ForeColor = Color::OrangeRed;
		label13->BackColor = Color::Black;

		label15->ForeColor = Color::OrangeRed;
		label15->BackColor = Color::Black;

		textBox1->Text = "Item Name";
	}
	else if (textBox1->Text == "Beef Burger" || textBox1->Text == "beef burger" || textBox1->Text == "Beef burger") {
		label500->ForeColor = Color::OrangeRed;
		label500->BackColor = Color::Black;

		label5->ForeColor = Color::Black;
		label5->BackColor = Color::OrangeRed;

		label7->ForeColor = Color::OrangeRed;
		label7->BackColor = Color::Black;

		label9->ForeColor = Color::OrangeRed;
		label9->BackColor = Color::Black;

		label11->ForeColor = Color::OrangeRed;
		label11->BackColor = Color::Black;

		label13->ForeColor = Color::OrangeRed;
		label13->BackColor = Color::Black;

		label15->ForeColor = Color::OrangeRed;
		label15->BackColor = Color::Black;

		textBox1->Text = "Item Name";
	}
	else if (textBox1->Text == "BBQ Chicken" || textBox1->Text == "BBQ" || textBox1->Text == "BBQ chicken") {
		label500->ForeColor = Color::OrangeRed;
		label500->BackColor = Color::Black;

		label5->ForeColor = Color::OrangeRed;
		label5->BackColor = Color::Black;

		label7->ForeColor = Color::Black;
		label7->BackColor = Color::OrangeRed;

		label9->ForeColor = Color::OrangeRed;
		label9->BackColor = Color::Black;

		label11->ForeColor = Color::OrangeRed;
		label11->BackColor = Color::Black;

		label13->ForeColor = Color::OrangeRed;
		label13->BackColor = Color::Black;

		label15->ForeColor = Color::OrangeRed;
		label15->BackColor = Color::Black;

		textBox1->Text = "Item Name";
	}
	else if (textBox1->Text == "Crispy Chicken" || textBox1->Text == "Crispy" || textBox1->Text == "crispy chicken") {
		label500->ForeColor = Color::OrangeRed;
		label500->BackColor = Color::Black;

		label5->ForeColor = Color::OrangeRed;
		label5->BackColor = Color::Black;

		label7->ForeColor = Color::OrangeRed;
		label7->BackColor = Color::Black;

		label9->ForeColor = Color::Black;
		label9->BackColor = Color::OrangeRed;

		label11->ForeColor = Color::OrangeRed;
		label11->BackColor = Color::Black;

		label13->ForeColor = Color::OrangeRed;
		label13->BackColor = Color::Black;

		label15->ForeColor = Color::OrangeRed;
		label15->BackColor = Color::Black;

		textBox1->Text = "Item Name";
	}
	else if (textBox1->Text == "Spicy Buffalo" || textBox1->Text == "Buffalo" || textBox1->Text == "Spicy"||textBox1->Text=="spicy buffalo") {
		label500->ForeColor = Color::OrangeRed;
		label500->BackColor = Color::Black;

		label5->ForeColor = Color::OrangeRed;
		label5->BackColor = Color::Black;

		label7->ForeColor = Color::OrangeRed;
		label7->BackColor = Color::Black;

		label9->ForeColor = Color::OrangeRed;
		label9->BackColor = Color::Black;

		label11->ForeColor = Color::Black;
		label11->BackColor = Color::OrangeRed;

		label13->ForeColor = Color::OrangeRed;
		label13->BackColor = Color::Black;

		label15->ForeColor = Color::OrangeRed;
		label15->BackColor = Color::Black;

		textBox1->Text = "Item Name";
	}
	else if (textBox1->Text == "Beef Bacon" || textBox1->Text == "Bacon" || textBox1->Text == "beef bacon") {
		label500->ForeColor = Color::OrangeRed;
		label500->BackColor = Color::Black;

		label5->ForeColor = Color::OrangeRed;
		label5->BackColor = Color::Black;

		label7->ForeColor = Color::OrangeRed;
		label7->BackColor = Color::Black;

		label9->ForeColor = Color::OrangeRed;
		label9->BackColor = Color::Black;

		label11->ForeColor = Color::OrangeRed;
		label11->BackColor = Color::Black;

		label13->ForeColor = Color::Black;
		label13->BackColor = Color::OrangeRed;

		label15->ForeColor = Color::OrangeRed;
		label15->BackColor = Color::Black;

		textBox1->Text = "Item Name";
	}
	else if (textBox1->Text == "Combo" || textBox1->Text == "combo") {
		label500->ForeColor = Color::OrangeRed;
		label500->BackColor = Color::Black;

		label5->ForeColor = Color::OrangeRed;
		label5->BackColor = Color::Black;

		label7->ForeColor = Color::OrangeRed;
		label7->BackColor = Color::Black;

		label9->ForeColor = Color::OrangeRed;
		label9->BackColor = Color::Black;

		label11->ForeColor = Color::OrangeRed;
		label11->BackColor = Color::Black;

		label13->ForeColor = Color::OrangeRed;
		label13->BackColor = Color::Black;

		label15->ForeColor = Color::Black;
		label15->BackColor = Color::OrangeRed;

		textBox1->Text = "Item Name";
	}
	else {
		MessageBox::Show("Invalid Product", "FCIS Burger Factory");
		textBox1->Text = "Item Name";
	}
}
//Checkout
private: System::Void confirmbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	srand(time(0));
	int ordernum=rand()%100;
	MessageBox::Show(Convert::ToString(ordernum),"Order placed successfully. Your order number is " );
	MessageBox::Show("Thank you for ordering :) ", "FCIS Burger Factory");
	Application::Exit();
}
private: System::Void btnPrint_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string itemnum;
	itemnum = toStandardString(numItems->Text);
	if (itemnum != "0")
	{
		TitlePanel->Hide();
		MenuPanel->Hide();
		panel500->Hide();
		confirmpanel->Show();
	}
	else
		MessageBox::Show("You ordered nothing","FCIS Burger Factory");
}
private: System::Void editorderbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	TitlePanel->Show();
	MenuPanel->Show();
	panel500->Show();
	confirmpanel->Hide();
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked == true) {
		txtboxpass->PasswordChar = NULL;
		txtbox_confirm->PasswordChar = NULL;
	}
	else {
		if (txtboxpass->Text != "Password") 
			txtboxpass->PasswordChar = '*';
		
		if (txtbox_confirm->Text != "Confirm Password") 
			txtbox_confirm->PasswordChar = '*';
	}
}
};
}