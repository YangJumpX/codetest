#pragma once
#include"Core.h"

namespace HGame {

	class HG_API Application
	{
	public:
		Application();
		virtual ~ Application();

		void Run();
		
	};

	Application* CreateApplication();
}

