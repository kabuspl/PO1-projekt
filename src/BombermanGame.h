//
// Created by kabus on 29.04.2026.
//

#ifndef PROJEKT_BOMBERMANCANVAS_H
#define PROJEKT_BOMBERMANCANVAS_H
#include <wx/graphics.h>
#include <wx/wx.h>

#include "render/Renderer.h"

class Board;

class BombermanGame: public wxPanel {
public:
    BombermanGame(wxWindow* parent, Board& initialBoard);

    void SetBoard(Board& board);

private:
    wxTimer drawTimer;
    wxGraphicsFont fontWhite16;
    int frames_count = 0;
    Board& board;
    Renderer renderer;

    void OnDrawTimer(wxTimerEvent& event);
    void OnPaint(wxPaintEvent& event);

    void Setup(wxGraphicsContext* gc);
};

#endif //PROJEKT_BOMBERMANCANVAS_H
