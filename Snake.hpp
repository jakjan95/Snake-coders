#pragma once
#include <iostream>

#include "Point.hpp"

enum class Direction {
    UP,
    DOWN,
    RIGHT,
    LEFT,
};

class Snake {
public:
    Snake()
        : dir_(Direction::DOWN), coordinates_(5, 5) {}

    void turnRight();
    void turnLeft();
    void move();

    int getX() const { return coordinates_.x_; }
    int getY() const { return coordinates_.y_; }
    Direction getDirection() { return dir_; }
    void changeDirection(Direction newDirection) { dir_ = newDirection; }

private:
    Direction dir_;
    Point coordinates_;
};
