#include"Rock.h"

Rock::Rock(){
    this->name = "Rock";
}

std::string Rock::getName(){
    return name;
}

bool Rock::compareMove(Move* move2){
    std::string move2Name = move2->getName();
    if (move2Name == "Paper"){
        return false; // Rock loses
    } else if (move2Name == "Scissors"){
        return true; // Rock wins
    }
    return false;
}

Move* Rock::makeMove() {
    return new Rock();  // Returns a new Rock instance
}