cmake_minimum_required(VERSION 3.20)
project(textBasedRPG CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRE ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}")

add_executable(WhereRavensWeep main.cpp
        components/player/player.cpp
        components/player/player.h
        components/player/playerName/getPlayerName.cpp
        components/player/playerName/getPlayerName.h
        components/ui/clearScreen.cpp
        components/ui/clearScreen.h
        components/ui/display/titleScreen/titleScreen.cpp
        components/ui/display/titleScreen/titleScreen.h
        components/ui/display/classMenuScreen/classMenuScreen.cpp
        components/ui/display/classMenuScreen/classMenuScreen.h
        components/ui/display/loadingScreen/loadingScreen.cpp
        components/ui/display/loadingScreen/loadingScreen.h
        components/ui/display/displayClassScreen/displayClassScreen.cpp
        components/ui/display/displayClassScreen/displayClassScreen.h
        components/ui/interact/classSelect/classSelect.cpp
        components/ui/interact/classSelect/classSelect.h
        components/ui/display/errorScreens/errorScreens.cpp
        components/ui/display/errorScreens/errorScreens.h
        components/ui/interact/confirmation/confirmation.cpp
        components/ui/interact/confirmation/confirmation.h)