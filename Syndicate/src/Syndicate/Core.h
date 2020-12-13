#pragma once

#ifdef SYN_PLATFORM_WINDOWS
	#ifdef SYN_BUILD_DLL
		#define SYN_API __declspec(dllexport)
	#else
		#define SYN_API __declspec(dllimport)
	#endif
#endif