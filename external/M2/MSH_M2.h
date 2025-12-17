#pragma once

#include "IDeviceManager.h"

class MSH_M2 {
public:
    MSH_M2();
    ~MSH_M2();

    void setDeviceFactories(std::vector<IDeviceFactory*> factories);
    void setProductFamilyFactories(std::vector<IProductFamilyFactory*> factories);
    void initializeDeviceManager();

    IDeviceManager* getDeviceManager();

private:
    IDeviceManager* deviceManager;
};