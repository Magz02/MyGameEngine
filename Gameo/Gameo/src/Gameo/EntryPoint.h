#pragma once

#ifdef GM_PLATFORM_WINDOWS

extern Gameo::Application* Gameo::CreateApplication();

int main(int argc, char** argv) {
	Gameo::Log::Init();
	GM_CORE_WARN("Initialized log!");
	int a = 5;
	GM_INFO("Hello! Var={0}", a);

	auto game = Gameo::CreateApplication();
	game->Run();
	delete game;

	return 0;
}

#endif