#include <iostream>

#include "Computer.h"
#include "Human.h"
#include "Referee.h"

int main() {
// Initialise Referee
  Referee referee;
// Initialise Human player
  Human* player1 = new Human();
// Initialise Computer Player
  Computer* player2 = new Computer();
// Match the two players
  Player* winner = referee.refGame(player1, player2);

  // Print the result
  if (winner == nullptr) {
    std::cout << "It's a Tie." << std::endl;
  } else {
    std::cout << winner->getName() << " Wins." << std::endl;
  }

  return 0;
}
