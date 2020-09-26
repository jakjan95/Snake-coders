#pragma once
#include <array>

#include "Snake.hpp"

constexpr int screenWidth = 20;
constexpr int screenHeight = 20;

class Board {
public:
    Board();
    bool update();
    void drawBoard() const;
    bool checkEdges();

private:
    void clear();
    std::array<std::array<char, screenWidth>, screenHeight> map_;

    Snake snake_;
};
