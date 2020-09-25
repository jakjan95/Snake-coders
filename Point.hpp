#pragma once

#include <cstddef>

struct Point {
    Point(size_t x, size_t y)
        : x_(x), y_(y) {}
    size_t x_;
    size_t y_;
};
