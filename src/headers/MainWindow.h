#pragma once
#include <wx/wx.h>

enum
{
  ID_Hello = 1
};

class MainWindow : public wxFrame {
public:
  MainWindow();
private:
  void OnExit(wxCommandEvent &event);
  void OnHi(wxCommandEvent &event);
  void OnAbout(wxCommandEvent &event);
};