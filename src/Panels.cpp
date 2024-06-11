#include "Panels.h"
#include "MainWindow.h"

LeftPanel::LeftPanel(wxPanel *parent) 
: wxPanel(parent, wxID_ANY, wxDefaultPosition, wxSize(270, 150)) {
  count = 0;
  m_plus = new wxButton(this, '+', "+", wxPoint(10, 10));
  m_minus = new wxButton(this, '-', "-", wxPoint(10, 100));
  Connect('+', wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(LeftPanel::OnPlus));
  Connect('-', wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(LeftPanel::OnMinus));
}

void LeftPanel::OnPlus(wxCommandEvent& event) {
  count++;
  updateText();
}

void LeftPanel::OnMinus(wxCommandEvent& event) {
  count--;
  updateText();
}

void LeftPanel::updateText() {
  MainWindow* win = (MainWindow*)m_parent->GetParent();
  win->m_right->m_text->SetLabel(wxString::Format("%d", count));
}



RightPanel::RightPanel(wxPanel *parent)
: wxPanel(parent, wxID_ANY, wxDefaultPosition, wxSize(270, 150)) {
  m_text = new wxStaticText(this, -1, wxT("0"), wxPoint(40, 60));
}



void RightPanel::OnSetText(wxCommandEvent& event) {
}