#include "gmpch.h"
#include "Application.h"

#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace Gameo {

#define BIND_EVENT_FN(x) std::bind(&Application::x, this, std::placeholders::_1)

	Application::Application() {
		m_Window = std::unique_ptr<Window>(Window::Create());
		m_Window->SetEventCallback(BIND_EVENT_FN(OnEvent));
	}

	Application::~Application() {
		//dtor
	}

	void Application::OnEvent(Event& e) {
		GM_CORE_INFO("{0}", e);
	}
	
	void Application::Run() {
		while (m_Running) {
			m_Window->OnUpdate();
		}
	}
}
