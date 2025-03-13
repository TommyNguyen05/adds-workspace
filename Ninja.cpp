#include"Ninja.h"

Ninja::Ninja(){
    this->name = "Ninja";
}

std::string Ninja::getName(){
    return name;
}

bool Ninja::compareMove(Move* move2){
    std::string move2Name = move2->getName();
    if (move2Name == "Robot" || move2Name == "Monkey"){
        return false; // Ninja loses
    } else if (move2Name == "Pirate" || move2Name == "Zombie"){
        return true; // Ninja wins
    }
    return false;
}

Move* Ninja::makeMove(){
    return new Ninja();
}