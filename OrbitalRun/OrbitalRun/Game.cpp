#include "Game.h"

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	OrbitalRun::Game form;
//	OrbitalRun::OyunaBaþla form2;
	Application::Run(%form);


	






}



