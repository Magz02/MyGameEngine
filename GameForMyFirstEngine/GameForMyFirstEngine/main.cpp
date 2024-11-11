#include <iostream>
#include "MyFirstGameEngine.h"
#include "GameForMyFirstEngine.h"

void RunGame() {
    std::cout << "Game Running!" << std::endl;
    MyEngine::Initialize();
    // Game logic goes here
    MyEngine::Shutdown();
}

int main() {
    RunGame();
    return 0;
}
