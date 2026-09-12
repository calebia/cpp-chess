#include "vector"

using namespace std;


struct piece{
    char peca;
};

class cell{
public:


    piece peca;
        
    cell(){}
    cell(piece peca) : peca(peca){}

};


class board{
public:

    vector<vector<cell>> tabuleiro;

    board(){
        
    }
}

int main(){

    vector<vector<cell>> tabuleiro(8, vector<cell> (8));

}