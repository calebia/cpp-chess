#pragma once

#include <array>
#include <optional>

#include "piece.hpp"
#include "move.hpp"

namespace chess{

    using Cell = std::optional<Piece>;

    class Board{
        public:
            Board();
            void print() const;
            void move(const Move& move);
            const Cell& at(const Square& square) const;

        private:
            std::array<std::array<Cell,8>,8> cells_;
    };
     
}