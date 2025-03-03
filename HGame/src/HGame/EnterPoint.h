#pragma once

#ifdef HG_PLANTFORM_WINDOWS
extern HGame::Application* HGame::CreateApplication();

int main()
{
	
	auto app = HGame::CreateApplication();
	app->Run();
	delete app;
}
#endif // HG_PLANTFORM_WINDOWS
