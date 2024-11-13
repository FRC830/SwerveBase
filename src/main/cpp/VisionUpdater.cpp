#include "ratpack/VisionUpdater.h"

VisionUpdater::VisionUpdater() {
    //put default refresh rate later
    timer.Start();
}

VisionUpdater::VisionUpdater(double refreshRate) {
    this->refreshRate = refreshRate;
    timer.Start();
}

bool VisionUpdater::UpdatePassed() {
    if(timer.Get() > this->refreshRate) {
        return true;
    }
    return false;
}