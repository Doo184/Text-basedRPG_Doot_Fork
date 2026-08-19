#include "getPlayerName.h"
#include "../../ui/clearScreen.h"

#include <iostream>

void getPlayerName(PlayerInfo& pInfo) {
    bool naming = true;
    while (naming) {
        clearScreen();

        std::cout << "Well then " << pInfo.playerClass << ", what is your name?\n\n";
        std::cout << '>';
        std::getline(std::cin >> std::ws, pInfo.playerName);

        if (!pInfo.playerName.empty()) {
            naming = false;
        }
    }

    clearScreen();
    std::cout << "Welcome, " << pInfo.playerName << "!\n\n";
}