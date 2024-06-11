#pragma once
#include <wx/wx.h>


class LeftPanel : public wxPanel {
public:
  wxButton *m_plus, *m_minus;
  int count;
  LeftPanel(wxPanel * parent);
  void OnPlus(wxCommandEvent& event);
  void OnMinus(wxCommandEvent& event);
private:
  void updateText();
};

class RightPanel : public wxPanel {
public:
  wxStaticText *m_text;
  RightPanel(wxPanel * parent);
  void OnSetText(wxCommandEvent& event);
};