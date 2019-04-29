class gmre_nor_crew_mp2a1_80_oli : gmre_nor_crew_base
	{
		_generalMacro 		= "gmre_nor_crew_mp2a1_80_oli";
		scope 			= 2;
		displayName 		= "Crew"; // In-game name of unit
		icon 			= "iconMan";
		weapons[] 		= {"gm_mp2a1_blk","gm_ferod16_oli"}; // Weapons added to the unit.
		respawnweapons[] 	= {"gm_mp2a1_blk","gm_ferod16_oli"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] 		= {mag_6(gm_32rnd_9x19mm_b_dm51_mp2_blk),mag_2(gm_handgrenade_frag_dm51)}; //I'm going with 6 standard mags, 3 tracer magazines, and 2 frag grenades.
		Respawnmagazines[] 	= {mag_6(gm_32rnd_9x19mm_b_dm51_mp2_blk),mag_2(gm_handgrenade_frag_dm51)}; //Should be identical to respawnmagazines[]
	};