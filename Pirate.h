#ifndef PIRATE_H
#define PIRATE_H
#include"Move.h"
#include<string>

class Pirate : public Move {
    private:
        std::string name;
    public:
        Pirate();
        std::string getName() override;
        bool compareMove(Move* move2) override;
        Move* makeMove() override;

};

#endif