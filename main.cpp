#include <chrono>
#include <thread>
#include "Board.hpp"
using namespace std::chrono_literals;

int main() {
    Board board;
    for (int i = 0; i < 20; i++) {
        board.drawBoard();
        board.update();
        std::this_thread::sleep_for(0.5s);
        system("clear");
    }

    return 0;
}
