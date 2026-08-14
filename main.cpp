#include <iostream>

struct pilgrimInfo {
    std::string path{};
    std::string description{};
    double health{}, stamina{}, damage{}, critRate{}, critDmg{};
};

void drawMenu(pilgrimInfo& pInfo);
int pathChoice(pilgrimInfo& pInfo);

int main() {
    pilgrimInfo pInfo;

    drawMenu(pInfo);

    std::cout << "Press enter to exit...";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

void drawMenu(pilgrimInfo& pInfo) {
    std::cout << "|=================================|\n"
                 "|        Where Ravens Weep        |\n"
                 "|        A text-based RPG         |\n"
                 "|=================================|\n\n"

                 "|=================================|\n"
                 "| Choose your path, pilgrim.      |\n"
                 "|                                 |\n"
                 "| 1. Warrior                      |\n"
                 "| 2. Huntsman                     |\n"
                 "| 3. Sorcerer                     |\n"
                 "| 4. Paladin                      |\n"
                 "| 5. Priest                       |\n"
                 "|=================================|\n\n"
                 ">>";

    int choice = pathChoice(pInfo);
    if (choice > 0 && choice <= 5) {
        std::cout << "======================================================================\n" <<
                     '\"' << pInfo.path << "\"\n" <<
                     pInfo.description << "\n\n" <<
                     "Health: " << pInfo.health << '\n' <<
                     "Stamina: " << pInfo.stamina << '\n' <<
                     "Damage: " << pInfo.damage << '\n' <<
                     "Crit Rate: " << pInfo.critRate * 100.0 << "%\n" <<
                     "Crit Damage: " << pInfo.critDmg * 100.0 << "%\n"
                     "======================================================================\n\n";
    }
    else {
        std::cout << "|====================================|\n"
                     "| That path does not exist, pilgrim. |\n"
                     "|====================================|\n\n";
    }
}

int pathChoice(pilgrimInfo& pInfo) {
    int choice{};
    std::cin >> choice;

    switch (choice) {
        case 1:
            pInfo.path = "Warrior";
            pInfo.description = "A fierce mortal ready to hack and slash its way to glory.";
            pInfo.health = 110;
            pInfo.stamina = 60;
            pInfo.damage = 10;
            pInfo.critRate = 8.0/100;
            pInfo.critDmg = 10.0/100;
            break;
        case 2:
            pInfo.path = "Huntsman";
            pInfo.description = "A skilled marksman able to penetrate even the thickest of defense.";
            pInfo.health = 90;
            pInfo.stamina = 60;
            pInfo.damage = 11;
            pInfo.critRate = 15.0/100;
            pInfo.critDmg = 7.5/100;
            break;
        case 3:
            pInfo.path = "Sorcerer";
            pInfo.description = "A being of great magical affinity, capable of controlling elements";
            pInfo.health = 75;
            pInfo.stamina = 100;
            pInfo.damage = 15;
            pInfo.critRate = 4.0/100;
            pInfo.critDmg = 6.0/100;
            break;
        case 4:
            pInfo.path = "Paladin";
            pInfo.description = "A sturdy and headstrong individual that can endure any danger coming their way.";
            pInfo.health = 150;
            pInfo.stamina = 60;
            pInfo.damage = 8;
            pInfo.critRate = 3.0/100;
            pInfo.critDmg = 5.0/100;
            break;
        case 5:
            pInfo.path = "Priest";
            pInfo.description = "Wields a holy power that is capable of healing their allies and vanquish evil.";
            pInfo.health = 85;
            pInfo.stamina = 80;
            pInfo.damage = 6;
            pInfo.critRate = 10.0/100;
            pInfo.critDmg = 3.0/100;
            break;
        default:
            break;
    }
    return choice;
}