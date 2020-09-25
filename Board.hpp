#pragma once
#include <array>

constexpr int screenWidth = 600;
constexpr int screenHeight = 400;

class Board {
public:
    Board();
    void drawBoard();

private:
    std::array<std::array<char, screenWidth>, screenHeight> map_;
}
