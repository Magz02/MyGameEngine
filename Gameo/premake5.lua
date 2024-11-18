workspace "Gameo"
	architecture "x64"

	configurations {
		"Debug",
		"Release",
		"Dist"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Gameo"
	location "Gameo"
	kind "SharedLib"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-inter/" .. outputdir .. "/%{prj.name}")

	files {
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs {
		"%{prj.name}/src",
		"%{prj.name}/vendor/spdlog/include"
	}

	filter "system:windows"
		cppdialect "C++23"
		staticruntime "On"
		systemversion "latest"
		
		defines {
			"GM_PLATFORM_WINDOWS",
			"GM_BUILD_DLL"
		}

		postbuildcommands {
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/SandboxGame")
		}

	filter "configurations:Debug"
		defines "GM_DEBUG"
		symbols "On"
		
	filter "configurations:Release"
		defines "GM_RELEASE"
		optimize "On"
			
	filter "configurations:Dist"
		defines "GM_DIST"
		optimize "On"
		
	filter { "system:windows", "configurations:Release" }
		buildoptions "/utf-8"

	filter { "system:windows", "configurations:Debug" }
		buildoptions "/utf-8"

project "SandboxGame"
	location "SandboxGame"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-inter/" .. outputdir .. "/%{prj.name}")

	files {
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs {
		"Gameo/vendor/spdlog/include",
		"Gameo/src"
	}

	links {
		"Gameo"
	}

	filter "system:windows"
		cppdialect "C++23"
		staticruntime "On"
		systemversion "latest"
		
		defines {
			"GM_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "GM_DEBUG"
		symbols "On"
		
	filter "configurations:Release"
		defines "GM_RELEASE"
		optimize "On"
			
	filter "configurations:Dist"
		defines "GM_DIST"
		optimize "On"
		
	filter { "system:windows", "configurations:Release" }
		buildoptions "/utf-8"

	filter { "system:windows", "configurations:Debug" }
		buildoptions "/utf-8"