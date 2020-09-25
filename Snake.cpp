#include "Snake.hpp"

void Snake::turnRight() {
    dir_ = Direction::LEFT;
}

void Snake::turnLeft() {
    dir_ = Direction::RIGHT;
}

void Snake::move() {
    switch (dir_) {
    case Direction::UP:
        coordinates_.y_--;
        break;
    case Direction::DOWN:
        coordinates_.y_++;
        break;
    case Direction::RIGHT:
        coordinates_.x_++;
        break;
    case Direction::LEFT:
        coordinates_.x_--;
        break;
    }
}
