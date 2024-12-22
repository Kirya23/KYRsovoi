#include "MainWindows.h"
// null- главное окно(нет родительского) 
// id_any-автоматическая генерация окна
// defualt - позиция по центру
MainWindows::MainWindows(const wxString& title) : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(500,500))
{
	// c иконкой бедаа
	wxIcon icon(wxT("C:/Users/PiroZHoCheck_2.0/Desktop/icon.ico"));
	SetIcon(icon);

	wxPanel* panel = new wxPanel(this, wxID_ANY);
	wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);

	textCtrl = new wxTextCtrl(panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(250, 50), wxTE_MULTILINE);
	sizer->Add(textCtrl, 1, wxALL | wxEXPAND, 5);

	wxButton* button = new wxButton(panel, wxID_ANY, "Показать то, что ввёл");
	button->Bind(wxEVT_BUTTON, &MainWindows::OnButtonClicked, this);
	sizer->Add(button, 0, wxALL | wxCENTER, 5);

	panel->SetSizer(sizer);
	sizer->Fit(panel);

	/*wxPanel* panel = new wxPanel(this, wxID_ANY);
	wxButton* button = new wxButton(panel, wxID_EXIT, wxT("Выход"), wxPoint(0, 0));

	button->Bind(wxEVT_BUTTON, &MainWindows::OnQuit, this);*/
}
MainWindows::~MainWindows()
{
	delete textCtrl;
}

//void MainWindows::OnQuit(wxCommandEvent& event) {
//	Close(true);

void MainWindows::OnButtonClicked(wxCommandEvent& event) {
	wxString text = textCtrl->GetValue();
	wxMessageBox(text, "Твой текст", wxOK | wxICON_INFORMATION);
}