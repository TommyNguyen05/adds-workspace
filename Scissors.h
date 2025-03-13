#ifndef SCISSORS_H
#define SCISSORS_H
#include"Move.h"
#include<string>

class Scissors : public Move {
    private:
        std::string name;
    public:
        Scissors();
        std::string getName() override;
        bool compareMove(Move* move2) override;
        Move* makeMove() override;

};

#endif