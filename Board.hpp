#pragma once
#include <array>

constexpr int screenWidth = 20;
constexpr int screenHeight = 20;

class Board {
public:
    Board();
    void drawBoard() const;

private:
    std::array<std::array<char, screenWidth>, screenHeight> map_;
};
