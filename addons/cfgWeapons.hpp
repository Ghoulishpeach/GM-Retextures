        class Uniform_Base;
	class UniformItem;
        class gmre_nor_m75 : Uniform_Base
        {
                author= "Peach";
                scope = 2;
                displayName = "M/75 Field Dress";
                picture = "";
                model = "\gm\gm_characters\gm_ge_characters\dropped\gm_ge_army_uniform_soldier_80_ols_dropped";
                hiddenSelections[] = {"M/75 Pattern"};
                hiddenSelectionsTextures[] = {"\@gmre\GM-Retextures\addons\Data\gmre_nor_m75.paa"};
                class ItemInfo : uniformItem
                	{
                        	uniformModel = "-";
                        	uniformClass = gmre_nor_rifleman_g3a3_80_m75;
                        	containerClass = Supply40;
                        	mass = 40;
                	};
       	};