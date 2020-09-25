#include "Snake.hpp"

void Snake::moveRight() {
    dir_ = Direction::LEFT;
}

void Snake::moveLeft() {
    dir_ = Direction::RIGHT;
}
