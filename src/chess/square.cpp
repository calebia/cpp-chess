#include "square.hpp"
#include <stdexcept>
namespace chess{
        Square::Square(int row, int col) {
        if (row < 0 || row >= 8 || col < 0 || col >= 8) {
            throw std::invalid_argument("Invalid square");
        }

        row_ = row;
        col_ = col;
    }

    int Square::row() const {
        return row_;
    }

    int Square::col() const {
        return col_;
    }
}