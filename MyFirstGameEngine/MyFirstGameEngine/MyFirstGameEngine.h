#pragma once

#ifdef MYENGINE_EXPORTS
    #define MYFIRSTGAMEENGINE_API __declspec(dllexport)
#else
    #define MYFIRSTGAMEENGINE_API __declspec(dllimport)
#endif

namespace MyFirstGameEngine {
    MYFIRSTGAMEENGINE_API void Initialize();
    MYFIRSTGAMEENGINE_API void Shutdown();
}
