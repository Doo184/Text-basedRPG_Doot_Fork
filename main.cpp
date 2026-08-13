#include <iostream>

void warriorInfo(std::string& character, char& proceed, bool& hasCharacter, std::string& usedCharacter);
void archerInfo(std::string& character, char& proceed, bool& hasCharacter, std::string& usedCharacter);
void sorcererInfo(std::string& character, char& proceed, bool& hasCharacter, std::string& usedCharacter);
void tankerInfo(std::string& character, char& proceed, bool& hasCharacter, std::string& usedCharacter);
void wardenInfo(std::string& character, char& proceed, bool& hasCharacter, std::string& usedCharacter);
void checkCharacter(std::string& character, char& proceed, bool& hasCharacter, std::string& usedCharacter);

using text = std::string;

int main () {

    int role = {};
    text character;
    text warrior;
    char proceed;
    bool hasCharacter = false;
    std::string usedCharacter;

    

    std::cout << " ______________________________________\n";
    std::cout << "|                                      |\n";
    std::cout << "|  Welcome to AnimA, A text based RPG  |\n";
    std::cout << "|______________________________________|\n";

    do {
    // Class selection
    std::cout << "\nPlease choose a role.\n";
    std::cout << "1. Warrior\n";
    std::cout << "2. Archer\n";
    std::cout << "3. Sorcerer\n";
    std::cout << "4. Tanker\n";
    std::cout << "5. Warden\n";
    std::cin >> role;

    switch (role) {
        case 1:
            warriorInfo(character, proceed, hasCharacter,usedCharacter);
            break;
        case 2:
            archerInfo(character, proceed, hasCharacter,usedCharacter);
            break;
        case 3:
            sorcererInfo(character, proceed, hasCharacter,usedCharacter);
            break;
        case 4:
            tankerInfo(character, proceed, hasCharacter,usedCharacter);
            break;
        case 5:
            wardenInfo(character, proceed, hasCharacter,usedCharacter);
            break;
        default:
            std::cout << "Please enter only 1-5!\n";
            break;
    }

    if (proceed == 'Y' || proceed == 'y') {
    std::cout << "You are now a " << character << '\n';
    }
    }while(hasCharacter == false);

}

void warriorInfo (std::string& character, char& proceed, bool& hasCharacter, std::string& usedCharacter) {
    std::cout << "The Warrior:\nA fierce mortal ready to hack and slash its way to glory.\n";
    std::cout << "Health: 110\n";
    std::cout << "Stamina: 50\n";
    std::cout << "Damage: 10\n";
    std::cout << "Range: 5\n";
    std::cout << "Do you want to proceed?\n";
    std::cin >> proceed;

    usedCharacter = "Warrior";

    checkCharacter(character, proceed, hasCharacter, usedCharacter);
}
void archerInfo (std::string& character, char& proceed, bool& hasCharacter, std::string& usedCharacter) {
    std::cout << "The Archer:\nA long range combatant able to penetrate even the thickest of defense.\n";
    std::cout << "Health: 80\n";
    std::cout << "Stamina: 70\n";
    std::cout << "Damage: 10\n";
    std::cout << "Range: 8\n";
    std::cout << "Do you want to proceed?\n";
    std::cin >> proceed;

    usedCharacter = "Archer";

    checkCharacter(character, proceed, hasCharacter, usedCharacter);
    
}
void sorcererInfo (std::string& character, char& proceed, bool& hasCharacter, std::string& usedCharacter) {
    std::cout << "The Sorcerer:\nA powerful magical being capable of controlling matter.\n";
    std::cout << "Health: 80\n";
    std::cout << "Stamina: 100\n";
    std::cout << "Damage: 6\n";
    std::cout << "Do you want to proceed?\n";
    std::cin >> proceed;

    usedCharacter = "Sorcerer";

    checkCharacter(character, proceed, hasCharacter, usedCharacter);
}
void tankerInfo (std::string& character, char& proceed, bool& hasCharacter, std::string& usedCharacter) {
    std::cout << "The Tanker:\nHeavy weight capable of absorbing any damage that comes in its way.\n";
    std::cout << "Health: 130\n";
    std::cout << "Stamina: 50\n";
    std::cout << "Damage: 15\n";
    std::cout << "Do you want to proceed?\n";
    std::cin >> proceed;

    usedCharacter = "Tanker";

    checkCharacter(character, proceed, hasCharacter, usedCharacter);
    
}
void wardenInfo (std::string& character, char& proceed, bool& hasCharacter, std::string& usedCharacter) {
    std::cout << "The Warden:\nAn ancient mystique capable of healing its allies and debuffing its enemies.\n";
    std::cout << "Health: 80\n";
    std::cout << "Stamina: 100\n";
    std::cout << "Damage: 8\n";
    std::cout << "Heal: 10\n";
    std::cout << "Do you want to proceed?\n";
    std::cin >> proceed;

    usedCharacter = "Warden";

    checkCharacter(character, proceed, hasCharacter, usedCharacter);
    
}

void checkCharacter (std::string& character, char& proceed, bool& hasCharacter, std::string& usedCharacter) {
    if (proceed == 'Y' || proceed == 'y') {
        character = usedCharacter;
        hasCharacter = true;
    } else if (proceed == 'N' || proceed == 'n') {
        // Do nothing
    } else {
        std::cout << "Please enter only Y/N\n";
    }
}