#ifndef HUMAN_H
#define HUMAN_H
#include"Player.h"
#include<string>

class Human : public Player{
    public:
        Human();
        Human(std::string);
        char makeMove();

};

#endif