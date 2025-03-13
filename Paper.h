#ifndef PAPER_H
#define PAPER_H
#include"Move.h"
#include<string>

class Paper : public Move {
    private:
        std::string name;
    public:
        Paper();
        std::string getName() override;
        bool compareMove(Move* move2) override;
        Move* makeMove() override;

};

#endif