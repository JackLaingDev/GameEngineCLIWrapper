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

}
