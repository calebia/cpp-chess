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
    Horse,
    Rook
};

struct Piece{
    Color color;
    PieceType pieceType;
};

using Cell = std::optional<Piece>;
