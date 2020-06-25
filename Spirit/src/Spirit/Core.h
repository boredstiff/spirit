#pragma once

#ifdef SP_PLATFORM_WINDOWS
	#ifdef SP_BUILD_DLL
		#define SPIRIT_API __declspec(dllexport)
	#else
		#define SPIRIT_API __declspec(dllimport)
	#endif
#else
	#error Spirit only supports Windows for now
#endif