#include"HGame.h"

class SandBox : public HGame::Application 
{
public:
	SandBox()
	{

	}
	~SandBox()
	{

	}
};

HGame::Application* HGame::CreateApplication()
{
	return new SandBox();
}