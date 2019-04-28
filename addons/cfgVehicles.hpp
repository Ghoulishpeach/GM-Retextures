
	/// Magazines macros definition ///

	#define mag_2(a) a, a
	#define mag_3(a) a, a, a
	#define mag_4(a) a, a, a, a
	#define mag_5(a) a, a, a, a, a
	#define mag_6(a) a, a, a, a, a, a
	#define mag_7(a) a, a, a, a, a, a, a
	#define mag_8(a) a, a, a, a, a, a, a, a
	#define mag_9(a) a, a, a, a, a, a, a, a, a
	#define mag_10(a) a, a, a, a, a, a, a, a, a, a
	#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
	#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a
	#define mag_26(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a

class gm_ge_army_rifleman_80_oli;
class gm_ge_army_rifleman_80_ols;
class gm_ge_army_rifleman_parka_80_oli;
class gm_ge_army_rifleman_parka_80_ols;
class gm_ge_army_rifleman_parka_80_win;
class gmre_nor_m75_base : gm_ge_army_rifleman_80_ols
	{
		_generalMacro 		= "gmre_nor_m75_base";
		editorPreview 		= "";
		side 			= 0;
		scope 			= 1;
		scopecurator 		= 2;
		faction 		= gmre_nor; // Puts unit under new faction
		vehicleClass 		= "forsvaret"; // Puts unit in the vehicleclass
		nakedUniform 		= "U_BasicBody";
		uniformClass 		= "gmre_nor_m75";  // Uniform Class
		backpack 		= "gm_dk_army_backpack_73_oli"; // Backpack Class
		linkedItems[]        	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // "vest","headgear","map","compass","watch","radio"
		respawnLinkedItems[] 	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		items[]              	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//medical supplies
		respawnItems[]       	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//identical to items[]
	};
class gmre_nor_ols_base : gm_ge_army_rifleman_g3a3_80_ols
	{
		_generalMacro 		= "gmre_nor_m75_base";
		editorPreview 		= "";
		side 			= 0;
		scope 			= 1;
		scopecurator 		= 2;
		faction 		= gmre_nor; // Puts unit under new faction
		vehicleClass 		= "forsvaret"; // Puts unit in the vehicleclass
		nakedUniform 		= "U_BasicBody";
		uniformClass 		= "gm_ge_army_uniform_soldier_80_ols";  // Uniform Class
		backpack 		= "gm_dk_army_backpack_73_oli"; // Backpack Class
		linkedItems[]        	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // "vest","headgear","map","compass","watch","radio"
		respawnLinkedItems[] 	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		items[]              	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//medical supplies
		respawnItems[]       	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//identical to items[]
	};
class gmre_nor_oli_base : gm_ge_army_rifleman_80_oli
	{
		_generalMacro 		= "gmre_nor_m75_base";
		editorPreview 		= "";
		side 			= 0;
		scope 			= 1;
		scopecurator 		= 2;
		faction 		= gmre_nor; // Puts unit under new faction
		vehicleClass 		= "forsvaret"; // Puts unit in the vehicleclass
		nakedUniform 		= "U_BasicBody";
		uniformClass 		= "gm_ge_army_uniform_soldier_80_oli";  // Uniform Class
		backpack 		= "gm_dk_army_backpack_73_oli"; // Backpack Class
		linkedItems[]        	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // "vest","headgear","map","compass","watch","radio"
		respawnLinkedItems[] 	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		items[]              	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//medical supplies
		respawnItems[]       	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//identical to items[]
	};
class gmre_nor_parka_oli_base : gm_ge_army_rifleman_parka_80_oli
	{
		_generalMacro 		= "gmre_nor_m75_base";
		editorPreview 		= "";
		side 			= 0;
		scope 			= 1;
		scopecurator 		= 2;
		faction 		= gmre_nor; // Puts unit under new faction
		vehicleClass 		= "forsvaret"; // Puts unit in the vehicleclass
		nakedUniform 		= "U_BasicBody";
		uniformClass 		= "gm_ge_army_uniform_soldier_parka_80_oli";  // Uniform Class
		backpack 		= "gm_dk_army_backpack_73_oli"; // Backpack Class
		linkedItems[]        	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // "vest","headgear","map","compass","watch","radio"
		respawnLinkedItems[] 	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		items[]              	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//medical supplies
		respawnItems[]       	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//identical to items[]
	};
class gmre_nor_parka_ols_base : gm_ge_army_rifleman_parka_80_ols
	{
		_generalMacro 		= "gmre_nor_m75_base";
		editorPreview 		= "";
		side 			= 0;
		scope 			= 1;
		scopecurator 		= 2;
		faction 		= gmre_nor; // Puts unit under new faction
		vehicleClass 		= "forsvaret"; // Puts unit in the vehicleclass
		nakedUniform 		= "U_BasicBody";
		uniformClass 		= "gm_ge_army_uniform_soldier_parka_80_ols";  // Uniform Class
		backpack 		= "gm_dk_army_backpack_73_oli"; // Backpack Class
		linkedItems[]        	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // "vest","headgear","map","compass","watch","radio"
		respawnLinkedItems[] 	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		items[]              	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//medical supplies
		respawnItems[]       	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//identical to items[]
	};
class gmre_nor_parka_win_base : gm_ge_army_rifleman_parka_80_win
	{
		_generalMacro 		= "gmre_nor_m75_base";
		editorPreview 		= "";
		side 			= 0;
		scope 			= 1;
		scopecurator 		= 2;
		faction 		= gmre_nor; // Puts unit under new faction
		vehicleClass 		= "forsvaret"; // Puts unit in the vehicleclass
		nakedUniform 		= "U_BasicBody";
		uniformClass 		= "gm_dk_army_uniform_soldier_84_win";  // Uniform Class
		backpack 		= "gm_dk_army_backpack_73_oli"; // Backpack Class
		linkedItems[]        	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // "vest","headgear","map","compass","watch","radio"
		respawnLinkedItems[] 	= {"gm_ge_army_vest_80_rifleman","gm_ge_headgear_m62_net","ItemMap","gm_ge_army_conat2","gm_watch_kosei_80","ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		items[]              	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//medical supplies
		respawnItems[]       	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//identical to items[]
	};
class gm_ge_army_antitank_assistant_g3a3_pzf44_80_oli :
	{

	};
class gm_ge_army_antitank_assistant_g3a3_pzf44_80_ols
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
class
	{

	};
/*class gmre_nor_m75_rifleman : gmre_nor_m75_base
	{
		_generalMacro 		= "gmre_nor_m75_rifleman";
		scope 			= 2;
		displayName 		= "Rifleman (M75)"; // In-game name of unit
		icon 			= "iconMan";
		weapons[] 		= {"gm_g3a3_oli","gm_ferod16_oli"}; // Weapons added to the unit.
		respawnweapons[] 	= {"gm_g3a3_oli","gm_ferod16_oli"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] 		= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_2(gm_handgrenade_frag_dm51)}; //I'm going with 6 standard mags, 3 tracer magazines, and 2 frag grenades.
		Respawnmagazines[] 	= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_2(gm_handgrenade_frag_dm51)}; //Should be identical to respawnmagazines[]
	};
class gmre_nor_m75_antitank_assistant : gmre_nor_m75_base
	{
		_generalMacro 		= "gmre_nor_m75_rifleman";
		scope 			= 2;
		displayName 		= "Heavy Anti-Tank Assistant (M75)"; // In-game name of unit
		icon 			= "iconManAT";
		weapons[] 		= {"gm_g3a3_oli","gm_ferod16_oli"}; // Weapons added to the unit.
		respawnweapons[] 	= {"gm_g3a3_oli","gm_ferod16_oli"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] 		= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_3(gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf),mag_2(gm_handgrenade_frag_dm51)}; //I'm going with 6 standard mags, 3 tracer magazines, and 2 frag grenades.
		Respawnmagazines[] 	= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_3(gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf),mag_2(gm_handgrenade_frag_dm51)}; //Should be identical to magazines[]
	};
class gmre_nor_m75_antitank : gmre_nor_m75_base
	{
		_generalMacro 		= "gmre_nor_m75_rifleman";
		scope 			= 2;
		displayName 		= "Heavy Anti-Tank (M75)"; // In-game name of unit
		icon 			= "iconManAT";
		weapons[] 		= {"gm_g3a3_oli","gm_pzf84_oli","gm_ferod16_oli"}; // Weapons added to the unit.
		respawnweapons[] 	= {"gm_g3a3_oli","gm_pzf84_oli","gm_ferod16_oli"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] 		= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_4(gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf),mag_2(gm_handgrenade_frag_dm51)}; //I'm going with 6 standard mags, 3 tracer magazines, and 2 frag grenades.
		Respawnmagazines[] 	= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_4(gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf),mag_2(gm_handgrenade_frag_dm51)}; //Should be identical to magazines[]
	};
class gmre_nor_crew : gmre_nor_oli_base
	{
		_generalMacro 		= "gmre_nor_m75_rifleman";
		scope 			= 2;
		displayName 		= "Rifleman (M75)"; // In-game name of unit
		icon 			= "iconMan";
		weapons[] 		= {"gm_g3a3_oli","gm_ferod16_oli"}; // Weapons added to the unit.
		respawnweapons[] 	= {"gm_g3a3_oli","gm_ferod16_oli"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] 		= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_2(gm_handgrenade_frag_dm51)}; //I'm going with 6 standard mags, 3 tracer magazines, and 2 frag grenades.
		Respawnmagazines[] 	= {mag_6(gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk),mag_3(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),mag_2(gm_handgrenade_frag_dm51)}; //Should be identical to respawnmagazines[]
	};*/
