#pragma once

#include "Core.h"
#include "Events/Event.h"
#include "Window.h"

namespace Gameo {

	class GAMEO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	private:
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		Window window = new Window();
	};
	
	// To be defined in CLIENT
	Application* CreateApplication();
}
