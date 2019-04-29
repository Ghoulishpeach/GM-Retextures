
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
class gm_ge_army_crew_80_oli;
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
		items[]              	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//medical supplies
		respawnItems[]       	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//identical to items[]
	};
class gmre_nor_ols_base : gm_ge_army_rifleman_80_ols
	{
		_generalMacro 		= "gmre_nor_ols_base";
		editorPreview 		= "";
		side 			= 0;
		scope 			= 1;
		scopecurator 		= 2;
		faction 		= gmre_nor; // Puts unit under new faction
		vehicleClass 		= "forsvaret"; // Puts unit in the vehicleclass
		nakedUniform 		= "U_BasicBody";
		uniformClass 		= "gm_ge_army_uniform_soldier_80_ols";  // Uniform Class
		backpack 		= "gm_dk_army_backpack_73_oli"; // Backpack Class
		items[]              	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//medical supplies
		respawnItems[]       	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//identical to items[]
	};
class gmre_nor_oli_base : gm_ge_army_rifleman_80_oli
	{
		_generalMacro 		= "gmre_nor_oli_base";
		editorPreview 		= "";
		side 			= 0;
		scope 			= 1;
		scopecurator 		= 2;
		faction 		= gmre_nor; // Puts unit under new faction
		vehicleClass 		= "forsvaret"; // Puts unit in the vehicleclass
		nakedUniform 		= "U_BasicBody";
		uniformClass 		= "gm_ge_army_uniform_soldier_80_oli";  // Uniform Class
		backpack 		= "gm_dk_army_backpack_73_oli"; // Backpack Class
		items[]              	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//medical supplies
		respawnItems[]       	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//identical to items[]
	};
class gmre_nor_parka_oli_base : gm_ge_army_rifleman_parka_80_oli
	{
		_generalMacro 		= "gmre_nor_parka_oli_base";
		editorPreview 		= "";
		side 			= 0;
		scope 			= 1;
		scopecurator 		= 2;
		faction 		= gmre_nor; // Puts unit under new faction
		vehicleClass 		= "forsvaret"; // Puts unit in the vehicleclass
		nakedUniform 		= "U_BasicBody";
		uniformClass 		= "gm_ge_army_uniform_soldier_parka_80_oli";  // Uniform Class
		backpack 		= "gm_dk_army_backpack_73_oli"; // Backpack Class
		items[]              	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//medical supplies
		respawnItems[]       	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//identical to items[]
	};
class gmre_nor_parka_ols_base : gm_ge_army_rifleman_parka_80_ols
	{
		_generalMacro 		= "gmre_nor_parka_ols_base";
		editorPreview 		= "";
		side 			= 0;
		scope 			= 1;
		scopecurator 		= 2;
		faction 		= gmre_nor; // Puts unit under new faction
		vehicleClass 		= "forsvaret"; // Puts unit in the vehicleclass
		nakedUniform 		= "U_BasicBody";
		uniformClass 		= "gm_ge_army_uniform_soldier_parka_80_ols";  // Uniform Class
		backpack 		= "gm_dk_army_backpack_73_oli"; // Backpack Class
		items[]              	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//medical supplies
		respawnItems[]       	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//identical to items[]
	};
class gmre_nor_parka_win_base : gm_ge_army_rifleman_parka_80_win
	{
		_generalMacro 		= "gmre_nor_parka_win_base";
		editorPreview 		= "";
		side 			= 0;
		scope 			= 1;
		scopecurator 		= 2;
		faction 		= gmre_nor; // Puts unit under new faction
		vehicleClass 		= "forsvaret"; // Puts unit in the vehicleclass
		nakedUniform 		= "U_BasicBody";
		uniformClass 		= "gm_dk_army_uniform_soldier_84_win";  // Uniform Class
		backpack 		= "gm_dk_army_backpack_73_oli"; // Backpack Class
		items[]              	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//medical supplies
		respawnItems[]       	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};//identical to items[]
	};
class gmre_nor_crew_base : gm_ge_army_crew_80_oli
	{
		_generalMacro 		= "gmre_nor_crew_base";
		editorPreview 		= "";
		side 			= 0;
		scope 			= 1;
		scopecurator 		= 2;
		faction 		= gmre_nor; // Puts unit under new faction
		vehicleClass 		= "forsvaret"; // Puts unit in the vehicleclass
		nakedUniform 		= "U_BasicBody";
		uniformClass 		= "gm_ge_army_uniform_crew_80_oli";  // Uniform Class
		backpack 		= "gm_ge_backpack_satchel_80_blk"; // Backpack Class
		items[]              	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};
		respawnItems[]       	= {"gm_ge_army_gauzeBandage", "gm_ge_army_gauzeCompress"};
	};
#include "cfgAnti_Tank.hpp"
#include "cfgAnti_Tank_Assistant.hpp"
#include "cfgCrew.hpp"
#include "cfgDemolition.hpp"
#include "cfgEngineer.hpp"
//#include "cfgGrenadier.hpp"
#include "cfgMachine_Gunner.hpp"
#include "cfgMachine_Gunner_Assistant.hpp"
#include "cfgMedic.hpp"
//#include "cfgMilitary_Police.hpp"
#include "cfgOfficer.hpp"
#include "cfgPlatoon_Leader.hpp"
#include "cfgRifleman.hpp"
#include "cfgSquad_Leader.hpp"

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
	};

iconMan = "\A3\ui_f\data\map\vehicleicons\iconMan_ca.paa";
iconManMedic = "\A3\ui_f\data\map\vehicleicons\iconManMedic_ca.paa";
iconManEngineer = "\A3\ui_f\data\map\vehicleicons\iconManEngineer_ca.paa";
iconManExplosive = "\A3\ui_f\data\map\vehicleicons\iconManExplosive_ca.paa";
iconManRecon = "\A3\ui_f\data\map\vehicleicons\iconManRecon_ca.paa";
iconManVirtual = "\A3\ui_f\data\map\vehicleicons\iconManVirtual_ca.paa";
iconManAT = "\A3\ui_f\data\map\vehicleicons\iconManAT_ca.paa";
iconManLeader = "\A3\ui_f\data\map\vehicleicons\iconManLeader_ca.paa";
iconManMG = "\A3\ui_f\data\map\vehicleicons\iconManMG_ca.paa";
iconManOfficer = "\A3\ui_f\data\map\vehicleicons\iconManOfficer_ca.paa";*/
