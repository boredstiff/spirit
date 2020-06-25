#pragma once

#ifdef SP_PLATFORM_WINDOWS

extern Spirit::Application* Spirit::CreateApplication();

int main(int argc, char** argv) {
	auto app = Spirit::CreateApplication();
	app->Run();
	delete app;
}

#endif