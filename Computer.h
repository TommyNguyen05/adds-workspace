#ifndef COMPUTER_H
#define COMPUTER_H
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

class Computer : public Player {
    public:
        Computer();
        Move* makeMove();
        
};

#endif