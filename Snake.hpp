#pragma once
#include <iostream>
#include <vector>

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
        : dir_(Direction::DOWN), coordinates_(5, 5) {
        pieces_.emplace_back(5, 4);
        pieces_.emplace_back(5, 3);

    }

    void turnRight();
    void turnLeft();
    void move();

    int getX() const { return coordinates_.x_; }
    int getY() const { return coordinates_.y_; }
    void setDirection(Direction newDir) { dir_ = newDir; }
    Direction getDirection() { return dir_; }
    void changeDirection(Direction newDirection) { dir_ = newDirection; }

    void addPiece(Point p) {
        pieces_.emplace_back(p);
    }

    Point getPiece(int i) {
        return pieces_.at(i);
    }

    void movePiecesX(bool direction) {
        for (auto& el : pieces_) {
            if (direction) {
                el.x_++;
            } else {
                el.x_--;
            }
        }
    }

    int getPiecesSize(){
        return pieces_.size();
    }

    void movePiecesY(bool direction) {
        for (auto& el : pieces_) {
            if (direction) {
                el.y_++;
            } else {
                el.y_--;
            }
        }
    }

private:
    Direction dir_;
    Point coordinates_;
    std::vector<Point> pieces_;
};
