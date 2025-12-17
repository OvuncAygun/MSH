#pragma once

#include "IObserver.h"
#include "IDevice.h"

#include <string>
#include <vector>

class IProductFamilyFactory {
public:
    virtual ~IProductFamilyFactory() = default;

    virtual IObserver* getObserver() = 0;
    virtual void setObserver(IObserver* observer) = 0;

    virtual std::vector<IDevice*> createDevices(std::vector<std::string> name,
        std::vector<std::vector<std::string>> config) = 0;
    virtual std::vector<IDevice*> cloneDevice(std::vector<IDevice*> sources) = 0;

};