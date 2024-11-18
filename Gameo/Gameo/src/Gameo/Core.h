#pragma once

#include "../gmpch.h"

#ifdef GM_PLATFORM_WINDOWS
	#ifdef GM_BUILD_DLL
		#define GAMEO_API __declspec(dllexport)
	#else
		#define GAMEO_API __declspec(dllimport)
	#endif
#else
	#error Gameo only supports Windows!
#endif

#ifdef GM_ENABLE_ASSERTS
	#define GM_ASSERT(x, ...) { if(!(x)) { GM_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define GM_CORE_ASSERT(x, ...) { if(!(x)) { GM_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define GM_ASSERT(x, ...)
	#define GM_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)