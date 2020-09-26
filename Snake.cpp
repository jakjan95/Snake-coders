#include "Snake.hpp"

void Snake::turnRight() {
    dir_ = Direction::LEFT;
}

void Snake::turnLeft() {
    dir_ = Direction::RIGHT;
}

void Snake::move() {
    switch (dir_) {
    case Direction::UP: {
        //Point lastPosition = coordinates_;
        coordinates_.y_--;
        movePiecesY(false);
        //TODO:
        //Here for pieces still old direction :)
        //Iterate over pieces and change their direction into this below
        //after crossing lastPosition point
        // for (size_t i = 0; i < pieces_.size(); i++) {
        //     if (pieces_[i].x_ == lastPosition.x_ && pieces_[i].y_ == lastPosition.y_) {
        //         movePiecesY(false);
        //     } else {
        //         movePiecesY(true);
        //     }
        // }
        break;
    }
    case Direction::DOWN:
        coordinates_.y_++;
        movePiecesY(true);
        break;
    case Direction::RIGHT:
        coordinates_.x_++;
        movePiecesX(true);
        break;
    case Direction::LEFT:
        coordinates_.x_--;
        movePiecesX(false);

        break;
    }
}
