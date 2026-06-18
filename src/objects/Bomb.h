#ifndef PROJEKT_BOMB_H
#define PROJEKT_BOMB_H
#include "Object.h"

class Bomb : public Object {
public:
    bool isSolid = false;
    Bomb(Board& board, Vector position);

    void Tick(std::set<char> pressedKeys) override;
};

#endif // PROJEKT_BOMB_H
