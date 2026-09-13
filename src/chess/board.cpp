#include "board.hpp"

#include <iostream>

namespace chess {

    Board::Board() {
        cells_[0][0] = Piece{PieceType::Rook, Color::Black};
        cells_[0][1] = Piece{PieceType::Knight, Color::Black};
        cells_[0][2] = Piece{PieceType::Bishop, Color::Black};
        cells_[0][3] = Piece{PieceType::Queen, Color::Black};
        cells_[0][4] = Piece{PieceType::King, Color::Black};
        cells_[0][5] = Piece{PieceType::Bishop, Color::Black};
        cells_[0][6] = Piece{PieceType::Knight, Color::Black};
        cells_[0][7] = Piece{PieceType::Rook, Color::Black};

        for (int col = 0; col < 8; ++col) {
            cells_[1][col] = Piece{PieceType::Pawn, Color::Black};
            cells_[6][col] = Piece{PieceType::Pawn, Color::White};
        }

        cells_[7][0] = Piece{PieceType::Rook, Color::White};
        cells_[7][1] = Piece{PieceType::Knight, Color::White};
        cells_[7][2] = Piece{PieceType::Bishop, Color::White};
        cells_[7][3] = Piece{PieceType::Queen, Color::White};
        cells_[7][4] = Piece{PieceType::King, Color::White};
        cells_[7][5] = Piece{PieceType::Bishop, Color::White};
        cells_[7][6] = Piece{PieceType::Knight, Color::White};
        cells_[7][7] = Piece{PieceType::Rook, Color::White};
    }

    void Board::print() const {
        int N = 8;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                const Cell &cell = cells_[i][j];

                if(!cell.has_value()){
                    std::cout << ".";
                    continue;
                }

                const Piece& piece = cell.value();

                char symbol;

                switch(piece.type){
                    case PieceType::Pawn:
                        symbol = 'p';
                        break;
                    case PieceType::Knight:
                        symbol = 'n';
                        break;
                    case PieceType::Rook:
                        symbol = 'r';
                        break;
                    case PieceType::Bishop:
                        symbol = 'b';
                        break;
                    case PieceType::Queen:
                        symbol = 'q';
                        break;
                    case PieceType::King:
                        symbol = 'k';
                        break;
                }

                if(piece.color == Color::White) symbol = symbol -'a'+'A';
                
                std::cout<<symbol;
           
            }

            std::cout << "\n";
        }
    }

    void Board::move(const Move& move){
        cells_[move.to.row][move.to.col] = cells_[move.from.row][move.from.col];

        cells_[move.from.row][move.from.col].reset();
    }

}