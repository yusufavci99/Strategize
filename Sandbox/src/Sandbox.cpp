#include <Strategize.h> 

class Sandbox : public Strategize::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Strategize::Application* Strategize::CreateApplication() {
	return new Sandbox();
}