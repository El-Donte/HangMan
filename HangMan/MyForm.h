#pragma once
#include "Win.h"
#include "GameOver.h"

namespace HangMan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent(); 
		}

		MyForm(String^ code,String^ w)
		{
			InitializeComponent();
			this->Word->Text = code;
			codeword = code;
			word = w;
			timer1->Enabled = true;
		}

	protected:
		
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label_Word;
	private: System::Windows::Forms::Label^ Word;

	private: System::ComponentModel::IContainer^ components;

	private: System::Windows::Forms::PictureBox^ plate;
	private: System::Windows::Forms::PictureBox^ head;
	private: System::Windows::Forms::PictureBox^ Body;
	private: System::Windows::Forms::PictureBox^ hand_L;
	private: System::Windows::Forms::PictureBox^ hand_R;
	private: System::Windows::Forms::PictureBox^ Leg_R;
	private: System::Windows::Forms::PictureBox^ Leg_L;

	private: System::Windows::Forms::Button^ Letter_A;
	private: System::Windows::Forms::Button^ Letter_T;
	private: System::Windows::Forms::Button^ Letter_R;
	private: System::Windows::Forms::Button^ Letter_Q;
	private: System::Windows::Forms::Button^ Letter_P;
	private: System::Windows::Forms::Button^ Letter_O;
	private: System::Windows::Forms::Button^ Letter_N;
	private: System::Windows::Forms::Button^ Letter_M;
	private: System::Windows::Forms::Button^ Letter_L;
	private: System::Windows::Forms::Button^ Letter_G;
	private: System::Windows::Forms::Button^ Letter_I;
	private: System::Windows::Forms::Button^ Letter_J;
	private: System::Windows::Forms::Button^ Letter_K;
	private: System::Windows::Forms::Button^ Letter_F;
	private: System::Windows::Forms::Button^ Letter_E;
	private: System::Windows::Forms::Button^ Letter_D;
	private: System::Windows::Forms::Button^ Letter_C;
	private: System::Windows::Forms::Button^ Letter_B;
	private: System::Windows::Forms::Button^ Letter_S;
	private: System::Windows::Forms::Button^ Letter_H;
	private: System::Windows::Forms::Button^ Letter_Z;
	private: System::Windows::Forms::Button^ Letter_Y;
	private: System::Windows::Forms::Button^ Letter_X;
	private: System::Windows::Forms::Button^ Letter_V;
	private: System::Windows::Forms::Button^ Letter_U;
	private: System::Windows::Forms::Button^ Letter_W;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	
	
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ time;
	private:  System::Windows::Forms::Timer^ timer1;

	private:
		String^ word;
		String^ codeword;
		wchar_t letter;
		int count = 0;
		static int sec = 0;
		static int min = 0;
		String^ Sec;
		String^ Min;
		bool flag = false;
		String^ WrongLetters;

#pragma region Windows Form Designer generated code
	void InitializeComponent(void)
	{
		this->components = (gcnew System::ComponentModel::Container());
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
		this->Letter_A = (gcnew System::Windows::Forms::Button());
		this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
		this->Word = (gcnew System::Windows::Forms::Label());
		this->label_Word = (gcnew System::Windows::Forms::Label());
		this->plate = (gcnew System::Windows::Forms::PictureBox());
		this->head = (gcnew System::Windows::Forms::PictureBox());
		this->Body = (gcnew System::Windows::Forms::PictureBox());
		this->hand_L = (gcnew System::Windows::Forms::PictureBox());
		this->hand_R = (gcnew System::Windows::Forms::PictureBox());
		this->Leg_R = (gcnew System::Windows::Forms::PictureBox());
		this->Leg_L = (gcnew System::Windows::Forms::PictureBox());
		this->time = (gcnew System::Windows::Forms::Label());
		this->Letter_T = (gcnew System::Windows::Forms::Button());
		this->Letter_R = (gcnew System::Windows::Forms::Button());
		this->Letter_Q = (gcnew System::Windows::Forms::Button());
		this->Letter_P = (gcnew System::Windows::Forms::Button());
		this->Letter_O = (gcnew System::Windows::Forms::Button());
		this->Letter_N = (gcnew System::Windows::Forms::Button());
		this->Letter_M = (gcnew System::Windows::Forms::Button());
		this->Letter_L = (gcnew System::Windows::Forms::Button());
		this->Letter_G = (gcnew System::Windows::Forms::Button());
		this->Letter_I = (gcnew System::Windows::Forms::Button());
		this->Letter_J = (gcnew System::Windows::Forms::Button());
		this->Letter_K = (gcnew System::Windows::Forms::Button());
		this->Letter_F = (gcnew System::Windows::Forms::Button());
		this->Letter_E = (gcnew System::Windows::Forms::Button());
		this->Letter_D = (gcnew System::Windows::Forms::Button());
		this->Letter_C = (gcnew System::Windows::Forms::Button());
		this->Letter_B = (gcnew System::Windows::Forms::Button());
		this->Letter_S = (gcnew System::Windows::Forms::Button());
		this->Letter_H = (gcnew System::Windows::Forms::Button());
		this->Letter_Z = (gcnew System::Windows::Forms::Button());
		this->Letter_Y = (gcnew System::Windows::Forms::Button());
		this->Letter_X = (gcnew System::Windows::Forms::Button());
		this->Letter_V = (gcnew System::Windows::Forms::Button());
		this->Letter_U = (gcnew System::Windows::Forms::Button());
		this->Letter_W = (gcnew System::Windows::Forms::Button());
		this->panel1 = (gcnew System::Windows::Forms::Panel());
		this->panel2 = (gcnew System::Windows::Forms::Panel());
		this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->plate))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->head))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Body))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hand_L))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hand_R))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Leg_R))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Leg_L))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
		this->SuspendLayout();
		// 
		// Letter_A
		// 
		this->Letter_A->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_A->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_A->Location = System::Drawing::Point(110, 356);
		this->Letter_A->Name = L"Letter_A";
		this->Letter_A->Size = System::Drawing::Size(28, 35);
		this->Letter_A->TabIndex = 0;
		this->Letter_A->Text = L"A";
		this->Letter_A->UseVisualStyleBackColor = false;
		this->Letter_A->Click += gcnew System::EventHandler(this, &MyForm::Letter_A_Click);
		// 
		// timer1
		// 
		this->timer1->Interval = 1000;
		this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
		// 
		// Word
		// 
		this->Word->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->Word->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Word->Location = System::Drawing::Point(180, 302);
		this->Word->Name = L"Word";
		this->Word->Size = System::Drawing::Size(230, 36);
		this->Word->TabIndex = 5;
		this->Word->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// label_Word
		// 
		this->label_Word->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->label_Word->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label_Word->Location = System::Drawing::Point(100, 302);
		this->label_Word->Name = L"label_Word";
		this->label_Word->Size = System::Drawing::Size(72, 39);
		this->label_Word->TabIndex = 7;
		this->label_Word->Text = L"Word";
		this->label_Word->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// plate
		// 
		this->plate->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->plate->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"plate.Image")));
		this->plate->Location = System::Drawing::Point(144, -5);
		this->plate->Name = L"plate";
		this->plate->Size = System::Drawing::Size(300, 304);
		this->plate->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->plate->TabIndex = 9;
		this->plate->TabStop = false;
		// 
		// head
		// 
		this->head->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->head->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"head.Image")));
		this->head->Location = System::Drawing::Point(231, 57);
		this->head->Name = L"head";
		this->head->Size = System::Drawing::Size(58, 50);
		this->head->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->head->TabIndex = 10;
		this->head->TabStop = false;
		this->head->Visible = false;
		// 
		// Body
		// 
		this->Body->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->Body->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Body.Image")));
		this->Body->Location = System::Drawing::Point(246, 107);
		this->Body->Name = L"Body";
		this->Body->Size = System::Drawing::Size(27, 77);
		this->Body->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->Body->TabIndex = 11;
		this->Body->TabStop = false;
		this->Body->Visible = false;
		// 
		// hand_L
		// 
		this->hand_L->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hand_L.Image")));
		this->hand_L->Location = System::Drawing::Point(203, 115);
		this->hand_L->Name = L"hand_L";
		this->hand_L->Size = System::Drawing::Size(43, 76);
		this->hand_L->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->hand_L->TabIndex = 12;
		this->hand_L->TabStop = false;
		this->hand_L->Visible = false;
		// 
		// hand_R
		// 
		this->hand_R->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hand_R.Image")));
		this->hand_R->Location = System::Drawing::Point(273, 113);
		this->hand_R->Name = L"hand_R";
		this->hand_R->Size = System::Drawing::Size(46, 78);
		this->hand_R->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->hand_R->TabIndex = 13;
		this->hand_R->TabStop = false;
		this->hand_R->Visible = false;
		// 
		// Leg_R
		// 
		this->Leg_R->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Leg_R.Image")));
		this->Leg_R->Location = System::Drawing::Point(226, 184);
		this->Leg_R->Name = L"Leg_R";
		this->Leg_R->Size = System::Drawing::Size(34, 58);
		this->Leg_R->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->Leg_R->TabIndex = 14;
		this->Leg_R->TabStop = false;
		this->Leg_R->Visible = false;
		// 
		// Leg_L
		// 
		this->Leg_L->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Leg_L.Image")));
		this->Leg_L->Location = System::Drawing::Point(260, 184);
		this->Leg_L->Name = L"Leg_L";
		this->Leg_L->Size = System::Drawing::Size(34, 58);
		this->Leg_L->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->Leg_L->TabIndex = 15;
		this->Leg_L->TabStop = false;
		this->Leg_L->Visible = false;
		// 
		// time
		// 
		this->time->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->time->Location = System::Drawing::Point(527, 23);
		this->time->Name = L"time";
		this->time->Size = System::Drawing::Size(86, 43);
		this->time->TabIndex = 17;
		this->time->Text = L"0:0";
		this->time->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// Letter_T
		// 
		this->Letter_T->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_T->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_T->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_T->Location = System::Drawing::Point(382, 397);
		this->Letter_T->Name = L"Letter_T";
		this->Letter_T->Size = System::Drawing::Size(28, 35);
		this->Letter_T->TabIndex = 18;
		this->Letter_T->Text = L"T";
		this->Letter_T->UseVisualStyleBackColor = false;
		this->Letter_T->Click += gcnew System::EventHandler(this, &MyForm::Letter_T_Click);
		// 
		// Letter_R
		// 
		this->Letter_R->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_R->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_R->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_R->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_R->Location = System::Drawing::Point(314, 397);
		this->Letter_R->Name = L"Letter_R";
		this->Letter_R->Size = System::Drawing::Size(28, 35);
		this->Letter_R->TabIndex = 19;
		this->Letter_R->Text = L"R";
		this->Letter_R->UseVisualStyleBackColor = false;
		this->Letter_R->Click += gcnew System::EventHandler(this, &MyForm::Letter_R_Click);
		// 
		// Letter_Q
		// 
		this->Letter_Q->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_Q->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_Q->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_Q->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_Q->Location = System::Drawing::Point(280, 397);
		this->Letter_Q->Name = L"Letter_Q";
		this->Letter_Q->Size = System::Drawing::Size(28, 35);
		this->Letter_Q->TabIndex = 20;
		this->Letter_Q->Text = L"Q";
		this->Letter_Q->UseVisualStyleBackColor = false;
		this->Letter_Q->Click += gcnew System::EventHandler(this, &MyForm::Letter_Q_Click);
		// 
		// Letter_P
		// 
		this->Letter_P->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_P->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_P->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_P->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_P->Location = System::Drawing::Point(246, 397);
		this->Letter_P->Name = L"Letter_P";
		this->Letter_P->Size = System::Drawing::Size(28, 35);
		this->Letter_P->TabIndex = 21;
		this->Letter_P->Text = L"P";
		this->Letter_P->UseVisualStyleBackColor = false;
		this->Letter_P->Click += gcnew System::EventHandler(this, &MyForm::Letter_P_Click);
		// 
		// Letter_O
		// 
		this->Letter_O->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_O->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_O->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_O->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_O->Location = System::Drawing::Point(212, 397);
		this->Letter_O->Name = L"Letter_O";
		this->Letter_O->Size = System::Drawing::Size(28, 35);
		this->Letter_O->TabIndex = 22;
		this->Letter_O->Text = L"O";
		this->Letter_O->UseVisualStyleBackColor = false;
		this->Letter_O->Click += gcnew System::EventHandler(this, &MyForm::Letter_O_Click);
		// 
		// Letter_N
		// 
		this->Letter_N->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_N->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_N->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_N->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_N->Location = System::Drawing::Point(178, 397);
		this->Letter_N->Name = L"Letter_N";
		this->Letter_N->Size = System::Drawing::Size(28, 35);
		this->Letter_N->TabIndex = 23;
		this->Letter_N->Text = L"N";
		this->Letter_N->UseVisualStyleBackColor = false;
		this->Letter_N->Click += gcnew System::EventHandler(this, &MyForm::Letter_N_Click);
		// 
		// Letter_M
		// 
		this->Letter_M->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_M->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_M->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_M->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_M->Location = System::Drawing::Point(144, 397);
		this->Letter_M->Name = L"Letter_M";
		this->Letter_M->Size = System::Drawing::Size(28, 35);
		this->Letter_M->TabIndex = 24;
		this->Letter_M->Text = L"M";
		this->Letter_M->UseVisualStyleBackColor = false;
		this->Letter_M->Click += gcnew System::EventHandler(this, &MyForm::Letter_M_Click);
		// 
		// Letter_L
		// 
		this->Letter_L->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_L->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_L->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_L->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_L->Location = System::Drawing::Point(110, 397);
		this->Letter_L->Name = L"Letter_L";
		this->Letter_L->Size = System::Drawing::Size(28, 35);
		this->Letter_L->TabIndex = 25;
		this->Letter_L->Text = L"L";
		this->Letter_L->UseVisualStyleBackColor = false;
		this->Letter_L->Click += gcnew System::EventHandler(this, &MyForm::Letter_L_Click);
		// 
		// Letter_G
		// 
		this->Letter_G->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_G->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_G->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_G->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_G->Location = System::Drawing::Point(314, 356);
		this->Letter_G->Name = L"Letter_G";
		this->Letter_G->Size = System::Drawing::Size(28, 35);
		this->Letter_G->TabIndex = 26;
		this->Letter_G->Text = L"G";
		this->Letter_G->UseVisualStyleBackColor = false;
		this->Letter_G->Click += gcnew System::EventHandler(this, &MyForm::Letter_G_Click);
		// 
		// Letter_I
		// 
		this->Letter_I->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_I->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_I->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_I->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_I->Location = System::Drawing::Point(382, 356);
		this->Letter_I->Name = L"Letter_I";
		this->Letter_I->Size = System::Drawing::Size(28, 35);
		this->Letter_I->TabIndex = 27;
		this->Letter_I->Text = L"I";
		this->Letter_I->UseVisualStyleBackColor = false;
		this->Letter_I->Click += gcnew System::EventHandler(this, &MyForm::Letter_I_Click);
		// 
		// Letter_J
		// 
		this->Letter_J->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_J->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_J->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_J->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_J->Location = System::Drawing::Point(416, 356);
		this->Letter_J->Name = L"Letter_J";
		this->Letter_J->Size = System::Drawing::Size(28, 35);
		this->Letter_J->TabIndex = 28;
		this->Letter_J->Text = L"J";
		this->Letter_J->UseVisualStyleBackColor = false;
		this->Letter_J->Click += gcnew System::EventHandler(this, &MyForm::Letter_J_Click);
		// 
		// Letter_K
		// 
		this->Letter_K->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_K->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_K->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_K->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_K->Location = System::Drawing::Point(450, 356);
		this->Letter_K->Name = L"Letter_K";
		this->Letter_K->Size = System::Drawing::Size(28, 35);
		this->Letter_K->TabIndex = 29;
		this->Letter_K->Text = L"K";
		this->Letter_K->UseVisualStyleBackColor = false;
		this->Letter_K->Click += gcnew System::EventHandler(this, &MyForm::Letter_K_Click);
		// 
		// Letter_F
		// 
		this->Letter_F->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_F->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_F->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_F->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_F->Location = System::Drawing::Point(280, 356);
		this->Letter_F->Name = L"Letter_F";
		this->Letter_F->Size = System::Drawing::Size(28, 35);
		this->Letter_F->TabIndex = 30;
		this->Letter_F->Text = L"F";
		this->Letter_F->UseVisualStyleBackColor = false;
		this->Letter_F->Click += gcnew System::EventHandler(this, &MyForm::Letter_F_Click);
		// 
		// Letter_E
		// 
		this->Letter_E->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_E->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_E->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_E->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_E->Location = System::Drawing::Point(246, 356);
		this->Letter_E->Name = L"Letter_E";
		this->Letter_E->Size = System::Drawing::Size(28, 35);
		this->Letter_E->TabIndex = 31;
		this->Letter_E->Text = L"E";
		this->Letter_E->UseVisualStyleBackColor = false;
		this->Letter_E->Click += gcnew System::EventHandler(this, &MyForm::Letter_E_Click);
		// 
		// Letter_D
		// 
		this->Letter_D->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_D->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_D->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_D->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_D->Location = System::Drawing::Point(212, 356);
		this->Letter_D->Name = L"Letter_D";
		this->Letter_D->Size = System::Drawing::Size(28, 35);
		this->Letter_D->TabIndex = 32;
		this->Letter_D->Text = L"D";
		this->Letter_D->UseVisualStyleBackColor = false;
		this->Letter_D->Click += gcnew System::EventHandler(this, &MyForm::Letter_D_Click);
		// 
		// Letter_C
		// 
		this->Letter_C->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_C->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_C->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_C->Location = System::Drawing::Point(178, 356);
		this->Letter_C->Name = L"Letter_C";
		this->Letter_C->Size = System::Drawing::Size(28, 35);
		this->Letter_C->TabIndex = 33;
		this->Letter_C->Text = L"C";
		this->Letter_C->UseVisualStyleBackColor = false;
		this->Letter_C->Click += gcnew System::EventHandler(this, &MyForm::Letter_C_Click);
		// 
		// Letter_B
		// 
		this->Letter_B->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_B->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_B->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_B->Location = System::Drawing::Point(144, 356);
		this->Letter_B->Name = L"Letter_B";
		this->Letter_B->Size = System::Drawing::Size(28, 35);
		this->Letter_B->TabIndex = 34;
		this->Letter_B->Text = L"B";
		this->Letter_B->UseVisualStyleBackColor = false;
		this->Letter_B->Click += gcnew System::EventHandler(this, &MyForm::Letter_B_Click);
		// 
		// Letter_S
		// 
		this->Letter_S->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_S->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_S->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_S->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_S->Location = System::Drawing::Point(348, 397);
		this->Letter_S->Name = L"Letter_S";
		this->Letter_S->Size = System::Drawing::Size(28, 35);
		this->Letter_S->TabIndex = 37;
		this->Letter_S->Text = L"S";
		this->Letter_S->UseVisualStyleBackColor = false;
		this->Letter_S->Click += gcnew System::EventHandler(this, &MyForm::Letter_S_Click);
		// 
		// Letter_H
		// 
		this->Letter_H->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_H->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_H->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_H->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_H->Location = System::Drawing::Point(348, 356);
		this->Letter_H->Name = L"Letter_H";
		this->Letter_H->Size = System::Drawing::Size(28, 35);
		this->Letter_H->TabIndex = 38;
		this->Letter_H->Text = L"H";
		this->Letter_H->UseVisualStyleBackColor = false;
		this->Letter_H->Click += gcnew System::EventHandler(this, &MyForm::Letter_H_Click);
		// 
		// Letter_Z
		// 
		this->Letter_Z->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_Z->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_Z->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_Z->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_Z->Location = System::Drawing::Point(325, 438);
		this->Letter_Z->Name = L"Letter_Z";
		this->Letter_Z->Size = System::Drawing::Size(28, 35);
		this->Letter_Z->TabIndex = 40;
		this->Letter_Z->Text = L"Z";
		this->Letter_Z->UseVisualStyleBackColor = false;
		this->Letter_Z->Click += gcnew System::EventHandler(this, &MyForm::Letter_Z_Click);
		// 
		// Letter_Y
		// 
		this->Letter_Y->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_Y->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_Y->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_Y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_Y->Location = System::Drawing::Point(291, 438);
		this->Letter_Y->Name = L"Letter_Y";
		this->Letter_Y->Size = System::Drawing::Size(28, 35);
		this->Letter_Y->TabIndex = 41;
		this->Letter_Y->Text = L"Y";
		this->Letter_Y->UseVisualStyleBackColor = false;
		this->Letter_Y->Click += gcnew System::EventHandler(this, &MyForm::Letter_Y_Click);
		// 
		// Letter_X
		// 
		this->Letter_X->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_X->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_X->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_X->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_X->Location = System::Drawing::Point(257, 438);
		this->Letter_X->Name = L"Letter_X";
		this->Letter_X->Size = System::Drawing::Size(28, 35);
		this->Letter_X->TabIndex = 42;
		this->Letter_X->Text = L"X";
		this->Letter_X->UseVisualStyleBackColor = false;
		this->Letter_X->Click += gcnew System::EventHandler(this, &MyForm::Letter_X_Click);
		// 
		// Letter_V
		// 
		this->Letter_V->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_V->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_V->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_V->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_V->Location = System::Drawing::Point(450, 397);
		this->Letter_V->Name = L"Letter_V";
		this->Letter_V->Size = System::Drawing::Size(28, 35);
		this->Letter_V->TabIndex = 44;
		this->Letter_V->Text = L"V";
		this->Letter_V->UseVisualStyleBackColor = false;
		this->Letter_V->Click += gcnew System::EventHandler(this, &MyForm::Letter_V_Click);
		// 
		// Letter_U
		// 
		this->Letter_U->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_U->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_U->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_U->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_U->Location = System::Drawing::Point(416, 397);
		this->Letter_U->Name = L"Letter_U";
		this->Letter_U->Size = System::Drawing::Size(28, 35);
		this->Letter_U->TabIndex = 45;
		this->Letter_U->Text = L"U";
		this->Letter_U->UseVisualStyleBackColor = false;
		this->Letter_U->Click += gcnew System::EventHandler(this, &MyForm::Letter_U_Click);
		// 
		// Letter_W
		// 
		this->Letter_W->BackColor = System::Drawing::SystemColors::ButtonFace;
		this->Letter_W->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Letter_W->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->Letter_W->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Letter_W->Location = System::Drawing::Point(217, 438);
		this->Letter_W->Name = L"Letter_W";
		this->Letter_W->Size = System::Drawing::Size(34, 35);
		this->Letter_W->TabIndex = 46;
		this->Letter_W->Text = L"W";
		this->Letter_W->UseVisualStyleBackColor = false;
		this->Letter_W->Click += gcnew System::EventHandler(this, &MyForm::Letter_W_Click);
		// 
		// panel1
		// 
		this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
		this->panel1->Location = System::Drawing::Point(178, 341);
		this->panel1->Name = L"panel1";
		this->panel1->Size = System::Drawing::Size(232, 2);
		this->panel1->TabIndex = 47;
		// 
		// panel2
		// 
		this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->panel2->Location = System::Drawing::Point(105, 349);
		this->panel2->Name = L"panel2";
		this->panel2->Size = System::Drawing::Size(380, 135);
		this->panel2->TabIndex = 48;
		// 
		// pictureBox1
		// 
		this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
		this->pictureBox1->Location = System::Drawing::Point(479, 23);
		this->pictureBox1->Name = L"pictureBox1";
		this->pictureBox1->Size = System::Drawing::Size(42, 43);
		this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->pictureBox1->TabIndex = 49;
		this->pictureBox1->TabStop = false;
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->ClientSize = System::Drawing::Size(625, 475);
		this->Controls->Add(this->pictureBox1);
		this->Controls->Add(this->Letter_A);
		this->Controls->Add(this->panel1);
		this->Controls->Add(this->head);
		this->Controls->Add(this->Leg_L);
		this->Controls->Add(this->Leg_R);
		this->Controls->Add(this->hand_L);
		this->Controls->Add(this->hand_R);
		this->Controls->Add(this->Body);
		this->Controls->Add(this->Letter_W);
		this->Controls->Add(this->Letter_U);
		this->Controls->Add(this->Letter_V);
		this->Controls->Add(this->Letter_X);
		this->Controls->Add(this->Letter_Y);
		this->Controls->Add(this->Letter_Z);
		this->Controls->Add(this->Letter_H);
		this->Controls->Add(this->Letter_S);
		this->Controls->Add(this->Letter_B);
		this->Controls->Add(this->Letter_C);
		this->Controls->Add(this->Letter_D);
		this->Controls->Add(this->Letter_E);
		this->Controls->Add(this->Letter_F);
		this->Controls->Add(this->Letter_K);
		this->Controls->Add(this->Letter_J);
		this->Controls->Add(this->Letter_I);
		this->Controls->Add(this->Letter_G);
		this->Controls->Add(this->Letter_L);
		this->Controls->Add(this->Letter_M);
		this->Controls->Add(this->Letter_N);
		this->Controls->Add(this->Letter_O);
		this->Controls->Add(this->Letter_P);
		this->Controls->Add(this->Letter_Q);
		this->Controls->Add(this->Letter_R);
		this->Controls->Add(this->Letter_T);
		this->Controls->Add(this->time);
		this->Controls->Add(this->label_Word);
		this->Controls->Add(this->Word);
		this->Controls->Add(this->plate);
		this->Controls->Add(this->panel2);
		this->HelpButton = true;
		this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
		this->Name = L"MyForm";
		this->Text = L"HangMan";
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->plate))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->head))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Body))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hand_L))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hand_R))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Leg_R))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Leg_L))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
		this->ResumeLayout(false);

	}
#pragma endregion
	
	

	private: System::Void Game(String^ word,wchar_t letter) {
		flag = false;
		if (count != 6) {
			for (int ii = 0; ii < word->Length; ii++) {
				if (word[ii] == letter ){
					flag = true;

					codeword = codeword->Insert(ii, Convert::ToString(letter));
					codeword = codeword->Remove(ii + 1, 1);
					
					this->Word->Text = codeword->ToUpper();

					if (codeword == word) {
						timer1->Enabled = false;
						this->Hide();
						Win^ obj = gcnew Win(WrongLetters, Min, Sec, word, count);
						obj->Show();
					}

				}
			}

			if (flag == false) {
				count += 1;
				WrongLetters += letter + ", ";
				if (count == 6) {
					timer1->Enabled = false;
					this->Hide();
					GameOver^ obj = gcnew GameOver(WrongLetters, Min, Sec, word, count);
					obj->Show();
				}
				switch (count)
				{
				case 1:
					head->Visible = true;
					break;
				case 2:
					Body->Visible = true;

					break;
				case 3:
					hand_L->Visible = true;
					hand_L->BringToFront();
					break;
				case 4:
					hand_R->Visible = true;
					hand_R->BringToFront();
					break;
				case 5:
					Leg_L->Visible = true;
					Leg_L->BringToFront();
					break;
				case 6:
					Leg_R->Visible = true;
					Leg_R->BringToFront();
					break;
				default:
					break;
				}
			}
		}
			
	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		sec++;
		if (sec == 60) {
			min++;
			sec = 0;
		}
		Sec = Convert::ToString(sec);
		Min = Convert::ToString(min);

		time->Text =Min + ":" + Sec;
	}
	private: System::Void Letter_A_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'a');
		Letter_A->Visible = false;
		Letter_A->Enabled = false;
	}
	private: System::Void Letter_B_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'b');
		Letter_B->Visible = false;
		Letter_B->Enabled = false;
	}
	private: System::Void Letter_C_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'c');
		Letter_C->Visible = false;
		Letter_C->Enabled = false;
	}
	private: System::Void Letter_D_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'd');
		Letter_D->Visible = false;
		Letter_D->Enabled = false;
	}
	private: System::Void Letter_E_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'e');
		Letter_E->Visible = false;
		Letter_E->Enabled = false;
	}
	private: System::Void Letter_F_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'F');
		Letter_F->Visible = false;
		Letter_F->Enabled = false;
	}
	private: System::Void Letter_G_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'g');
		Letter_G->Visible = false;
		Letter_G->Enabled = false;
	}
	private: System::Void Letter_H_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'h');
		Letter_H->Visible = false;
		Letter_H->Enabled = false;
	}
	private: System::Void Letter_I_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'i');
		Letter_I->Visible = false;
		Letter_I->Enabled = false;
	}
	private: System::Void Letter_J_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'j');
		Letter_J->Visible = false;
		Letter_J->Enabled = false;
	}
	private: System::Void Letter_K_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'k');
		Letter_K->Visible = false;
		Letter_K->Enabled = false;
	}
	private: System::Void Letter_L_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'l');
		Letter_L->Visible = false;
		Letter_L->Enabled = false;
	}
	private: System::Void Letter_M_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'm');
		Letter_M->Visible = false;
		Letter_M->Enabled = false;
	}
	private: System::Void Letter_N_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'n');
		Letter_N->Visible = false;
		Letter_N->Enabled = false;
	}
	private: System::Void Letter_O_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'o');
		Letter_O->Visible = false;
		Letter_O->Enabled = false;
	}
	private: System::Void Letter_P_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'p');
		Letter_P->Visible = false;
		Letter_P->Enabled = false;
	}
	private: System::Void Letter_Q_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'q');
		Letter_Q->Visible = false;
		Letter_Q->Enabled = false;
	}
	private: System::Void Letter_R_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'r');
		Letter_R->Visible = false;
		Letter_R->Enabled = false;
	}
	private: System::Void Letter_S_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 's');
		Letter_S->Visible = false;
		Letter_S->Enabled = false;
	}
	private: System::Void Letter_T_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 't');
		Letter_T->Visible = false;
		Letter_T->Enabled = false;
	}
	private: System::Void Letter_U_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'u');
		Letter_U->Visible = false;
		Letter_U->Enabled = false;
	}
	private: System::Void Letter_V_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'v');
		Letter_V->Visible = false;
		Letter_V->Enabled = false;
	}
	private: System::Void Letter_W_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'w');
		Letter_W->Visible = false;
		Letter_W->Enabled = false;
	}
	private: System::Void Letter_X_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'x');
		Letter_X->Visible = false;
		Letter_X->Enabled = false;
	}
	private: System::Void Letter_Y_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'y');
		Letter_Y->Visible = false;
		Letter_Y->Enabled = false;
	}
	private: System::Void Letter_Z_Click(System::Object^ sender, System::EventArgs^ e) {
		Game(word, 'z');
		Letter_Z->Visible = false;
		Letter_Z->Enabled = false;
	}


};
}
