#pragma once

#include "IObserver.h"
#include "IDevice.h"

#include <string>
#include <vector>

class IDeviceFactory {
public:
    virtual ~IDeviceFactory() = default;

    virtual IObserver* getObserver() = 0;
    virtual void setObserver(IObserver* observer) = 0;

    virtual IDevice* createDevice(std::string name, std::vector<std::string> config) = 0;
    virtual IDevice* cloneDevice(IDevice* source) = 0;

};