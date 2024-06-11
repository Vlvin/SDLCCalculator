#include "MainWindow.h"
#include <iostream>


MainWindow::MainWindow() : wxFrame(0, wxID_ANY, "SmartCalculator") {
  Bind(wxEVT_MENU, &MainWindow::OnExit, this, wxID_EXIT);
  Bind(wxEVT_MENU, &MainWindow::OnAbout, this, wxID_ABOUT);
  Bind(wxEVT_MENU, &MainWindow::OnHi, this, ID_Hello);



    wxMenu *menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Hello...\tCtrl+F",
                     "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);
 
    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
 
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");
 
    SetMenuBar(menuBar);
 
    CreateStatusBar();
    SetStatusText("Welcome to wxWidgets!");
}


void MainWindow::OnExit(wxCommandEvent& event) {
  Close(true);
}

void MainWindow::OnAbout(wxCommandEvent& event) {
  wxMessageBox("This is Elon Mask, CEO of SpaceX");
}

void MainWindow::OnHi(wxCommandEvent& event) {
  wxMessageBox("HI");
}
