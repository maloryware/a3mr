#include "define.hpp"
#include "data/config/CfgUnitInsignia_EP6.hpp"

/*
 * to implement:
 * - torture/interrogation
 * - custom backpack
 * - fireproof equipment
 * - add LR radio compat to other backpacks
 * - blood samples/empty syringe
 * - non-lethal tranq rounds
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
	#include "data/config/misc/CfgUnitInsignia_EP6.hpp"
};

class CfgAmmo {
	#include "data/config/ammo/CfgAmmo_NonLethal.hpp"
}

class CfgMagazines {
	#include "data/config/magazines/CfgMagazines_NonLethal.hpp"
}

class ACE_Medical_Injuries {
	
	class wounds {
		#include "data/config/medical/WoundType_NonLethal.hpp"
	}
	
	class damageTypes {
		#include "data/config/medical/DamageType_NonLethal.hpp"
	}
}

class Extended_PreInit_EventHandlers { XEH(functions\base\preInit); };
class Extended_PostInit_EventHandlers { XEH(functions\base\postInit); };
