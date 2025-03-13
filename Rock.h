#ifndef ROCK_H
#define ROCK_H
#include"Move.h"
#include<string>

class Rock : public Move {
    private:
        std::string name;
    public:
        Rock();
        std::string getName() override;
        bool compareMove(Move* move2) override;
        Move* makeMove() override;

};

#endif