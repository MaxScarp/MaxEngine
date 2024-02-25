#include <MaxEngine.h>

class Sandbox : public MaxEngine::Application
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{
	}
};

MaxEngine::Application* MaxEngine::CreateApplication()
{
	return new Sandbox();
}