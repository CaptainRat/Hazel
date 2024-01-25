#include "Hazel.h"


class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}


};

Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();		//前端应用程序
}


