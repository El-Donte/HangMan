#include "Win.h"

//���������
System::Void HangMan::Win::retry_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Restart();
}

//�����
System::Void HangMan::Win::Exit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}
