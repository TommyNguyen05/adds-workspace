#ifndef HUMAN_H
#define HUMAN_H
#include"Player.h"
#include"Move.h"
#include"Robot.h"
#include"Monkey.h"
#include"Pirate.h"
#include"Zombie.h"
#include"Ninja.h"
#include"Rock.h"
#include"Paper.h"
#include"Scissors.h"

#include<string>

class Human : public Player{
    public:
        Human();
        Human(std::string name);
        Move* makeMove();

};

#endif