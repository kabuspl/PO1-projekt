#ifndef PROJEKT_OBJECT_H
#define PROJEKT_OBJECT_H
#include <set>
#include <wx/graphics.h>

#include "../utils/Vector.h"

class Board;

class Object {
public:
    Vector position;
    Vector size;
    std::string spriteName;
    Board& board;
    bool flagDelete = false;
    int ticks = 0;

    Object(Vector position, Vector size, std::string spriteName, Board& board);

    virtual void Tick(std::set<char> pressedKeys);
};

#endif // PROJEKT_OBJECT_H
