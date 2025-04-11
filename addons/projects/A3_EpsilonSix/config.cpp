#include "define.hpp"
#include "insignias.hpp"

/*
 * to implement:
 * - torture/interrogation
 * - custom backpack
 * - fireproof equipment
 * - add LR radio compat to other backpacks
 * - blood samples/empty syringe
 * - non-lethal tranq rounds
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

class Extended_PreInit_EventHandlers { XEH(functions\base\preInit); };
class Extended_PostInit_EventHandlers { XEH(functions\base\postInit); };
