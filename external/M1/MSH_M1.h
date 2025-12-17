#pragma once

#include "IDeviceFactory.h"
#include "IProductFamilyFactory.h"

#include <vector>

class MSH_M1 {
public:
    MSH_M1();
    ~MSH_M1();

    void setObserver(IObserver* observer);
    void createFactories();

    std::vector<IDeviceFactory*> getDeviceFactories();
    std::vector<IProductFamilyFactory*> getProductFamilyFactories();

};