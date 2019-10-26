#include <iostream>
#include "util.h"
int main() {
    std::string player1;
    std::vector<enum CARDVALUE> mycards;
    do {
        std::cout << "Inut player 1:" << std::endl;
        getline(std::cin, player1);
        mycards = parseInput(player1);
    } while(mycards.empty());
    std::sort(mycards.begin(), mycards.end());

    std::string player2;
    std::vector<enum CARDVALUE> rivalcards;
    while(rivalcards.empty()) {
        std::cout << "input player 2:" << std::endl;
        getline(std::cin, player2);
        rivalcards = parseInput(player2);
    }
    std::sort(rivalcards.begin(), rivalcards.end());
    std::cout << "player 1: "<< getOutput(mycards) << std::endl;
    std::cout << "player 2: "<< getOutput(rivalcards) << std::endl;
    return 0;
}