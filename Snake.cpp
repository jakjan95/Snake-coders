#include "Snake.hpp"

void Snake::turnRight() {
    dir_ = Direction::LEFT;
}

void Snake::turnLeft() {
    dir_ = Direction::RIGHT;
}
