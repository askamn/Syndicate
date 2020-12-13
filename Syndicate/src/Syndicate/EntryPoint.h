#pragma once

#include "Application.h"

namespace Syndicate
{
	extern Application* CreateApplication();
}

#ifdef SYN_PLATFORM_WINDOWS

int main(int argc, char** argv)
{
	auto application = Syndicate::CreateApplication();
	application->Run();
	delete application;
}

#endif