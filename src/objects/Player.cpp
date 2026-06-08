//
// Created by kabus on 29.04.2026.
//

#include "Player.h"

#include "../BombermanGame.h"
#include "../Constants.h"

Player::Player() : Object(Vector(32.0, 32.0), Vector(TILE_SIZE, TILE_SIZE), "player") {
}