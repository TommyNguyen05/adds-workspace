#include"Zombie.h"

Zombie::Zombie(){
    this->name = "Zombie";
}

std::string Zombie::getName(){
    return name;
}

bool Zombie::compareMove(Move* move2){
    std::string move2Name = move2->getName();
    if (move2Name == "Robot" || move2Name == "Ninja"){
        return false; // Zombie loses
    } else if (move2Name == "Pirate" || move2Name == "Monkey"){
        return true; // Zombie wins
    }
    return false;
}

Move* Zombie::makeMove() {
    return new Zombie();  // Returns a new Zombie instance
}