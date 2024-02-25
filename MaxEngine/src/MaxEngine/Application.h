#pragma once

#include "Core.h"

namespace MaxEngine
{
	class MAX_ENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in client
	Application* CreateApplication();
}
