#pragma once
#include <wx/wx.h>

class Screen;
class Keyboard;

class MainWindow : public wxFrame {
public:
  Screen *m_screen;
  Keyboard *m_keyboard;
  wxPanel *m_parent;
  MainWindow();
private:
  void OnExit(wxCommandEvent &event);
};