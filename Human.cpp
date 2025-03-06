#include"Human.h"
#include<iostream>
#include <cctype>

Human::Human(){
    this->name = "Human";
}

Human::Human(std::string name) {
    this->name = name;
}

char Human::makeMove(){
    char playerMove;
    while (true){
        // std::cout << "Enter move: "
        std::cin >> playerMove;
        playerMove = std::toupper(playerMove);
        if (playerMove == 'R' || playerMove == 'P' || playerMove == 'S'){
            return playerMove;
        }
    }    
}