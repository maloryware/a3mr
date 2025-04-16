#include "define.hpp"
#include "data/config/CfgUnitInsignia_EP6.hpp"

/*
 * to implement:
 * - torture/interrogation
 * - custom backpack
 * - fireproof equipment
 * - add LR radio compat to other backpacks
 * - injectable RFID tracker
 */  

class CfgPatches {
    
	class A3_EpsilonSix {
        name = QPRETTY;
        author[] = {"maloryware"};
		authorUrl = "https://github.com/maloryware";
		version = "1.0.0";
        requiredVersion = 2.18;
        requiredAddons[] = {"ace_common"};
        units[] = {};
        weapons[] = {};
    };
};

class CfgUnitInsignia {
	#include "data/config/CfgUnitInsignia_EP6.hpp"
};

class CfgAmmo {
	#include "data/config/CfgAmmo_NonLethal.hpp"
}

class Extended_PreInit_EventHandlers { XEH(functions\base\preInit); };
class Extended_PostInit_EventHandlers { XEH(functions\base\postInit); };
