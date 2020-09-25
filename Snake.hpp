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
    Snake() {
        dir_ = Direction::UP;
    }

    void moveRight();
    void moveLeft();

private:
    Direction dir_;
};
