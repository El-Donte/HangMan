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

				this->Word->Text = codeword;

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
	Game('A');
	Letter_A->Visible = false;
	Letter_A->Enabled = false;
}
System::Void HangMan::MyForm::Letter_B_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('B');
	Letter_B->Visible = false;
	Letter_B->Enabled = false;
}
System::Void HangMan::MyForm::Letter_C_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('C');
	Letter_C->Visible = false;
	Letter_C->Enabled = false;
}
System::Void HangMan::MyForm::Letter_D_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('D');
	Letter_D->Visible = false;
	Letter_D->Enabled = false;
}
System::Void HangMan::MyForm::Letter_E_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('E');
	Letter_E->Visible = false;
	Letter_E->Enabled = false;
}
System::Void HangMan::MyForm::Letter_F_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('F');
	Letter_F->Visible = false;
	Letter_F->Enabled = false;
}
System::Void HangMan::MyForm::Letter_G_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('G');
	Letter_G->Visible = false;
	Letter_G->Enabled = false;
}
System::Void HangMan::MyForm::Letter_H_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('H');
	Letter_H->Visible = false;
	Letter_H->Enabled = false;
}
System::Void HangMan::MyForm::Letter_I_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('I');
	Letter_I->Visible = false;
	Letter_I->Enabled = false;
}
System::Void HangMan::MyForm::Letter_J_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('J');
	Letter_J->Visible = false;
	Letter_J->Enabled = false;
}
System::Void HangMan::MyForm::Letter_K_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('K');
	Letter_K->Visible = false;
	Letter_K->Enabled = false;
}
System::Void HangMan::MyForm::Letter_L_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('L');
	Letter_L->Visible = false;
	Letter_L->Enabled = false;
}
System::Void HangMan::MyForm::Letter_M_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('M');
	Letter_M->Visible = false;
	Letter_M->Enabled = false;
}
System::Void HangMan::MyForm::Letter_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('N');
	Letter_N->Visible = false;
	Letter_N->Enabled = false;
}
System::Void HangMan::MyForm::Letter_O_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('O');
	Letter_O->Visible = false;
	Letter_O->Enabled = false;
}
System::Void HangMan::MyForm::Letter_P_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('P');
	Letter_P->Visible = false;
	Letter_P->Enabled = false;
}
System::Void HangMan::MyForm::Letter_Q_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('Q');
	Letter_Q->Visible = false;
	Letter_Q->Enabled = false;
}
System::Void HangMan::MyForm::Letter_R_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('R');
	Letter_R->Visible = false;
	Letter_R->Enabled = false;
}
System::Void HangMan::MyForm::Letter_S_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('S');
	Letter_S->Visible = false;
	Letter_S->Enabled = false;
}
System::Void HangMan::MyForm::Letter_T_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('T');
	Letter_T->Visible = false;
	Letter_T->Enabled = false;
}
System::Void HangMan::MyForm::Letter_U_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('U');
	Letter_U->Visible = false;
	Letter_U->Enabled = false;
}
System::Void HangMan::MyForm::Letter_V_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('V');
	Letter_V->Visible = false;
	Letter_V->Enabled = false;
}
System::Void HangMan::MyForm::Letter_W_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('W');
	Letter_W->Visible = false;
	Letter_W->Enabled = false;
}
System::Void HangMan::MyForm::Letter_X_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('X');
	Letter_X->Visible = false;
	Letter_X->Enabled = false;
}
System::Void HangMan::MyForm::Letter_Y_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('Y');
	Letter_Y->Visible = false;
	Letter_Y->Enabled = false;
}
System::Void HangMan::MyForm::Letter_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Game('Z');
	Letter_Z->Visible = false;
	Letter_Z->Enabled = false;
}
