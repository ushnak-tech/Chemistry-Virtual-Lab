#include "pch.h"
#include "MyForm.h"
#include "calculation.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace EVA01;
[STAThread]

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	MyForm form;
	Application::Run(% form);
	return 0;
}
