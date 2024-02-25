#pragma once

#ifdef MX_PLATFORM_WINDOWS

extern MaxEngine::Application* MaxEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = MaxEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif