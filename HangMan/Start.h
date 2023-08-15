#pragma once

#include "MyForm.h"


namespace HangMan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Start
	/// </summary>
	public ref class Start : public System::Windows::Forms::Form
	{
	public:
		Start(void)	
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Start()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Button_Start;
	private: System::Windows::Forms::Button^ Load;
	private: System::Windows::Forms::Label^ lable;
	private: System::Windows::Forms::Label^ Rules;
	private: System::Windows::Forms::OpenFileDialog^ LoadWords;

	private:
		/// <summary>
		
		String^ word;
		String^ w;
		String^ codeword;
		
		static int str = 0;
		static int n = 0;
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Start::typeid));
			this->Button_Start = (gcnew System::Windows::Forms::Button());
			this->Load = (gcnew System::Windows::Forms::Button());
			this->lable = (gcnew System::Windows::Forms::Label());
			this->Rules = (gcnew System::Windows::Forms::Label());
			this->LoadWords = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// Button_Start
			// 
			this->Button_Start->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Button_Start->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Button_Start->Location = System::Drawing::Point(278, 238);
			this->Button_Start->Name = L"Button_Start";
			this->Button_Start->Size = System::Drawing::Size(104, 50);
			this->Button_Start->TabIndex = 0;
			this->Button_Start->Text = L"Начать";
			this->Button_Start->UseVisualStyleBackColor = true;
			this->Button_Start->Click += gcnew System::EventHandler(this, &Start::Button_Start_Click);
			// 
			// Load
			// 
			this->Load->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Load->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Load->Location = System::Drawing::Point(97, 238);
			this->Load->Name = L"Load";
			this->Load->Size = System::Drawing::Size(105, 50);
			this->Load->TabIndex = 1;
			this->Load->Text = L"Загрузить";
			this->Load->UseVisualStyleBackColor = true;
			this->Load->Click += gcnew System::EventHandler(this, &Start::Load_Click);
			// 
			// lable
			// 
			this->lable->AutoSize = true;
			this->lable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lable->Location = System::Drawing::Point(200, 9);
			this->lable->Name = L"lable";
			this->lable->Size = System::Drawing::Size(91, 24);
			this->lable->TabIndex = 2;
			this->lable->Text = L"Правила:";
			this->lable->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Rules
			// 
			this->Rules->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Rules->Location = System::Drawing::Point(12, 33);
			this->Rules->Name = L"Rules";
			this->Rules->Size = System::Drawing::Size(468, 186);
			this->Rules->TabIndex = 3;
			this->Rules->Text = resources->GetString(L"Rules.Text");
			this->Rules->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LoadWords
			// 
			this->LoadWords->Title = L"Выберете файл(.txt)";
			// 
			// Start
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(501, 300);
			this->Controls->Add(this->Rules);
			this->Controls->Add(this->lable);
			this->Controls->Add(this->Load);
			this->Controls->Add(this->Button_Start);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Start";
			this->Text = L"Start";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Button_Start_Click(System::Object^ sender, System::EventArgs^ e) {
		array<String^>^ words = gcnew array<String^> {"world", "rabbit", "australia",
			"glasses", "cat", "overcoat"};

		Random^ ran = gcnew Random();
		word = words[ran->Next(0, 6)]->ToLower();

		for (int ii = 0; ii < word->Length; ii++) {
			codeword += "_";
		}

		this->Hide();
		MyForm^ obj = gcnew MyForm(codeword,word);
		obj->Show();
	}
	
private: System::Void Load_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	String^ FileName = " ";

	if (LoadWords->ShowDialog() == Windows::Forms::DialogResult::OK) {
		FileName = LoadWords->FileName;
	}

	try
	{
		StreamReader^ file = File::OpenText(FileName);

		while (!file->EndOfStream) {
			w = file->ReadLine();
			str++;
		}

		Random^ ran = gcnew Random();
		n = ran->Next(0, str); 

		str = 0;
		while (!file->EndOfStream) {
			w = file->ReadLine();
			str++;
			if (n == str) {
				break;
			}
		}

		word = w->ToLower();

		for (int ii = 0; ii < word->Length; ii++) {
			codeword += "_";
		}
		MyForm^ form = gcnew MyForm(codeword,word);
		this->Hide();
		form->Show();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(this, "файл не был открыт,или в нем нет слов", "Eror", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
