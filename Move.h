#ifndef MOVE_H
#define MOVE_H
#include<string>

class Move{
    public:
        virtual Move* makeMove() = 0;
        virtual std::string getName() = 0;
        virtual bool compareMove(Move* move2) = 0;
        // May include comparing function
        virtual ~Move() {};
};

#endif