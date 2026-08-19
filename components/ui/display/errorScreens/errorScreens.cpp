#include "errorScreens.h"

#include <iostream>

void invalidClassChoice() {
    std::cout << "|====================================================================|\n"
                 "| Being blind would not make your journey easy im afraid. (1-5 only) |\n"
                 "|====================================================================|\n\n";
}

void invalidConfirmation() {
    std::cout << "|=======================================|\n"
                 "| I worry for you... (Try again. [Y/N]) |\n"
                 "|=======================================|\n\n";
}

void nameEmpty() {
    std::cout << "|========================================================|\n"
                 "| Don't be shy, tell me your name. (Name can't be empty) |\n"
                 "|========================================================|\n\n";
}