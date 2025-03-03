#pragma once

#ifdef HG_PLANTFORM_WINDOWS
	#ifdef HG_BUILD_DLL
	#define HG_API __declspec(dllexport)
	#else
	#define HG_API __declspec(dllimport)
	#endif // HG_BUILD_DLL

#endif // HG_PLANTFORM_WINDOWS
