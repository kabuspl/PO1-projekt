//
// Created by kadank on 6/14/26.
//

#include "Enemy.h"

#include "../components/BombermanGame.h"
#include "../Constants.h"

Enemy::Enemy(Board& board, Vector position) : Object(position, Vector(TILE_SIZE, TILE_SIZE), "error", board) {
}