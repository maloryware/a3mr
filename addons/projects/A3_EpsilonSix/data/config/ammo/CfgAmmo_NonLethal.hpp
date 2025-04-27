#include "define.hpp"

class BulletBase;
class B_9x21_Ball;
class B_45ACP_Ball;
// can rely on "SetUnconscious module"
// see https://ace3.acemod.org/wiki/functions/medical#ace_medical_fnc_setunconscious

// ACE_9x19_Ball 	-----> 9x19 mm 16Rnd Mag; 
// B_9x21_Ball		-----> 9 mm 17Rnd Mag; 
// CUP_B_9x19_Ball	-----> 9mm 10Rnd Compact Mag; 9mm 15Rnd M9 Mag; 9mm 16Rnd CZ 75 Mag; 9mm 17Rnd G17 Mag; 9mm 18Rnd Phantom Mag;
//
// B_45ACP_Ball			-----> .45 ACP 15Rnd Mag; .45 ACP 7Rnd M1911 Mag; .45 ACP 12Rnd Mk23 SOCOM Mag 
// B_45ACP_Ball_Green	-----> .45 ACP 8Rnd Mag;

class EP6_9x19_Tranq : ACE_9x19_Ball {
	ACE_damageType = "tranq";	
	hit = 0.0000001;
}

class EP6_9x21_Tranq : B_9x21_Ball {
	ACE_damageType = "tranq";
	hit = 0.0000001;	
}

class EP6_45ACP_Tranq : B_45ACP_Ball {
	ACE_damageType = "tranq";	
	hit = 0.0000001;
}