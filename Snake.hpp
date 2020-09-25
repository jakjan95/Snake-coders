#pragma once
#include <iostream>

enum class Direction {
    UP,
    DOWN,
    RIGHT,
    LEFT,
};

class Snake {
public:
    Snake()
        : dir_(Direction::LEFT) {}

    void turnRight();
    void turnLeft();

    std::size_t getX() const { return x_; }
    std::size_t getY() const { return y_; }

private:
    Direction dir_;
    std::size_t x_ = 5;
    std::size_t y_ = 5;
};
