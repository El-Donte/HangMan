#pragma once
#include "MyForm.h"


namespace HangMan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Win : public System::Windows::Forms::Form
	{
		MyForm^ form;
	public:
		Win(MyForm^ fr)
		{
			InitializeComponent();
			this->form = fr;
			this->Word->Text = form->word;
			this->WrongLetters->Text = form->WrongLetters;
			this->Time->Text = form->min + ":" + form->sec;
			this->Count->Text = form->count.ToString();
		}

	protected:
		~Win()
		{
			if (components)
			{
				delete components;
			}
		}

	private: 
		System::Windows::Forms::Label^ label_win;
		System::Windows::Forms::Label^ Time;

		System::Windows::Forms::PictureBox^ pictureBox1;

		System::Windows::Forms::Label^ label_Word;
		System::Windows::Forms::Label^ Word;
		System::Windows::Forms::Label^ label_Count;
		System::Windows::Forms::Label^ Count;
		System::Windows::Forms::Label^ label_Wrong;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ WrongLetters;

		System::Windows::Forms::Button^ retry;
		System::Windows::Forms::Button^ Exit;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Win::typeid));
			this->label_win = (gcnew System::Windows::Forms::Label());
			this->Time = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label_Word = (gcnew System::Windows::Forms::Label());
			this->Word = (gcnew System::Windows::Forms::Label());
			this->label_Count = (gcnew System::Windows::Forms::Label());
			this->Count = (gcnew System::Windows::Forms::Label());
			this->label_Wrong = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->WrongLetters = (gcnew System::Windows::Forms::Label());
			this->retry = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label_win
			// 
			this->label_win->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_win->Location = System::Drawing::Point(61, 9);
			this->label_win->Name = L"label_win";
			this->label_win->Size = System::Drawing::Size(265, 38);
			this->label_win->TabIndex = 0;
			this->label_win->Text = L"Ты победил!!!!!";
			this->label_win->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Time
			// 
			this->Time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Time->Location = System::Drawing::Point(124, 83);
			this->Time->Name = L"Time";
			this->Time->Size = System::Drawing::Size(120, 25);
			this->Time->TabIndex = 1;
			this->Time->Text = L"hjghjhjk";
			this->Time->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(93, 83);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(25, 26);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label_Word
			// 
			this->label_Word->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Word->Location = System::Drawing::Point(124, 112);
			this->label_Word->Name = L"label_Word";
			this->label_Word->Size = System::Drawing::Size(138, 18);
			this->label_Word->TabIndex = 3;
			this->label_Word->Text = L"Искомое слово:";
			// 
			// Word
			// 
			this->Word->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Word->Location = System::Drawing::Point(94, 130);
			this->Word->Name = L"Word";
			this->Word->Size = System::Drawing::Size(184, 26);
			this->Word->TabIndex = 4;
			this->Word->Text = L"dfal;df;lfs;";
			this->Word->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_Count
			// 
			this->label_Count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Count->Location = System::Drawing::Point(124, 167);
			this->label_Count->Name = L"label_Count";
			this->label_Count->Size = System::Drawing::Size(138, 18);
			this->label_Count->TabIndex = 5;
			this->label_Count->Text = L"Кол-во попыток:";
			// 
			// Count
			// 
			this->Count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Count->Location = System::Drawing::Point(89, 194);
			this->Count->Name = L"Count";
			this->Count->Size = System::Drawing::Size(184, 26);
			this->Count->TabIndex = 6;
			this->Count->Text = L"dfal;df;lfs;";
			this->Count->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_Wrong
			// 
			this->label_Wrong->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Wrong->Location = System::Drawing::Point(105, 220);
			this->label_Wrong->Name = L"label_Wrong";
			this->label_Wrong->Size = System::Drawing::Size(181, 26);
			this->label_Wrong->TabIndex = 7;
			this->label_Wrong->Text = L"Неправильные буквы:";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(124, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 24);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Время:";
			// 
			// WrongLetters
			// 
			this->WrongLetters->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->WrongLetters->Location = System::Drawing::Point(94, 246);
			this->WrongLetters->Name = L"WrongLetters";
			this->WrongLetters->Size = System::Drawing::Size(184, 42);
			this->WrongLetters->TabIndex = 9;
			this->WrongLetters->Text = L"dfal;df;lfs;";
			this->WrongLetters->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// retry
			// 
			this->retry->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->retry->Location = System::Drawing::Point(206, 291);
			this->retry->Name = L"retry";
			this->retry->Size = System::Drawing::Size(93, 24);
			this->retry->TabIndex = 10;
			this->retry->Text = L"Повторить";
			this->retry->UseVisualStyleBackColor = true;
			this->retry->Click += gcnew System::EventHandler(this, &Win::retry_Click);
			// 
			// Exit
			// 
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Exit->Location = System::Drawing::Point(93, 292);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(75, 23);
			this->Exit->TabIndex = 11;
			this->Exit->Text = L"Выход";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &Win::Exit_Click);
			// 
			// Win
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(396, 323);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->retry);
			this->Controls->Add(this->WrongLetters);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label_Wrong);
			this->Controls->Add(this->Count);
			this->Controls->Add(this->label_Count);
			this->Controls->Add(this->Word);
			this->Controls->Add(this->label_Word);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Time);
			this->Controls->Add(this->label_win);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Win";
			this->Text = L"Win";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	//повторить
	private: System::Void retry_Click(System::Object^ sender, System::EventArgs^ e);
	//выход
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e);
};
}
