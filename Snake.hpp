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
        : dir_(Direction::LEFT), coordinates_(5, 5) {}

    void turnRight();
    void turnLeft();

    size_t getX() const { return coordinates_.x_; }
    size_t getY() const { return coordinates_.y_; }

private:
    Direction dir_;
    Point coordinates_;
};
