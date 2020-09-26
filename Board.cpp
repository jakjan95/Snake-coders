#include "Board.hpp"

#include <iostream>

constexpr char snakeSquare = '#';

Board::Board() {
    for (auto& row : map_) {
        row.fill('.');
    }
}

void Board::drawBoard(sf::RenderWindow& window) const {
    for (size_t y = 0; y < screenHeight; y++) {
        for (size_t x = 0; x < screenWidth; x++) {
            if (map_[y][x] == '#') {
                sf::RectangleShape rect(sf::Vector2f(10, 10));
                rect.setPosition(x * 10, y * 10);
                window.draw(rect);
            }
        }
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
    for (int i = 0; i < snake_.getPiecesSize(); i++) {
        map_[snake_.getPiece(i).y_][snake_.getPiece(i).x_] = snakeSquare;
    }
    return false;
}
