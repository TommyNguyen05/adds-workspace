#ifndef ZOMBIE_H
#define ZOMBIE_H
#include"Move.h"
#include<string>

class Zombie : public Move {
    private:
        std::string name;
    public:
        Zombie();
        std::string getName() override;
        bool compareMove(Move* move2) override;
        Move* makeMove() override;

};

#endif