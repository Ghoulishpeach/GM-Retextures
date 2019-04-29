class cfgWeapons
{
        class uniformitem;

        class gmre_nor_m75: uniformitem
        {
                author= "Peach";
                scope = 2;
                displayName = "M/75 Field Dress";
                picture = "PLACEHOLDER";
                model = "\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa
";
                hiddenSelections[] = {"M/75 Pattern"};
                hiddenSelectionsTextures[] = {"path/gmre_nor_m75.paa"};

                class ItemInfo: uniformitem
                {
                        uniformModel = "-";
                        uniformClass = gmre_nor_rifleman_g3a3_80_m75;
                        containerClass = Supply40;
                        mass = 40;
                };
        };
};
