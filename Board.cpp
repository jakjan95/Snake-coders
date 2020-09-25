#include "Board.hpp"

#include <iostream>

Board::Board() {
    for (auto& row : map_) {
        row.fill('w');
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

void Board::update() {
    map_[snake_.getY()][snake_.getX()] = ' ';
}
