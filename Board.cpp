#include "Board.hpp"

#include <iostream>

constexpr char snakeSquare = '#';

Board::Board() {
    for (auto& row : map_) {
        row.fill('.');
    }
}

void Board::drawBoard() const {
    for (const auto& row : map_) {
        for (auto el : row) {
            std::cout << el;
        }
        std::cout << '\n';
    }
}

void Board::clear() {
    for (auto& row : map_) {
        row.fill('.');
    }
}

bool Board::checkEdges() {
    if (snake_.getX() >= screenWidth ||
        snake_.getX() < 0 ||
        snake_.getY() >= screenHeight ||
        snake_.getY() < 0) {
        return true;
    }
    return false;
}

bool Board::update() {
    snake_.move();
    if (checkEdges()) {
        return true;
    }
    clear();
    map_[snake_.getY()][snake_.getX()] = snakeSquare;
    return false;
}
