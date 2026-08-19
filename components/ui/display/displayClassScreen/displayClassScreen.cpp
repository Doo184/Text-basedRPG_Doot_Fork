#include "displayClassScreen.h"

#include <iostream>
#include <format>

void displayClass(const PlayerInfo& pInfo) {
    std::cout << std::format(
        "\"{}\"\n"
        "- {}\n"
        "Health: {}\n"
        "Stamina: {}\n"
        "Damage: {}\n"
        "Crit Rate: {}%\n"
        "Crit Damage: {}%\n\n",

        pInfo.playerClass,
        pInfo.classDesc,
        pInfo.health,
        pInfo.stamina,
        pInfo.damage,
        pInfo.critRate * 100,
        pInfo.critDmg * 100
        );
}