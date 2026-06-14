//
// Created by kabus on 14.06.2026.
//

#ifndef PROJEKT_GAMEPAGE_H
#define PROJEKT_GAMEPAGE_H

#include <wx/wx.h>
#include "../BombermanGame.h"

class GamePage : public wxPanel {
private:
    BombermanGame* gamePanel;
    Board board;

    void OnKeyDown(wxKeyEvent& event);
    void OnKeyUp(wxKeyEvent& event);

public:
    GamePage(wxWindow* parent);
};



#endif //PROJEKT_GAMEPAGE_H
