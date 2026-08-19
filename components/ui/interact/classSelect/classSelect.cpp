#include "classSelect.h"
#include "../../display/classMenuScreen/classMenuScreen.h"
#include "../../display/errorScreens/errorScreens.h"
#include "../../clearScreen.h"

#include <iostream>

void classSelect(PlayerInfo &pInfo) {
    int choice{};

    bool choosing = true;
    while (choosing) {
        std::cout << '>';
        std::cin >> choice;

        switch (choice) {
            case 1:
                pInfo = classes[0];
                choosing = false;
                break;
            case 2:
                pInfo = classes[1];
                choosing = false;
                break;
            case 3:
                pInfo = classes[2];
                choosing = false;
                break;
            case 4:
                pInfo = classes[3];
                choosing = false;
                break;
            case 5:
                pInfo = classes[4];
                choosing = false;
                break;
            default:
                clearScreen();
                classMenu();
                invalidClassChoice();
        }
    }
}
