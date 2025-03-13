#include "Human.h"
#include "Robot.h"
#include "Ninja.h"
// Include other move classes
#include "Move.h"
#include <iostream>

Human::Human() {
    this->name = "Human";
}

Human::Human(std::string name) {
    this->name = name;
}

Move* Human::makeMove() {
    std::string playerMove;
    std::cout << "Enter move: ";
    std::cin >> playerMove;

    // Create the appropriate move object
    if (playerMove == "Robot") {
        return new Robot();
    } else if (playerMove == "Ninja") {
        return new Ninja();
    } else if (playerMove == "Monkey") {
        return new Monkey();
    } else if (playerMove == "Pirate") {
        return new Pirate();
    } else if (playerMove == "Zombie") {
        return new Zombie();
    } else if (playerMove == "Rock") {
        return new Rock();
    } else if (playerMove == "Paper") {
        return new Paper();
    } else if (playerMove == "Scissors") {
        return new Scissors();
    }
    
    // std::cout << "Invalid move! Try again." << std::endl;
    return makeMove();  // repeate retry if invalid input
}
