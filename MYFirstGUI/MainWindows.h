#include <wx/wx.h>
#include <wx/frame.h>
#include <wx/panel.h>
#include <wx/button.h>

class MainWindows: public wxFrame
{
public:
	MainWindows(const wxString& title);
	~MainWindows();

	/*void OnQuit(wxCommandEvent& event);*/
	void OnButtonClicked(wxCommandEvent& event);

private:
	wxTextCtrl* textCtrl;
};
