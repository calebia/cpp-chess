#include "chess/board.hpp"
#include "chess/move.hpp"
#include <iostream>

int main(){
    
    chess::Board board;

    board.print();

    chess::Move move{6, 4, 4, 4};
    board.move(move);

    board.print();
}