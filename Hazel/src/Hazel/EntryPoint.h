#pragma once


#ifdef HZ_PLATFORM_WINDOWS

//CreateApplication()在客户端sandbox中定义，用于在本文件内返回Application类指针
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	printf("Hazel Engine startup!\n");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif
