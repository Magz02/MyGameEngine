#include "gmpch.h"
#include "Application.h"

#include "Events/ApplicationEvent.h"

namespace Gameo {

	Application::Application() {
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application() {
		//dtor
	}
	
	void Application::Run() {
		while (m_Running) {
			m_Window->OnUpdate();
		}
	}
}
