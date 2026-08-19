#include "clearScreen.h"

#include <cstdlib>

void clearScreen() {
#ifdef _WIN32
    system("cls");
#elif defined(__linux__)
    system("clear");
#else
#error "Unsupported operating system"
#endif
}
