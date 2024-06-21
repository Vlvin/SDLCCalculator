#include "Screen.h"
#include "CalcLetterChecker.h"

Screen::Screen(wxPanel *parent)
: wxPanel(parent, wxID_ANY, wxDefaultPosition, wxSize(250, 120)) 
{
  m_text = new wxStaticText(this, -1, wxT("0"), wxPoint(40, 60));
}


void Screen::OnSetText(wxCommandEvent& event) {
  std::cout 
    << ((wxButton*)(event.GetEventObject()))->GetLabelText() 
    << '\n';
}

void Screen::addText(wxString text) {
  wxString screenText = m_text->GetLabelText();
  if (text.length() > 1) return;
  char symb = text[0];
  if (screenText.Cmp("0") == 0 && clc::isNumeric(symb)) {
    m_text->SetLabelText(text);
    return;
  }
  if (clc::isSign(symb)) {
    auto symbAsString = wxString::Format("%c", symb);
    if ((symb == '.') && screenText.Contains(symbAsString))
      return;
    if (clc::isSign(screenText.Last())) screenText.RemoveLast();
  }
  
  m_text->SetLabelText(screenText + text);
}