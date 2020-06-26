#pragma once

#include <memory>

#include "spdlog/spdlog.h"
#include "Core.h"

namespace Spirit {
	class SPIRIT_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#define SP_CORE_FATAL(...)   ::Spirit::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define SP_CORE_ERROR(...)   ::Spirit::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SP_CORE_WARN(...)    ::Spirit::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SP_CORE_INFO(...)    ::Spirit::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SP_CORE_TRACE(...)   ::Spirit::Log::GetCoreLogger()->trace(__VA_ARGS__)

#define SP_FATAL(...) ::Spirit::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define SP_ERROR(...) ::Spirit::Log::GetClientLogger()->error(__VA_ARGS__)
#define SP_WARN(...)  ::Spirit::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SP_INFO(...)  ::Spirit::Log::GetClientLogger()->info(__VA_ARGS__)
#define SP_TRACE(...) ::Spirit::Log::GetClientLogger()->trace(__VA_ARGS__)

