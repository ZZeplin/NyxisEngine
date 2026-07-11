// NyxisEngine.cpp : Defines the entry point for the application.
//

#include "NyxisEngine.h"
#include "Window.h"

int main()
{

	WindowConfig engineWindow{};

	WindowSystem::Initialize(engineWindow);

	if (!engineWindow.handle) {

		return -1;

	}

	while (!engineWindow.shouldClose) {

		WindowSystem::Update(engineWindow);

	}

	WindowSystem::Shutdown(engineWindow);

	return 0;

}
