#pragma once
#include <SFML/Graphics.hpp>
#include <array>

#include "Snake.hpp"

constexpr int screenWidth = 20;
constexpr int screenHeight = 20;

class Board {
public:
    Board();
    bool update();
    void drawBoard(sf::RenderWindow& window) const;
    bool checkEdges();
    void changeDirection(Direction newDir) { snake_.changeDirection(newDir); }

private:
    void clear();
    std::array<std::array<char, screenWidth>, screenHeight> map_;

    Snake snake_;
};
