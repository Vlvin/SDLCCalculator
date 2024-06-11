#include <iostream>
#include <wx/wx.h>
#include "MainWindow.h"

class Application : public wxApp {
public:
  bool OnInit() override;
};

bool Application::OnInit() {
  MainWindow* win = new MainWindow();
  win->Show();
  return true;
}

wxIMPLEMENT_APP(Application);

