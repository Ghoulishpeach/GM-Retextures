
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
	class cbb_gavr_sniper : CUP_Creatures_Military_TK_Soldier_Base
	{
		_generalMacro = "cbb_gavr_snip";
		editorPreview = "";
		side = 0;
		scope = 2;
		scopecurator =2;
		faction = gmre_nor; // Puts unit under new faction
		vehicleClass = "forsvaret"; // Puts unit in the vehicleclass
		//model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93";
		nakedUniform = "U_BasicBody";
		uniformClass = "CUP_U_O_TK_Officer";  // Uniform Class
		backpack = "B_Backpack_Invisible_XLarge"; // Backpack Class
		linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light", "H_Bandanna_khk", "ItemMap", "ItemCompass", "ItemWatch",  "ItemRadio", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_fieldDressing", "ACE_morphine", "ACE_tourniquet"}; // Item's added to the unit.
		respawnLinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_MG_Light", "H_Bandanna_khk", "ItemMap", "ItemCompass", "ItemWatch",  "ItemRadio", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_fieldDressing", "ACE_morphine", "ACE_tourniquet"}; // Item's added to the unit. Should be identical to the linkedItems section.
		displayName = "Sniper"; // In-game name of unit
		icon = "iconManMedic";
		weapons[] = {"rhs_weap_m38_rail", "Binocular"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m38_rail", "Binocular"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] = {mag_26(rhsgref_5Rnd_762x54_M38), "HandGrenade","HandGrenade"};
		Respawnmagazines[] = {mag_26(rhsgref_5Rnd_762x54_M38), "HandGrenade","HandGrenade"};
	};
	class cbb_gavr_sniperasst : CUP_Creatures_Military_TK_Soldier_Base
	{
		_generalMacro = "cbb_gavr_snipas";
		editorPreview = "";
		side = 0;
		scope = 2;
		scopecurator =2;
		faction = gmre_nor; // Puts unit under new faction
		vehicleClass = "forsvaret"; // Puts unit in the vehicleclass
		//model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93";
		nakedUniform = "U_BasicBody";
		uniformClass = "CUP_U_O_TK_Officer";  // Uniform Class
		backpack = "B_Backpack_Invisible_XLarge"; // Backpack Class
		linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light", "rhsgref_hat_M1951", "ItemMap", "ItemCompass", "ItemWatch",  "ItemRadio", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_fieldDressing", "ACE_morphine", "ACE_tourniquet"}; // Item's added to the unit.
		respawnLinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_MG_Light", "rhsgref_hat_M1951", "ItemMap", "ItemCompass", "ItemWatch",  "ItemRadio", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_fieldDressing", "ACE_morphine", "ACE_tourniquet"}; // Item's added to the unit. Should be identical to the linkedItems section.
		displayName = "Sniper Assistant"; // In-game name of unit
		icon = "iconMan";
		weapons[] = {"rhs_weap_scorpion", "Binocular"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_scorpion", "Binocular"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] = {mag_12(rhsgref_20Rnd_765x17_vz61), "HandGrenade","HandGrenade"};
		Respawnmagazines[] = {mag_12(rhsgref_20Rnd_765x17_vz61), "HandGrenade","HandGrenade"};
	};
	class cbb_gavr_Officer : CUP_Creatures_Military_TK_Soldier_Base
	{
		_generalMacro = "cbb_gavr_of";
		editorPreview = "";
		side = 0;
		scope = 2;
		scopecurator =2;
		faction = gmre_nor; // Puts unit under new faction
		vehicleClass = "forsvaret"; // Puts unit in the vehicleclass
		//model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93";
		nakedUniform = "U_BasicBody";
		uniformClass = "CUP_U_O_TK_Officer";  // Uniform Class
		backpack = "B_Backpack_Invisible_XLarge"; // Backpack Class
		linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_MG", "CUP_H_SLA_OfficerCap", "ItemMap", "ItemCompass", "ItemWatch",  "ItemRadio", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_fieldDressing", "ACE_morphine", "ACE_tourniquet"}; // Item's added to the unit.
		respawnLinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_MG", "CUP_H_SLA_OfficerCap", "ItemMap", "ItemCompass", "ItemWatch",  "ItemRadio", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_fieldDressing", "ACE_morphine", "ACE_tourniquet"}; // Item's added to the unit. Should be identical to the linkedItems section.
		displayName = "Officer"; // In-game name of unit
		icon = "iconManOfficer";
		weapons[] = {"rhs_weap_MP44", "Binocular"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_MP44", "Binocular"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] = {mag_7(rhsgref_30Rnd_792x33_SmE_StG), "HandGrenade","HandGrenade"};
		Respawnmagazines[] = {mag_7(rhsgref_30Rnd_792x33_SmE_StG), "HandGrenade","HandGrenade"};
	};
	class cbb_gavr_Officer2 : CUP_Creatures_Military_TK_Soldier_Base
	{
		_generalMacro = "cbb_gavr_of2";
		editorPreview = "";
		side = 0;
		scope = 2;
		scopecurator =2;
		faction = gmre_nor; // Puts unit under new faction
		vehicleClass = "forsvaret"; // Puts unit in the vehicleclass
		//model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93";
		nakedUniform = "U_BasicBody";
		uniformClass = "CUP_U_O_TK_Officer";  // Uniform Class
		backpack = "B_Backpack_Invisible_XLarge"; // Backpack Class
		linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_MG", "panama_afg", "ItemMap", "ItemCompass", "ItemWatch",  "ItemRadio", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_fieldDressing", "ACE_morphine", "ACE_tourniquet"}; // Item's added to the unit.
		respawnLinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_MG", "panama_afg", "ItemMap", "ItemCompass", "ItemWatch",  "ItemRadio", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_fieldDressing", "ACE_morphine", "ACE_tourniquet"}; // Item's added to the unit. Should be identical to the linkedItems section.
		displayName = "lieutenant"; // In-game name of unit
		icon = "iconManOfficer";
		weapons[] = {"rhs_weap_MP44", "Binocular"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_MP44", "Binocular"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] = {mag_7(rhsgref_30Rnd_792x33_SmE_StG), "HandGrenade","HandGrenade"};
		Respawnmagazines[] = {mag_7(rhsgref_30Rnd_792x33_SmE_StG), "HandGrenade","HandGrenade"};
	};
    class cbb_gavr_rf : cbb_gavr_base
	{
		_generalMacro = "cbb_gavr_rf";
		scope = 2;
		displayName = "Rifleman"; // In-game name of unit
		icon = "iconMan";
		weapons[] = {"rhs_weap_m38", "Binocular"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m38","Binocular"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] = {mag_26(rhsgref_5Rnd_762x54_M38), "HandGrenade","HandGrenade"};
		Respawnmagazines[] = {mag_26(rhsgref_5Rnd_762x54_M38), "HandGrenade","HandGrenade"};
	};
	 class cbb_gavr_rf2 : cbb_gavr_base
	{
		_generalMacro = "cbb_gavr_rf2";
		scope = 2;
		displayName = "Rifleman 2"; // In-game name of unit
		icon = "iconMan";
		weapons[] = {"rhs_weap_MP44", "Binocular"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_MP44", "Binocular"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] = {mag_7(rhsgref_30Rnd_792x33_SmE_StG), "HandGrenade","HandGrenade"};
		Respawnmagazines[] = {mag_7(rhsgref_30Rnd_792x33_SmE_StG), "HandGrenade","HandGrenade"};
	};
	class cbb_gavr_mg : cbb_gavr_base
	{
		_generalMacro = "cbb_gavr_mg";
		scope = 2;
		displayName = "Machine Gunner"; // In-game name of unit
		icon = "iconManMG";
		weapons[] = {"CUP_lmg_UK59"}; // Weapons added to the unit.
		respawnweapons[] = {"CUP_lmg_UK59"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] = {mag_6(CUP_50Rnd_UK59_762x54R_Tracer), "HandGrenade","HandGrenade"};
		Respawnmagazines[] = {mag_6(CUP_50Rnd_UK59_762x54R_Tracer), "HandGrenade","HandGrenade"};
	};
	class cbb_gavr_mga : cbb_gavr_base
	{
		_generalMacro = "cbb_gavr_mga";
		scope = 2;
		displayName = "Assistant Machinegunner"; // In-game name of unit
		icon = "iconMan";
		weapons[] = {"rhs_weap_m38", "Binocular"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m38", "Binocular"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] = {mag_26(rhsgref_5Rnd_762x54_M38), mag_2(CUP_50Rnd_UK59_762x54R_Tracer), "HandGrenade","HandGrenade"};
		Respawnmagazines[] = {mag_26(rhsgref_5Rnd_762x54_M38), mag_2(CUP_50Rnd_UK59_762x54R_Tracer), "HandGrenade","HandGrenade"};
	};
	class cbb_gavr_tl : cbb_gavr_base
	{
		_generalMacro = "cbb_gavr_tl";
		scope = 2;
		displayName = "Team Leader"; // In-game name of unit
		icon = "iconManLeader";
		weapons[] = {"rhs_weap_MP44", "Binocular"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_MP44", "Binocular"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] = {mag_7(rhsgref_30Rnd_792x33_SmE_StG), "HandGrenade","HandGrenade"};
		Respawnmagazines[] = {mag_7(rhsgref_30Rnd_792x33_SmE_StG), "HandGrenade","HandGrenade"};
	};
	class cbb_gavr_sl : cbb_gavr_base
	{
		_generalMacro = "cbb_gavr_sl";
		scope = 2;
		displayName = "Squad Leader"; // In-game name of unit
		icon = "iconManOfficer";
		weapons[] = {"rhs_weap_MP44", "Binocular"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_MP44", "Binocular"}; // Weapons added to the unit. Should be identical to the weapons section
		magazines[] = {mag_7(rhsgref_30Rnd_792x33_SmE_StG), "HandGrenade","HandGrenade"};
		Respawnmagazines[] = {mag_7(rhsgref_30Rnd_792x33_SmE_StG), "HandGrenade","HandGrenade"};
	};
	class cbb_gavr_uaz : rhs_uaz_open_Base
	{
		scope =2;
		crewMacrocbbInf
		editorPreview = "";
	};
	class cbb_gavr_ural : rhsgref_nat_ural
	{
		scope =2;
		crewMacrocbbInf
		editorPreview = "";
	};
/*



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
