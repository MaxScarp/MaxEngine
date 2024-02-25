#pragma once

#ifdef MX_PLATFORM_WINDOWS

extern MaxEngine::Application* MaxEngine::CreateApplication();

int main(int argc, char** argv)
{
	MaxEngine::Log::Init();
	MAX_ENGINE_CORE_WARN("Initialized Log!");
	int a = 5;
	MAX_ENGINE_INFO("Hello! Var={0}", a);

	auto app = MaxEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif