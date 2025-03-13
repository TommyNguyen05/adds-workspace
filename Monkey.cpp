#include"Monkey.h"

Monkey::Monkey(){
    this->name = "Monkey";
}

std::string Monkey::getName(){
    return name;
}

bool Monkey::compareMove(Move* move2){
    std::string move2Name = move2->getName();
    if (move2Name == "Zombie" || move2Name == "Pirate"){
        return false; // Monkey loses
    } else if (move2Name == "Robot" || move2Name == "Ninja"){
        return true; // Monkey wins
    }
    return false;
}

Move* Monkey::makeMove(){
    return new Monkey();
}