#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Gameo {

	class GAMEO_API Log
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

// Core log macros
#define GM_CORE_TRACE(...)	::Gameo::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define GM_CORE_INFO(...)	::Gameo::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GM_CORE_WARN(...)	::Gameo::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GM_CORE_ERROR(...)	::Gameo::Log::GetCoreLogger()->error(__VA_ARGS__)
#define GM_CORE_FATAL(...)	::Gameo::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define GM_TRACE(...)		::Gameo::Log::GetClientLogger()->trace(__VA_ARGS__)
#define GM_INFO(...)		::Gameo::Log::GetClientLogger()->info(__VA_ARGS__)
#define GM_WARN(...)		::Gameo::Log::GetClientLogger()->warn(__VA_ARGS__)
#define GM_ERROR(...)		::Gameo::Log::GetClientLogger()->error(__VA_ARGS__)
#define GM_FATAL(...)		::Gameo::Log::GetClientLogger()->critical(__VA_ARGS__)