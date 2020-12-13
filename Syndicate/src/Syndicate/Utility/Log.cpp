#include "Log.h"

namespace Syndicate::Utility
{
	std::shared_ptr<spdlog::logger> Log::m_EngineLogger;
	std::shared_ptr<spdlog::logger> Log::m_ApplicationLogger;

	void Log::Init()
	{
		// Set the logging pattern
		// ColorBegin[TIMESTAMP] LOGGER_NAME: "Actual log text"ColorEnd
		spdlog::set_pattern("%^[%T] %n: %v%$");

		m_EngineLogger = spdlog::stdout_color_mt("SYN");
		m_EngineLogger->set_level(spdlog::level::trace);

		m_ApplicationLogger = spdlog::stdout_color_mt("APP");
		m_ApplicationLogger->set_level(spdlog::level::trace);
	}
}