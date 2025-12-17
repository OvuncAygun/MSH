#pragma once

#include "IDeviceManager.h"
#include "IModeStrategy.h"

#include <vector>

class MSH_M3 {
public:
    MSH_M3();
    ~MSH_M3();

    void setDeviceManager(IDeviceManager* dm);
    void initializeModeManager();

    std::vector<IModeStrategy*> getModeStrategies();
    IModeManager* getModeManager();
};