#pragma once

#include <memory>

#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/spdlog.h>

#include "../Core.h"

#define SYN_CORE_TRACE(...)	::Syndicate::Utility::Log::GetEngineLogger()->trace(__VA_ARGS__);
#define SYN_CORE_DEBUG(...)	::Syndicate::Utility::Log::GetEngineLogger()->debug(__VA_ARGS__);
#define SYN_CORE_INFO(...)	::Syndicate::Utility::Log::GetEngineLogger()->info(__VA_ARGS__);
#define SYN_CORE_WARN(...)	::Syndicate::Utility::Log::GetEngineLogger()->warn(__VA_ARGS__);
#define SYN_CORE_ERROR(...)	::Syndicate::Utility::Log::GetEngineLogger()->error(__VA_ARGS__);
#define SYN_CORE_FATAL(...)	::Syndicate::Utility::Log::GetEngineLogger()->critical(__VA_ARGS__);

#define SYN_TRACE(...)	::Syndicate::Utility::Log::GetCoreLogger()->trace(__VA_ARGS__);
#define SYN_DEBUG(...)	::Syndicate::Utility::Log::GetCoreLogger()->debug(__VA_ARGS__);
#define SYN_INFO(...)	::Syndicate::Utility::Log::GetCoreLogger()->info(__VA_ARGS__);
#define SYN_WARN(...)	::Syndicate::Utility::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define SYN_ERROR(...)	::Syndicate::Utility::Log::GetCoreLogger()->error(__VA_ARGS__);
#define SYN_FATAL(...)	::Syndicate::Utility::Log::GetCoreLogger()->critical(__VA_ARGS__);

namespace Syndicate::Utility
{
	using Logger = spdlog::logger;
	using LoggerPtr = std::shared_ptr<Logger>;

	class SYN_API Log
	{
	public:
		static void Init();

		inline static LoggerPtr GetEngineLogger() { return m_EngineLogger; }
		inline static LoggerPtr GetApplicationLogger() { return m_ApplicationLogger; }

	private:
		static LoggerPtr m_EngineLogger;
		static LoggerPtr m_ApplicationLogger;
	};
}

