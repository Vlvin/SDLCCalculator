#pragma once

#include <vector>
#include <wx/wx.h>

class Keyboard : public wxPanel {
public:
  std::vector<wxButton*> common;

  Keyboard(wxPanel *parent);
  void OnAddNum(wxCommandEvent& event);
};