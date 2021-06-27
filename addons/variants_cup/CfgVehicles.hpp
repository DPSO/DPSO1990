class CfgVehicles {
    class CUP_B_C130J_USMC;

    class CLASS(C130J_I_DPSO): CUP_B_C130J_USMC {
        MACRO_AIRVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = AUTHOR;
        displayName = CSTRING(C130J_DPSO_Name);
        editorPreview = QPATHTOF(ui\C130J_DPSO.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\dpso_c130j_body_co.paa),
            QPATHTOF(data\dpso_c130j_wings_co.paa)
        };
        class TextureSources {
            class ADDON {
                displayname = CSTRING(C130J_DPSO_Texture_Name);
                author = AUTHOR;
                textures[] = {
                    QPATHTOF(data\dpso_c130j_body_co.paa),
                    QPATHTOF(data\dpso_c130j_wings_co.paa)
                };
                factions[] = {
                    PREFIX
                };
            };
        };
    };

    class CLASS(C130J_B_DPSO): CLASS(C130J_I_DPSO) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QUOTE(PREFIX);
        crew = "CUP_B_US_Pilot";
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };
};
