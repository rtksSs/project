#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    project::MainForm form;
    Application::Run(% form);
}