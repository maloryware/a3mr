class woundHandlers {
    ace_medical_damage = "ace_medical_damage_fnc_woundsHandlerBase";
};

class EP6_Tranq_DamageType {

	noBlood = 1;
	selectionSpecific = 1;

	thresholds[] =  {
		 {1, 1}, {0,1} // should be consistent on-hit
	};
	
	class woundHandlers: woundHandlers {
		EP6_damageHandler = "ep6_fnc_tranqDamageHandler";
	};

	class EP6_Tranq_WoundType {
		weighting[] = {{1, 1}, {0, 1}}; // ditto thresholds
		
		// boilerplate
		damageMultiplier = 1;
		sizeMultiplier = 1;
		bleedingMultiplier = 1;
		painMultiplier = 1;
		fractureMultiplier = 1;
	}

}