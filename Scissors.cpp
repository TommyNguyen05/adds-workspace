#include"Scissors.h"

Scissors::Scissors(){
    this->name = "Scissors";
}

std::string Scissors::getName(){
    return name;
}

bool Scissors::compareMove(Move* move2){
    std::string move2Name = move2->getName();
    if (move2Name == "Rock"){
        return false; // Scissors loses
    } else if (move2Name == "Paper"){
        return true; // Scissors wins
    }
    return false;
}

Move* Scissors::makeMove() {
    return new Scissors();  // Returns a new Scissors instance
}