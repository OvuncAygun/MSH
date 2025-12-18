#include "MSH_M1.h"
#include "MSH_M2.h"
#include "MSH_M3.h"
#include "MSH_M4.h"
#include "MSH_M5.h"
#include "MSH_M6.h"
#include "MSH_M7.h"
#include "MSH_M8.h"

int main () {
    MSH_M1 mshM1;
    MSH_M2 mshM2;
    MSH_M3 mshM3;
    MSH_M4 mshM4;
    MSH_M5 mshM5;
    MSH_M6 mshM6;
    MSH_M7 mshM7;
    MSH_M8 mshM8;

    mshM5.initializeLoggerAndObserver();

    mshM1.setObserver(mshM5.getObserver());
    mshM1.createFactories();

    mshM2.setDeviceFactories(mshM1.getDeviceFactories());
    mshM2.setProductFamilyFactories(mshM1.getProductFamilyFactories());
    mshM2.initializeCreatorChain();
    mshM2.initializeDeviceManager();

    mshM3.setDeviceManager(mshM2.getDeviceManager());
    mshM3.initializeModeStrategies();
    mshM3.initializeModeManager();

    mshM4.initializeStates();
    mshM4.initializeStateManager();

    mshM6.setLogger(mshM5.getLogger());
    mshM6.initializeSecurityManager();

    mshM7.setDeviceManager(mshM2.getDeviceManager());
    mshM7.setModeManager(mshM3.getModeManager());
    mshM7.setStateManager(mshM4.getStateManager());
    mshM7.setLogger(mshM5.getLogger());
    mshM7.setSecurityManager(mshM6.getSecurityManager());
    mshM7.initializeCommands();

    mshM8.initializeMenuManager();
    mshM8.initializeCommands(mshM7.getCommands());
    mshM8.applyMSHMMenuManagerCommands();
    mshM8.initializeActions();
    mshM8.applyMSHMMenuManagerActions();
    mshM8.initializeModes(mshM3.getModeStrategies());
    mshM8.applyMSHMMenuManagerModes();
    mshM8.initializeStates(mshM4.getStates());
    mshM8.applyMSHMMenuManagerStates();

    IMSHMenuManager* menuManager = mshM8.getMenuManager();

    while (menuManager->getIsRunning()) {
        menuManager->displayMenu();
        menuManager->handleInput();
    }
}