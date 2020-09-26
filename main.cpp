#include <curses.h>
#include <chrono>
#include <thread>
#include "Board.hpp"
using namespace std::chrono_literals;

int main() {
    Board board;
    for (int i = 0; i < 20; i++) {
        system("clear");
        board.drawBoard();
        if (board.update()) {
            return 2;
        }
        std::this_thread::sleep_for(0.5s);
    }

    return 0;
}
