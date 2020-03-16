#pragma once

#ifdef SZ_PLATFORM_WINDOWS
	#ifdef SZ_BUILD_DLL  
		#define STRATEGIZE_API __declspec(dllexport)
	#else
		#define STRATEGIZE_API __declspec(dllimport)
	#endif
#else
	 #error Strategize only supports Windows!
#endif