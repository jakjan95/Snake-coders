#pragma once
#include <SFML/Graphics.hpp>
#include <array>

#include "Snake.hpp"

constexpr int screenWidth = 20;
constexpr int screenHeight = 20;

class Board {
public:
    Snake snake_;
    Board();
    bool update();
    void drawBoard(sf::RenderWindow& window) const;
    bool checkEdges();
    void changeDirection(Direction newDir) {
        if (checkDirections(newDir)) {
            snake_.changeDirection(newDir);
        }
    }

private:
    void clear();
    std::array<std::array<char, screenWidth>, screenHeight> map_;

    bool checkDirections(Direction newDir) {
        return ((newDir == Direction::DOWN && snake_.getDirection() != Direction::UP) ||
                (newDir == Direction::UP && snake_.getDirection() != Direction::DOWN) ||
                (newDir == Direction::RIGHT && snake_.getDirection() != Direction::LEFT) ||
                (newDir == Direction::LEFT && snake_.getDirection() != Direction::RIGHT));
    }
};
