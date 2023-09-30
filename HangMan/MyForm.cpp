#include "MyForm.h"
#include"Win.h"
#include"GameOver.h"

//логика игры
System::Void HangMan::MyForm::Game(wchar_t letter)
{
	flag = false;
	if (count != 6) {
		for (int ii = 0; ii < word->Length; ii++) {
			if (word[ii] == letter) {
				flag = true;

				codeword = codeword->Insert(ii, Convert::ToString(letter));
				codeword = codeword->Remove(ii + 1, 1);

				this->Word->Text = codeword->ToUpper();

				if (codeword == word) {
					timer1->Enabled = false;
					this->Hide();
					Win^ form = gcnew Win(this);
					form->BringToFront();
					form->Show();
				}

			}
		}

		if (flag == false) {
			count += 1;
			WrongLetters += letter + ", ";
			if (count == 6) {
				timer1->Enabled = false;
				this->Hide();
				GameOver^ form = gcnew GameOver(this);
				form->BringToFront();
				form->Show();
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

//таймер
System::Void HangMan::MyForm::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	sec++;
	if (sec == 60) {
		min++;
		sec = 0;
	}

	Sec = Convert::ToString(sec);
	Min = Convert::ToString(min);

	time->Text = Min + ":" + Sec;
}

//клавиатура
System::Void HangMan::MyForm::Letter_A_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('a');
	Letter_A->Visible = false;
	Letter_A->Enabled = false;
}
System::Void HangMan::MyForm::Letter_B_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('b');
	Letter_B->Visible = false;
	Letter_B->Enabled = false;
}
System::Void HangMan::MyForm::Letter_C_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('c');
	Letter_C->Visible = false;
	Letter_C->Enabled = false;
}
System::Void HangMan::MyForm::Letter_D_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('d');
	Letter_D->Visible = false;
	Letter_D->Enabled = false;
}
System::Void HangMan::MyForm::Letter_E_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('e');
	Letter_E->Visible = false;
	Letter_E->Enabled = false;
}
System::Void HangMan::MyForm::Letter_F_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('f');
	Letter_F->Visible = false;
	Letter_F->Enabled = false;
}
System::Void HangMan::MyForm::Letter_G_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('g');
	Letter_G->Visible = false;
	Letter_G->Enabled = false;
}
System::Void HangMan::MyForm::Letter_H_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('h');
	Letter_H->Visible = false;
	Letter_H->Enabled = false;
}
System::Void HangMan::MyForm::Letter_I_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('i');
	Letter_I->Visible = false;
	Letter_I->Enabled = false;
}
System::Void HangMan::MyForm::Letter_J_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('j');
	Letter_J->Visible = false;
	Letter_J->Enabled = false;
}
System::Void HangMan::MyForm::Letter_K_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('k');
	Letter_K->Visible = false;
	Letter_K->Enabled = false;
}
System::Void HangMan::MyForm::Letter_L_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('l');
	Letter_L->Visible = false;
	Letter_L->Enabled = false;
}
System::Void HangMan::MyForm::Letter_M_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('m');
	Letter_M->Visible = false;
	Letter_M->Enabled = false;
}
System::Void HangMan::MyForm::Letter_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('n');
	Letter_N->Visible = false;
	Letter_N->Enabled = false;
}
System::Void HangMan::MyForm::Letter_O_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('o');
	Letter_O->Visible = false;
	Letter_O->Enabled = false;
}
System::Void HangMan::MyForm::Letter_P_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('p');
	Letter_P->Visible = false;
	Letter_P->Enabled = false;
}
System::Void HangMan::MyForm::Letter_Q_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('q');
	Letter_Q->Visible = false;
	Letter_Q->Enabled = false;
}
System::Void HangMan::MyForm::Letter_R_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('r');
	Letter_R->Visible = false;
	Letter_R->Enabled = false;
}
System::Void HangMan::MyForm::Letter_S_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('s');
	Letter_S->Visible = false;
	Letter_S->Enabled = false;
}
System::Void HangMan::MyForm::Letter_T_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('t');
	Letter_T->Visible = false;
	Letter_T->Enabled = false;
}
System::Void HangMan::MyForm::Letter_U_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('u');
	Letter_U->Visible = false;
	Letter_U->Enabled = false;
}
System::Void HangMan::MyForm::Letter_V_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('v');
	Letter_V->Visible = false;
	Letter_V->Enabled = false;
}
System::Void HangMan::MyForm::Letter_W_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('w');
	Letter_W->Visible = false;
	Letter_W->Enabled = false;
}
System::Void HangMan::MyForm::Letter_X_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('x');
	Letter_X->Visible = false;
	Letter_X->Enabled = false;
}
System::Void HangMan::MyForm::Letter_Y_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('y');
	Letter_Y->Visible = false;
	Letter_Y->Enabled = false;
}
System::Void HangMan::MyForm::Letter_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('z');
	Letter_Z->Visible = false;
	Letter_Z->Enabled = false;
}
