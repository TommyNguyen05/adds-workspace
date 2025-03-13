#include"Robot.h"

Robot::Robot(){
    this->name = "Robot";
}

std::string Robot::getName(){
    return name;
}

bool Robot::compareMove(Move* move2){
    std::string move2Name = move2->getName();
    if (move2Name == "Monkey" || move2Name == "Pirate"){
        return false; // Robot loses
    } else if (move2Name == "Zombie" || move2Name == "Ninja"){
        return true; // Robot wins
    }
    return false;
}

Move* Robot::makeMove() {
    return new Robot();  // Returns a new Robot instance
}