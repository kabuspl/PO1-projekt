//
// Created by kabus on 14.06.2026.
//

#include "GamePage.h"

GamePage::GamePage(wxWindow *parent) : wxPanel(parent), board(21, 11) {
    wxBoxSizer* gameSizer = new wxBoxSizer(wxVERTICAL);
    SetSizer(gameSizer);

    wxBoxSizer* hudSizer = new wxBoxSizer(wxHORIZONTAL);
    gameSizer->Add(hudSizer, 0, wxEXPAND);

    gamePanel = new BombermanGame(this, board);
    gameSizer->Add(gamePanel, 1, wxEXPAND);
    gamePanel->Bind(wxEVT_KEY_DOWN, &GamePage::OnKeyDown, this);
    gamePanel->Bind(wxEVT_KEY_UP, &GamePage::OnKeyUp, this);
}

void GamePage::OnKeyDown(wxKeyEvent &event) {
    gamePanel->SetKeyDown(event.GetUnicodeKey());
    event.Skip();
}

void GamePage::OnKeyUp(wxKeyEvent &event) {
    gamePanel->SetKeyUp(event.GetUnicodeKey());
    event.Skip();
}
