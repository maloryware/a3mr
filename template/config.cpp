#include "define.hpp"

class CfgPatches {
    class ADDON {
        name = QPRETTY;
        author = "maloryware";
        requiredVersion = 2.18;
        requiredAddons[] = {"ace_common"};
        units[] = {};
        weapons[] = {};
    };
};

class Extended_PreInit_EventHandlers { XEH(preInit); };
class Extended_PostInit_EventHandlers { XEH(postInit); };
