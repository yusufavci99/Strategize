#pragma once

#include "Core.h"

namespace Strategize {
	
	class STRATEGIZE_API Application
	{

	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be definde in CLIENT
	Application* CreateApplication();

}