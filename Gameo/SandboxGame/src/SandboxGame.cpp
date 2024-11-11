#include <Gameo.h>

class SandboxGame : public Gameo::Application {
public:
	SandboxGame() {
		//ctor
	}

	~SandboxGame() {
		//dtor
	}
};

Gameo::Application* Gameo::CreateApplication() {
	return new SandboxGame();
}
