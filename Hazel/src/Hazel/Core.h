#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL			//Hazel定义此宏，导出dll。Sandbox没定义，导入dll
		#define HAZEL_API		__declspec(dllexport)
	#else
		#define HAZEL_API		__declspec(dllimport)
	#endif
#else
	#error Hazel only support windows!
#endif




