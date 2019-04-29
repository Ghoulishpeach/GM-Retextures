class cfgWeapons
{
        class uniformitem
        {
                side = 0;
                scope = 2;
                faction = "gmre_nor";
                vehicleClass = forsvaret;
        };
        class gmre_nor_m75 : uniformitem
        {
                author= "Peach";
                scope = 2;
                displayName = "M/75 Field Dress";
                picture = "PLACEHOLDER";
                model = "";
                hiddenSelections[] = {"M/75 Pattern"};
                hiddenSelectionsTextures[] = {"\Addons\addons\@GMRE\GM-Retextures\addons\Data\gmre_nor_m75.paa"};

                class ItemInfo : uniformitem
                {
                        uniformModel = "-";
                        uniformClass = gmre_nor_rifleman_g3a3_80_m75;
                        containerClass = Supply40;
                        mass = 40;
                };
        };
};