#include "Board.hpp"

#include <iostream>

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

void Board::update() {
    snake_.move();
    clear();
    map_[snake_.getY()][snake_.getX()] = ' ';
}
