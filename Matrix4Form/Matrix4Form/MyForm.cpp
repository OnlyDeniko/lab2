#include "MyForm.h"
#include"libraries.h"

[STAThreadAttribute]
int main(array<System::String ^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Matrix4Form::MyForm name;
	Application::Run(%name);

	return 0;
}
