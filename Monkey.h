#ifndef MONKEY_H
#define MONKEY_H
#include"Move.h"
#include<string>

class Monkey : public Move{
    private:
        std::string name;
    public:
        Monkey();
        std::string getName() override;
        bool compareMove(Move* move2) override;
        Move* makeMove() override; 
};

#endif