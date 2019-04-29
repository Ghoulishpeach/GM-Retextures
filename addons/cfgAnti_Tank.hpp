/*class gmre_nor_antitank_g3a3_milan_80_oli : gmre_nor_oli_base
	{

	};
class gmre_nor_antitank_g3a3_milan_80_ols : gmre_nor_ols_base
	{

	};
class gmre_nor_antitank_g3a3_milan_parka_80_oli : gmre_nor_parka_oli_base
	{

	};
class gmre_nor_antitank_g3a3_milan_parka_80_ols : gmre_nor_parka_ols_base
	{

	};
class gmre_nor_antitank_g3a3_milan_parka_80_win : gmre_nor_parka_win_base
	{

	};
class gmre_nor_antitank_g3a3_milan_80_m75 : gmre_nor_m75_base
	{

	};*/
class gmre_nor_antitank_g3a3_pz44_80_oli : gmre_nor_oli_base
	{
		_generalMacro 		= "gmre_nor_m75_rifleman";
		scope 			= 2;
		displayName 		= "Anti-Tank"; // In-game name of unit
		icon 			= "iconManAT";
		weapons[] 		= {"gm_g3a3_oli","gm_pzf44_2_oli"}; // Weapons added to the unit.
		respawnweapons[] 	= {"gm_g3a3_oli","gm_pzf44_2_oli"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] 		= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_5(gm_1Rnd_44x537mm_heat_dm32_pzf44_2),mag_2(gm_handgrenade_frag_dm51)}; //I'm going with 6 standard mags, 3 tracer magazines, and 2 frag grenades.
		Respawnmagazines[] 	= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_5(gm_1Rnd_44x537mm_heat_dm32_pzf44_2),mag_2(gm_handgrenade_frag_dm51)}; //Should be identical to magazines[]
		linkedItems[]        	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // "vest","headgear","map","compass","watch","radio"
		respawnLinkedItems[] 	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
	};
class gmre_nor_antitank_g3a3_pz44_80_ols : gmre_nor_ols_base
	{
		_generalMacro 		= "gmre_nor_m75_rifleman";
		scope 			= 2;
		displayName 		= "Anti-Tank"; // In-game name of unit
		icon 			= "iconManAT";
		weapons[] 		= {"gm_g3a3_oli","gm_pzf44_2_oli"}; // Weapons added to the unit.
		respawnweapons[] 	= {"gm_g3a3_oli","gm_pzf44_2_oli"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] 		= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_5(gm_1Rnd_44x537mm_heat_dm32_pzf44_2),mag_2(gm_handgrenade_frag_dm51)}; //I'm going with 6 standard mags, 3 tracer magazines, and 2 frag grenades.
		Respawnmagazines[] 	= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_5(gm_1Rnd_44x537mm_heat_dm32_pzf44_2),mag_2(gm_handgrenade_frag_dm51)}; //Should be identical to magazines[]
		linkedItems[]        	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // "vest","headgear","map","compass","watch","radio"
		respawnLinkedItems[] 	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
	};
class gmre_nor_antitank_g3a3_pz44_parka_80_oli : gmre_nor_parka_oli_base
	{
		_generalMacro 		= "gmre_nor_m75_rifleman";
		scope 			= 2;
		displayName 		= "Anti-Tank"; // In-game name of unit
		icon 			= "iconManAT";
		weapons[] 		= {"gm_g3a3_oli","gm_pzf44_2_oli"}; // Weapons added to the unit.
		respawnweapons[] 	= {"gm_g3a3_oli","gm_pzf44_2_oli"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] 		= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_5(gm_1Rnd_44x537mm_heat_dm32_pzf44_2),mag_2(gm_handgrenade_frag_dm51)}; //I'm going with 6 standard mags, 3 tracer magazines, and 2 frag grenades.
		Respawnmagazines[] 	= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_5(gm_1Rnd_44x537mm_heat_dm32_pzf44_2),mag_2(gm_handgrenade_frag_dm51)}; //Should be identical to magazines[]
		linkedItems[]        	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // "vest","headgear","map","compass","watch","radio"
		respawnLinkedItems[] 	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
	};
class gmre_nor_antitank_g3a3_pz44_parka_80_ols : gmre_nor_parka_ols_base
	{
		_generalMacro 		= "gmre_nor_m75_rifleman";
		scope 			= 2;
		displayName 		= "Anti-Tank"; // In-game name of unit
		icon 			= "iconManAT";
		weapons[] 		= {"gm_g3a3_oli","gm_pzf44_2_oli"}; // Weapons added to the unit.
		respawnweapons[] 	= {"gm_g3a3_oli","gm_pzf44_2_oli"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] 		= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_5(gm_1Rnd_44x537mm_heat_dm32_pzf44_2),mag_2(gm_handgrenade_frag_dm51)}; //I'm going with 6 standard mags, 3 tracer magazines, and 2 frag grenades.
		Respawnmagazines[] 	= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_5(gm_1Rnd_44x537mm_heat_dm32_pzf44_2),mag_2(gm_handgrenade_frag_dm51)}; //Should be identical to magazines[]
		linkedItems[]        	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // "vest","headgear","map","compass","watch","radio"
		respawnLinkedItems[] 	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
	};
class gmre_nor_antitank_g3a3_pz44_parka_80_win : gmre_nor_parka_win_base
	{
		_generalMacro 		= "gmre_nor_m75_rifleman";
		scope 			= 2;
		displayName 		= "Anti-Tank"; // In-game name of unit
		icon 			= "iconManAT";
		weapons[] 		= {"gm_g3a3_oli","gm_pzf44_2_oli"}; // Weapons added to the unit.
		respawnweapons[] 	= {"gm_g3a3_oli","gm_pzf44_2_oli"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] 		= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_5(gm_1Rnd_44x537mm_heat_dm32_pzf44_2),mag_2(gm_handgrenade_frag_dm51)}; //I'm going with 6 standard mags, 3 tracer magazines, and 2 frag grenades.
		Respawnmagazines[] 	= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_5(gm_1Rnd_44x537mm_heat_dm32_pzf44_2),mag_2(gm_handgrenade_frag_dm51)}; //Should be identical to magazines[]
		linkedItems[]        	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_cover_win","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // "vest","headgear","map","compass","watch","radio"
		respawnLinkedItems[] 	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_cover_win","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
	};
class gmre_nor_antitank_g3a3_pz44_80_m75 : gmre_nor_m75_base
	{
		_generalMacro 		= "gmre_nor_m75_rifleman";
		scope 			= 2;
		displayName 		= "Anti-Tank"; // In-game name of unit
		icon 			= "iconManAT";
		weapons[] 		= {"gm_g3a3_oli","gm_pzf44_2_oli"}; // Weapons added to the unit.
		respawnweapons[] 	= {"gm_g3a3_oli","gm_pzf44_2_oli"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] 		= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_5(gm_1Rnd_44x537mm_heat_dm32_pzf44_2),mag_2(gm_handgrenade_frag_dm51)}; //I'm going with 6 standard mags, 3 tracer magazines, and 2 frag grenades.
		Respawnmagazines[] 	= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_5(gm_1Rnd_44x537mm_heat_dm32_pzf44_2),mag_2(gm_handgrenade_frag_dm51)}; //Should be identical to magazines[]
		linkedItems[]        	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // "vest","headgear","map","compass","watch","radio"
		respawnLinkedItems[] 	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
	};
class gmre_nor_antitank_g3a3_pz84_80_oli : gmre_nor_oli_base
	{
		_generalMacro 		= "gmre_nor_m75_rifleman";
		scope 			= 2;
		displayName 		= "Heavy Anti-Tank"; // In-game name of unit
		icon 			= "iconManAT";
		weapons[] 		= {"gm_g3a3_oli","gm_pzf84_oli"}; // Weapons added to the unit.
		respawnweapons[] 	= {"gm_g3a3_oli","gm_pzf84_oli"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] 		= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_4(gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf),mag_2(gm_handgrenade_frag_dm51)}; //I'm going with 6 standard mags, 3 tracer magazines, and 2 frag grenades.
		Respawnmagazines[] 	= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_4(gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf),mag_2(gm_handgrenade_frag_dm51)}; //Should be identical to magazines[]
		linkedItems[]        	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // "vest","headgear","map","compass","watch","radio"
		respawnLinkedItems[] 	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
	};
class gmre_nor_antitank_g3a3_pz84_80_ols : gmre_nor_ols_base
	{
		_generalMacro 		= "gmre_nor_m75_rifleman";
		scope 			= 2;
		displayName 		= "Heavy Anti-Tank"; // In-game name of unit
		icon 			= "iconManAT";
		weapons[] 		= {"gm_g3a3_oli","gm_pzf84_oli"}; // Weapons added to the unit.
		respawnweapons[] 	= {"gm_g3a3_oli","gm_pzf84_oli"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] 		= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_4(gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf),mag_2(gm_handgrenade_frag_dm51)}; //I'm going with 6 standard mags, 3 tracer magazines, and 2 frag grenades.
		Respawnmagazines[] 	= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_4(gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf),mag_2(gm_handgrenade_frag_dm51)}; //Should be identical to magazines[]
		linkedItems[]        	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // "vest","headgear","map","compass","watch","radio"
		respawnLinkedItems[] 	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
	};
class gmre_nor_antitank_g3a3_pz84_parka_80_oli : gmre_nor_parka_oli_base
	{
		_generalMacro 		= "gmre_nor_m75_rifleman";
		scope 			= 2;
		displayName 		= "Heavy Anti-Tank"; // In-game name of unit
		icon 			= "iconManAT";
		weapons[] 		= {"gm_g3a3_oli","gm_pzf84_oli"}; // Weapons added to the unit.
		respawnweapons[] 	= {"gm_g3a3_oli","gm_pzf84_oli"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] 		= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_4(gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf),mag_2(gm_handgrenade_frag_dm51)}; //I'm going with 6 standard mags, 3 tracer magazines, and 2 frag grenades.
		Respawnmagazines[] 	= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_4(gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf),mag_2(gm_handgrenade_frag_dm51)}; //Should be identical to magazines[]
		linkedItems[]        	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // "vest","headgear","map","compass","watch","radio"
		respawnLinkedItems[] 	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
	};
class gmre_nor_antitank_g3a3_pz84_parka_80_ols : gmre_nor_parka_ols_base
	{
		_generalMacro 		= "gmre_nor_m75_rifleman";
		scope 			= 2;
		displayName 		= "Heavy Anti-Tank"; // In-game name of unit
		icon 			= "iconManAT";
		weapons[] 		= {"gm_g3a3_oli","gm_pzf84_oli"}; // Weapons added to the unit.
		respawnweapons[] 	= {"gm_g3a3_oli","gm_pzf84_oli"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] 		= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_4(gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf),mag_2(gm_handgrenade_frag_dm51)}; //I'm going with 6 standard mags, 3 tracer magazines, and 2 frag grenades.
		Respawnmagazines[] 	= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_4(gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf),mag_2(gm_handgrenade_frag_dm51)}; //Should be identical to magazines[]
		linkedItems[]        	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // "vest","headgear","map","compass","watch","radio"
		respawnLinkedItems[] 	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
	};
class gmre_nor_antitank_g3a3_pz84_parka_80_win : gmre_nor_parka_win_base
	{
		_generalMacro 		= "gmre_nor_m75_rifleman";
		scope 			= 2;
		displayName 		= "Heavy Anti-Tank"; // In-game name of unit
		icon 			= "iconManAT";
		weapons[] 		= {"gm_g3a3_oli","gm_pzf84_oli"}; // Weapons added to the unit.
		respawnweapons[] 	= {"gm_g3a3_oli","gm_pzf84_oli"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] 		= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_4(gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf),mag_2(gm_handgrenade_frag_dm51)}; //I'm going with 6 standard mags, 3 tracer magazines, and 2 frag grenades.
		Respawnmagazines[] 	= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_4(gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf),mag_2(gm_handgrenade_frag_dm51)}; //Should be identical to magazines[]
		linkedItems[]        	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_cover_win","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // "vest","headgear","map","compass","watch","radio"
		respawnLinkedItems[] 	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_cover_win","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
	};
class gmre_nor_antitank_g3a3_pz84_80_m75 : gmre_nor_m75_base
	{
		_generalMacro 		= "gmre_nor_m75_rifleman";
		scope 			= 2;
		displayName 		= "Heavy Anti-Tank"; // In-game name of unit
		icon 			= "iconManAT";
		weapons[] 		= {"gm_g3a3_oli","gm_pzf84_oli"}; // Weapons added to the unit.
		respawnweapons[] 	= {"gm_g3a3_oli","gm_pzf84_oli"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] 		= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_4(gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf),mag_2(gm_handgrenade_frag_dm51)}; //I'm going with 6 standard mags, 3 tracer magazines, and 2 frag grenades.
		Respawnmagazines[] 	= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_4(gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf),mag_2(gm_handgrenade_frag_dm51)}; //Should be identical to magazines[]
		linkedItems[]        	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // "vest","headgear","map","compass","watch","radio"
		respawnLinkedItems[] 	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
	};