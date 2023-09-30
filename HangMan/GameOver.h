#pragma once
#include "MyForm.h"

namespace HangMan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class GameOver : public System::Windows::Forms::Form
	{
		MyForm^ form;
	public:
		GameOver(MyForm^ fr)
		{
			InitializeComponent();
			this->form = fr;
			this->Word->Text = form->word;
			this->WrongLetters->Text = form->WrongLetters;
			this->Time->Text = form->min + ":" + form->sec;
			this->Count->Text = form->count.ToString();
		}

	protected:
		~GameOver()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::Label^ WrongLetters;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label_Wrong;
		System::Windows::Forms::Label^ Count;
		System::Windows::Forms::Label^ label_Count;
		System::Windows::Forms::Label^ Word;
		System::Windows::Forms::Label^ label_Word;

		System::Windows::Forms::PictureBox^ pictureBox1;
		System::Windows::Forms::Label^ Time;

		System::Windows::Forms::Label^ label_win;

		System::Windows::Forms::Button^ Exit;
		System::Windows::Forms::Button^ retry;

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameOver::typeid));
			this->WrongLetters = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label_Wrong = (gcnew System::Windows::Forms::Label());
			this->Count = (gcnew System::Windows::Forms::Label());
			this->label_Count = (gcnew System::Windows::Forms::Label());
			this->Word = (gcnew System::Windows::Forms::Label());
			this->label_Word = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Time = (gcnew System::Windows::Forms::Label());
			this->label_win = (gcnew System::Windows::Forms::Label());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->retry = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// WrongLetters
			// 
			this->WrongLetters->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->WrongLetters->Location = System::Drawing::Point(100, 246);
			this->WrongLetters->Name = L"WrongLetters";
			this->WrongLetters->Size = System::Drawing::Size(184, 42);
			this->WrongLetters->TabIndex = 19;
			this->WrongLetters->Text = L"dfal;df;lfs;";
			this->WrongLetters->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(130, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 24);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Время:";
			// 
			// label_Wrong
			// 
			this->label_Wrong->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Wrong->Location = System::Drawing::Point(111, 220);
			this->label_Wrong->Name = L"label_Wrong";
			this->label_Wrong->Size = System::Drawing::Size(181, 26);
			this->label_Wrong->TabIndex = 17;
			this->label_Wrong->Text = L"Неправильные буквы:";
			// 
			// Count
			// 
			this->Count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Count->Location = System::Drawing::Point(95, 194);
			this->Count->Name = L"Count";
			this->Count->Size = System::Drawing::Size(184, 26);
			this->Count->TabIndex = 16;
			this->Count->Text = L"dfal;df;lfs;";
			this->Count->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_Count
			// 
			this->label_Count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Count->Location = System::Drawing::Point(130, 167);
			this->label_Count->Name = L"label_Count";
			this->label_Count->Size = System::Drawing::Size(138, 18);
			this->label_Count->TabIndex = 15;
			this->label_Count->Text = L"Кол-во попыток:";
			// 
			// Word
			// 
			this->Word->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Word->Location = System::Drawing::Point(100, 130);
			this->Word->Name = L"Word";
			this->Word->Size = System::Drawing::Size(184, 26);
			this->Word->TabIndex = 14;
			this->Word->Text = L"dfal;df;lfs;";
			this->Word->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_Word
			// 
			this->label_Word->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Word->Location = System::Drawing::Point(130, 112);
			this->label_Word->Name = L"label_Word";
			this->label_Word->Size = System::Drawing::Size(138, 18);
			this->label_Word->TabIndex = 13;
			this->label_Word->Text = L"Искомое слово:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(99, 83);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(25, 26);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// Time
			// 
			this->Time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Time->Location = System::Drawing::Point(130, 83);
			this->Time->Name = L"Time";
			this->Time->Size = System::Drawing::Size(120, 25);
			this->Time->TabIndex = 11;
			this->Time->Text = L"hjghjhjk";
			this->Time->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_win
			// 
			this->label_win->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_win->Location = System::Drawing::Point(67, 9);
			this->label_win->Name = L"label_win";
			this->label_win->Size = System::Drawing::Size(265, 38);
			this->label_win->TabIndex = 10;
			this->label_win->Text = L"Ты проиграл((((";
			this->label_win->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Exit
			// 
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Exit->Location = System::Drawing::Point(88, 287);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(75, 23);
			this->Exit->TabIndex = 21;
			this->Exit->Text = L"Выход";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &GameOver::Exit_Click);
			// 
			// retry
			// 
			this->retry->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->retry->Location = System::Drawing::Point(201, 286);
			this->retry->Name = L"retry";
			this->retry->Size = System::Drawing::Size(93, 24);
			this->retry->TabIndex = 20;
			this->retry->Text = L"Повторить";
			this->retry->UseVisualStyleBackColor = true;
			this->retry->Click += gcnew System::EventHandler(this, &GameOver::retry_Click);
			// 
			// GameOver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(399, 322);
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
			this->Name = L"GameOver";
			this->Text = L"GameOver";
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
