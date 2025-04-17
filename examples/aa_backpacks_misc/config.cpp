#include "define.hpp"

class CfgPatches {
    class ADDON {
        name = QPRETTY;
        author = "Puotek";
        version = "13.01.2025";
        requiredVersion = 2.18;
        requiredAddons[] = {"ace_common"};
        units[] = {};
        weapons[] = {};
    };
};

class CfgVehicles {
    #include "includes\CfgVehicles_Normal.hpp"
}
