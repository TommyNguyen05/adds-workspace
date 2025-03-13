#include"Pirate.h"

Pirate::Pirate(){
    this->name = "Pirate";
}

std::string Pirate::getName(){
    return name;
}

bool Pirate::compareMove(Move* move2){
    std::string move2Name = move2->getName();
    if (move2Name == "Zombie" || move2Name == "Ninja"){
        return false; // Pirate loses
    } else if (move2Name == "Robot" || move2Name == "Monkey"){
        return true; // Pirate wins
    }
    return false;
}

Move* Pirate::makeMove() {
    return new Pirate();  // Returns a new Pirate instance
}