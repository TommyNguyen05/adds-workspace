#ifndef NINJA_H
#define NINJA_H
#include"Move.h"
#include<string>

class Ninja : public Move{
    private:
        std::string name;
    public:
        Ninja();
        std::string getName() override;
        bool compareMove(Move* move2) override;
        Move* makeMove() override; 
};

#endif