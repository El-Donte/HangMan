#include "Start.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	HangMan::Start form;
	Application::Run(% form);
}

//начтать со словами которые уже есть
System::Void HangMan::Start::Button_Start_Click(System::Object^ sender, System::EventArgs^ e)
{
	array<String^>^ words = gcnew array<String^> {"world", "rabbit", "australia",
		"glasses", "cat", "overcoat"};

	Random^ ran = gcnew Random();
	word = words[ran->Next(0, 6)]->ToUpper();

	for (int ii = 0; ii < word->Length; ii++) {
		codeword += "_";
	}

	this->Hide();
	MyForm^ form = gcnew MyForm(this);
	form->BringToFront();
	form->Show();
}

//загрузить свои слова и начать
System::Void HangMan::Start::Load_Click(System::Object^ sender, System::EventArgs^ e)
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

		word = w->ToUpper();

		for (int ii = 0; ii < word->Length; ii++) {
			codeword += "_";
		}

		this->Hide();
		MyForm^ form = gcnew MyForm(this);
		form->BringToFront();
		form->Show();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(this, "файл не был открыт,или в нем нет слов", "Eror", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
