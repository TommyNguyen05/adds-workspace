#ifndef PLAYER_H
#define PLAYER_H
#include"Move.h"
#include<string>

class Player{
    protected:
        std::string name;
    public:
        virtual Move* makeMove() = 0;
        virtual std::string getName();
        virtual ~Player() {};
};

#endif