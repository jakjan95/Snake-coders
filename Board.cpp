#include "Board.hpp"

Board::Board() {
    for (auto& row : map_) {
        for (auto& el : row) {
            el = 'w';
        }
    }
}
