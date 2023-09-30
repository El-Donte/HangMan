#include "Win.h"

//повторить
System::Void HangMan::Win::retry_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Restart();
}

//выход
System::Void HangMan::Win::Exit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}
