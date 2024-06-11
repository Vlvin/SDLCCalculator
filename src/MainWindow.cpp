#include "MainWindow.h"
#include <iostream>
#include "Screen.h"
#include "Keyboard.h"


MainWindow::MainWindow() : 
  wxFrame(0, wxID_ANY, "SmartCalculator")
{
  m_parent = new wxPanel(this, wxID_ANY);
  m_screen = new Screen(m_parent);
  m_keyboard = new Keyboard(m_parent);
  wxBoxSizer *sizer = new wxBoxSizer(wxVERTICAL);
  sizer->Add(m_screen, 1, wxEXPAND | wxALL, 5);
  sizer->Add(m_keyboard, 1, wxEXPAND | wxALL, 5);
  m_parent->SetSizer(sizer);
  Centre();
}


void MainWindow::OnExit(wxCommandEvent& event) {
  Close(true);
}
