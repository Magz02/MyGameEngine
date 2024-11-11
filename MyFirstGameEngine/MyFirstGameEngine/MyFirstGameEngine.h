#pragma once

#ifdef MYENGINE_EXPORTS
    #define MYENGINE_API __declspec(dllexport)
#else
    #define MYENGINE_API __declspec(dllimport)
#endif

namespace MyFirstGameEngine {
    MYENGINE_API void Initialize();
    MYENGINE_API void Shutdown();
}
