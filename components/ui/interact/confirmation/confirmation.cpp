#include "confirmation.h"

#include <iostream>
#include "../../display/errorScreens/errorScreens.h"

bool confirmation() {
    std::cout << "|=======================================================|\n"
                 "| Are you sure this is the path you want to take? [Y/N] |\n"
                 "|=======================================================|\n\n";

    char decision{};

    while (true) {
        std::cout << '>';
        std::cin >> decision;

        if (decision == 'N' || decision == 'n') return false;

        if (decision == 'Y' || decision == 'y') return true;

        invalidConfirmation();
    }
}