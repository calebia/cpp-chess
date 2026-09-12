#pragma once

#include <array>
#include <optional>

#include "piece.hpp"

namespace chess{

    using Cell = std::optional<Piece>;

    class Board{
        public:
            Board();
            void print() const;

        private:
            std::array<std::array<Cell,8>,8> cells_;
    };
     
}