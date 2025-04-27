// 16Rnd_9x21_Mag					----- 9 mm 17Rnd Mag
// ACE_16Rnd_9x19_mag				----- 9x19 mm 16Rnd Mag
// CUP_10Rnd_9x19_Compact			----- 9mm 10Rnd Compact Mag
// CUP_15Rnd_9x19_M9				----- 9mm 15Rnd M9 Mag
// CUP_16Rnd_9x19_cz75				----- 9mm 16Rnd CZ 75 Mag
// CUP_17Rnd_9x19_glock17			----- 9mm 17Rnd G17 Mag
// CUP_17Rnd_9x19_M17_Black			----- 9mm 17Rnd M17 Mag
// CUP_18Rnd_9x19_Phantom			----- 9mm 18Rnd Phantom Mag
// 
// 9Rnd_45ACP_Mag					----- .45 ACP 8Rnd Mag
// 11Rnd_45ACP_Mag					----- .45 ACP 15Rnd Mag 		## good shit bohemia
// CUP_7Rnd_45ACP_1911				----- .45 ACP 7Rnd M1911 Mag
// CUP_12Rnd_45ACP_mk23				----- .45 ACP 12Rnd Mk23 SOCOM Mag 

// ACE_9x19_Ball 	-----> 9x19 mm 16Rnd Mag; 
// B_9x21_Ball		-----> 9 mm 17Rnd Mag; 
// CUP_B_9x19_Ball	-----> 9mm 10Rnd Compact Mag; 9mm 15Rnd M9 Mag; 9mm 16Rnd CZ 75 Mag; 9mm 17Rnd G17 Mag; 9mm 18Rnd Phantom Mag;
//
// B_45ACP_Ball			-----> .45 ACP 15Rnd Mag; .45 ACP 7Rnd M1911 Mag; .45 ACP 12Rnd Mk23 SOCOM Mag 
// B_45ACP_Ball_Green	-----> .45 ACP 8Rnd Mag;

// redefinitions 

#include "data/config/ammo/CfgAmmo_NonLethal.hpp"

class 16Rnd_9x21_Mag;
class ACE_16Rnd_9x19_mag;
class CUP_10Rnd_9x19_Compact;
class CUP_15Rnd_9x19_M9;
class CUP_16Rnd_9x19_cz75;
class CUP_17Rnd_9x19_glock17;
class CUP_17Rnd_9x19_M17_Black;
class CUP_18Rnd_9x19_Phantom;

class 9Rnd_45ACP_Mag;
class 11Rnd_45ACP_Mag;
class CUP_7Rnd_45ACP_1911;
class CUP_12Rnd_45ACP_mk23;

// --------------

class EP6_16Rnd_9x21_NL_Mag : 16Rnd_9x21_Mag {
	ammo = EP6_9x21_Tranq;
}

class EP6_ACE_16Rnd_9x19_NL_mag : ACE_16Rnd_9x19_mag {
	ammo = EP6_9x19_Tranq;
}

class EP6_CUP_10Rnd_9x19_NL_Compact : CUP_10Rnd_9x19_Compact {
	ammo = EP6_9x19_Tranq;
}

class EP6_CUP_15Rnd_9x19_NL_M9 : CUP_15Rnd_9x19_M9 {
	ammo = EP6_9x19_Tranq;
}

class EP6_CUP_16Rnd_9x19_NL_cz75 : CUP_16Rnd_9x19_cz75 {
	ammo = EP6_9x19_Tranq;
}

class EP6_CUP_17Rnd_9x19_NL_glock17 : CUP_17Rnd_9x19_glock17 {
	ammo = EP6_9x19_Tranq;
}

class EP6_CUP_17Rnd_9x19_NL_M17 : CUP_17Rnd_9x19_M17_Black {
	ammo = EP6_9x19_Tranq;
}

class EP6_CUP_18Rnd_9x19_NL_Phantom : CUP_18Rnd_9x19_Phantom {
	ammo = EP6_9x19_Tranq;
}

class EP6_9Rnd_45ACP_NL_Mag : 9Rnd_45ACP_Mag {
	ammo = EP6_45ACP_Tranq;
}

class EP6_11Rnd_45ACP_NL_Mag : 11Rnd_45ACP_Mag {
	ammo = EP6_45ACP_Tranq;
}

class EP6_CUP_7Rnd_45ACP_NL_1911 : CUP_7Rnd_45ACP_1911 {
	ammo = EP6_45ACP_Tranq;
}

class EP6_CUP_12Rnd_45ACP_NL_mk23 : CUP_12Rnd_45ACP_mk23 {
	ammo = EP6_45ACP_Tranq;
}