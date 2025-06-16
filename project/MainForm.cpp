#include "MainForm.h"
#include "InputForm.h"
#include "CalcForm.h"

System::Void project::MainForm::input_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    InputForm^ input_form = gcnew InputForm();
    input_form->ShowDialog();
}

System::Void project::MainForm::calc_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    CalcForm^ calc_form = gcnew CalcForm();
    calc_form->ShowDialog();
}

System::Void project::MainForm::exit_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}