//
// Created by kabus on 27.04.2026.
//

#ifndef PROJEKT_OBJECT_H
#define PROJEKT_OBJECT_H
#include <wx/graphics.h>

#include "../render/Sprite.h"
#include "../utils/Vector.h"

class Object {
public:
    Vector position;
    Vector size;
    std::string spriteName;

    Object(Vector position, Vector size, std::string spriteName);

    virtual void Tick(double delta);
};

#endif //PROJEKT_OBJECT_H
