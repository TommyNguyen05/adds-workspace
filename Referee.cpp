#include"Referee.h"
#include"Player.h"

Referee::Referee(){}

Player* Referee::refGame(Player* player1, Player* player2){
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    //To determine the winner
    if (move1->getName() == move2->getName()){
        return nullptr;
    }
    bool result = move1->compareMove(move2);
    if (result) {
        // Player 1 wins
        return player1; 
    }
    return player2; // Player 2 wins
}