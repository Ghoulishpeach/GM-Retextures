
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

class gm_ge_army_rifleman_g3a3_80_ols;
class gmre_nor_m75_base : gm_ge_army_rifleman_g3a3_80_ols
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

/*SAMPLE BLANK CLASS

	{
		_generalMacro = "";
		scope = 2;
		displayName = ""; // In-game name of unit
		icon = "";
		weapons[] = {""}; // Weapons added to the unit.
		respawnweapons[] = {"","Binocular"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] = {mag_6(), "HandGrenade","HandGrenade"};
		Respawnmagazines[] = {mag_6(), "HandGrenade","HandGrenade"};
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
