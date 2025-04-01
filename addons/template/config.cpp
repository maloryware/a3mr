#include "define.hpp"

class CfgPatches {
    
	class A3_TemplateMod {
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

class Extended_PreInit_EventHandlers { XEH(preInit); };
class Extended_PostInit_EventHandlers { XEH(postInit); };
