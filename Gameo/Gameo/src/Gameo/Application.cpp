#include "gmpch.h"
#include "Application.h"

#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace Gameo {

	Application::Application() {
		//ctor
	}

	Application::~Application() {
		//dtor
	}
	
	void Application::Run() {
		WindowResizeEvent e(1200, 720);
		if (e.IsInCategory(EventCategoryApplication)) {
			GM_TRACE(e);
		}

		if (e.IsInCategory(EventCategoryInput)) {
			GM_TRACE(e);
		}
		
		while (true);
	}
}
