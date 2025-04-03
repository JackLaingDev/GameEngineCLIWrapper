#include "EngineWrapper.h"

using namespace GameEngineCLIWrapper;

EngineWrapper::EngineWrapper() {
    engine = new GameEngine();
}

EngineWrapper::~EngineWrapper() {
    delete engine;
}

void EngineWrapper::Run(IntPtr hwnd) {
    // Pass the HWND to your SFML window creation
    HWND nativeHandle = static_cast<HWND>(hwnd.ToPointer());
    std::unique_ptr<sf::RenderWindow> win = std::make_unique<sf::RenderWindow>(nativeHandle);

    engine->initialise();
    engine->run();
}
