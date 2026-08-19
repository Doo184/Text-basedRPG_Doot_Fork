#ifndef TEXTBASEDRPG_PLAYER_H
#define TEXTBASEDRPG_PLAYER_H

#include <string>

struct PlayerInfo {
    std::string playerName = "Player";
    std::string playerClass{};
    std::string classDesc{};
    double health{};
    double stamina{};
    double damage{};
    double critRate{};
    double critDmg{};
};

extern const PlayerInfo classes[];

#endif
