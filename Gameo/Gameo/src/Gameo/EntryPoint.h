#pragma once

#ifdef GM_PLATFORM_WINDOWS

extern Gameo::Application* Gameo::CreateApplication();

int main(int argc, char** argv) {
	
	auto game = Gameo::CreateApplication();
	game->Run();
	delete game;

	return 0;
}

#endif