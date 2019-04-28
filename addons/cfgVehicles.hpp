
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

	class ;
    class  : 
	{
		_generalMacro = "";
		editorPreview = "";
		side = 0;
		scope = 1;
		scopecurator =2;
		faction = gmre_nor; // Puts unit under new faction
		vehicleClass = "forsvaret"; // Puts unit in the vehicleclass
		//model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93";
		nakedUniform = "U_BasicBody";
		uniformClass = "CUP_U_O_TK_Officer";  // Uniform Class
		backpack = "B_Backpack_Invisible_XLarge"; // Backpack Class
		linkedItems[]        = {"CUP_V_O_Ins_Carrier_Rig_MG", "rhsgref_fieldcap_ttsko_mountain","ItemMap", "ItemCompass", "ItemWatch",  "ItemRadio"}; // Item's added to the unit.
		respawnLinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_MG", "rhsgref_fieldcap_ttsko_mountain","ItemMap", "ItemCompass", "ItemWatch",  "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		items[]              = {"ACE_packingBandage", "ACE_fieldDressing", "ACE_morphine", "ACE_tourniquet"};
		respawnItems[]       = {"ACE_packingBandage", "ACE_fieldDressing", "ACE_morphine", "ACE_tourniquet"};
	};
	
SAMPLE BLANK CLASS

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
iconManOfficer = "\A3\ui_f\data\map\vehicleicons\iconManOfficer_ca.paa";
*/
