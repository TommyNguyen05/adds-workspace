#include"Paper.h"

Paper::Paper(){
    this->name = "Paper";
}

std::string Paper::getName(){
    return name;
}

bool Paper::compareMove(Move* move2){
    std::string move2Name = move2->getName();
    if (move2Name == "Scissors"){
        return false; // Paper loses
    } else if (move2Name == "Rock"){
        return true; // Paper wins
    }
    return false;
}

Move* Paper::makeMove() {
    return new Paper();  // Returns a new Paper instance
}