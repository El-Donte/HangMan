#include "GameOver.h"

System::Void HangMan::GameOver::retry_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Restart();
}

System::Void HangMan::GameOver::Exit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}
