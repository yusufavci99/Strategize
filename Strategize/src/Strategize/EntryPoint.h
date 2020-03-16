#pragma once

#ifdef SZ_PLATFORM_WINDOWS

extern Strategize::Application* Strategize::CreateApplication();

int main(int argc, char** argv) {
	auto app = Strategize::CreateApplication();
	app->Run();
	delete app ;
}

#endif