// Start of wxWidgets "Hello World" Program
#include <wx/wx.h>
#include "MainWindows.h"


class MyFirstAPPGUI : public wxApp
{
public:
	virtual bool OnInit();
};

wxIMPLEMENT_APP(MyFirstAPPGUI);

bool MyFirstAPPGUI::OnInit()
{
	MainWindows* mainWin = new MainWindows("Моё окошечко =)");
	mainWin->Show(true);
	return true;
}

