#pragma once
#include <iostream>
#include "pch.h"
#include "MyFirstGameEngine.h"

class Game {
public:
	Game();
	~Game();
    void RunGame() {
        std::cout << "Game Running!" << std::endl;
        MyFirstGameEngine::Initialize();
        // game logic
        MyFirstGameEngine::Shutdown();
    }
};