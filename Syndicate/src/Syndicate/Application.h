#pragma once

#include "Core.h"

namespace Syndicate
{
	class SYN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}