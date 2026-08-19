#include "loadingScreen.h"

#include <iostream>
#include <string>
#include <chrono>
#include <bits/this_thread_sleep.h>

void loading() {
    std::string loadingBar = "[" + std::string(50, ' ') + "]";

    for (int i = 1; i < loadingBar.size(); i++) {
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        loadingBar[i] = '=';

        std::cout << '\r' << loadingBar << std::flush;
    }
}
