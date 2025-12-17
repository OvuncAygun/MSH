#pragma once

#include "IStateManager.h"

class MSH_M4 {
public:
    MSH_M4();
    ~MSH_M4();

    void initializeStateManager();

    std::vector<IState*> getStates();
    IStateManager* getStateManager();
};