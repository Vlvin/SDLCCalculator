#include "Keyboard.h"
#include <iostream>


Keyboard::Keyboard(wxPanel *parent)
: wxPanel(parent, wxID_ANY, wxDefaultPosition, wxSize(250, 480)) 
{
  std::cout << "Button connection\n";
  wxGridSizer *m_grid = new wxGridSizer(10, 4, 10, 10);
  for (char i = '('; i < '>' + 1; i++) {
    if (i == ',') continue;
    common.push_back(
      new wxButton(
        this, 
        i, 
        wxString::Format("%c", i),
        wxDefaultPosition,
        wxSize(38, 38)
      )
    );
    Connect(
      i, 
      wxEVT_COMMAND_BUTTON_CLICKED, 
      wxCommandEventHandler(Keyboard::OnAddNum)
    );
    m_grid->Add(common.back(), 1, wxEXPAND | wxALL, 5);
  }
  SetSizer(m_grid);
  Layout();
}

void Keyboard::OnAddNum(wxCommandEvent &event) {
  std::cout << event.GetId() << '\n';
}