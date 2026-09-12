#pragma once

#include <optional>

enum class Color{
    White,
    Black
};

enum class PieceType{
    Bishop,
    King,
    Queen, 
    Pawn, 
    Knight,
    Rook
};

struct Piece{
    PieceType type;
    Color color;
};

using Cell = std::optional<Piece>;
