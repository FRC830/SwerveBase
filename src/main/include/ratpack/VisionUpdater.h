#pragma once

#include <frc/Timer.h>

class VisionUpdater {
    public:
        VisionUpdater() = default;
        VisionUpdater(double refreshRate);

    private:


        bool UpdatePassed();

        double refreshRate;
        frc::Timer timer = frc::Timer();
}
