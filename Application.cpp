#include <iostream>
#include "Piece.h"
int main(){
    Chess::Piece Pawn("Pawn",VMath::Vector(0,1),[](const VMath::Vector& pos){
		    std::vector<VMath::Vector> vecs;
		    vecs.push_back(VMath::Vector(0,3));
		    return vecs;
    });
    Pawn.CheckoutPossibleMoves();
} 
