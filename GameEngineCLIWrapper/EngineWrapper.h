#pragma once

// Include your C++ engine headers
#include "../external/gameEngine/gameEngine/GameEngine.h"

using namespace System;

namespace GameEngineCLIWrapper {

    public ref class EngineWrapper {
    private:
        GameEngine* engine; // native pointer to your engine
    public:
        EngineWrapper();
        ~EngineWrapper();

        void Run(IntPtr hwnd); // Accept a window handle to render into
    };
}
