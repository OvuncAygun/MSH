#pragma once

#include <string>
#include "IDeviceManager.h"
class IModeStrategy {
public:
    virtual ~IModeStrategy() {}

    virtual void configureDevices(IDeviceManager* dm) = 0;

    virtual std::string getModeName() const = 0;
};