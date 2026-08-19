#include <iostream>
#include <chrono>
#include <bits/this_thread_sleep.h>

// player includes
#include "components/player/player.h"
#include "components/player/playerName/getPlayerName.h"
// ui includes
#include "components/ui/clearScreen.h"
#include "components/ui/display/classMenuScreen/classMenuScreen.h"
#include "components/ui/display/displayClassScreen/displayClassScreen.h"
#include "components/ui/display/loadingScreen/loadingScreen.h"
#include "components/ui/display/titleScreen/titleScreen.h"
#include "components/ui/interact/classSelect/classSelect.h"
#include "components/ui/interact/confirmation/confirmation.h"

int main() {
    PlayerInfo pInfo;

    title(); // show title screen
    std::this_thread::sleep_for(std::chrono::milliseconds(2000)); // for 2 seconds.

    clearScreen();
    loading();

    bool selecting = true;
    while (selecting) {
        clearScreen();

        classMenu();
        classSelect(pInfo);

        clearScreen();

        displayClass(pInfo);
        if (confirmation()) selecting = false;
    }

    clearScreen();
    loading();
    clearScreen();

    getPlayerName(pInfo);

    std::cout << "Press enter to exit...";
    std::cin.get();

    return 0;
}