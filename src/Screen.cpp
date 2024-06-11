#include "Screen.h"


Screen::Screen(wxPanel *parent)
: wxPanel(parent, wxID_ANY, wxDefaultPosition, wxSize(250, 120)) 
{
  m_text = new wxStaticText(this, -1, wxT("0"), wxPoint(40, 60));
}


void Screen::OnSetText(wxCommandEvent& event) {
}