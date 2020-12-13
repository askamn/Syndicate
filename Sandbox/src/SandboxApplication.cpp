#include <Syndicate.h>

class Sandbox : public Syndicate::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Syndicate::Application* Syndicate::CreateApplication()
{
	return new Sandbox();
}