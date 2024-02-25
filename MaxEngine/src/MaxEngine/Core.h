#pragma once

#ifdef MX_PLATFORM_WINDOWS
	#ifdef MX_BUILD_DLL
		#define MAX_ENGINE_API _declspec(dllexport)
	#else
		#define MAX_ENGINE_API _declspec(dllimport)
	#endif //MX_BUILD_DLL
#else
	#error Max Engine only supports Windows!
#endif //MX_PLATFORM_WINDOWS
