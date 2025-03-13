#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
using namespace std;


int main() {
    Human player1;
    Computer comp;
    std::cout<<player1.makeMove()<<std::endl;
    return 0;
}