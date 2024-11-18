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

#define BIT(x) (1 << x)