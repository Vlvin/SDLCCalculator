#pragma once
#include <wx/wx.h>

class Screen : public wxPanel {
private:
  wxStaticText *m_text;
public: 
  Screen(wxPanel *parent);
  void OnSetText(wxCommandEvent& event);
};