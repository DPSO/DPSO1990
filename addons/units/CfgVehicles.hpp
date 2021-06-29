class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class B_recon_F;
    class B_recon_F_OCimport_01 : B_recon_F { scope = 0; class EventHandlers; };
    class B_recon_F_OCimport_02 : B_recon_F_OCimport_01 { class EventHandlers; };

    class CLASS(Unit_Combat_DPSO_Base): B_recon_F_OCimport_02 {
        author = AUTHOR;
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = QUOTE(PREFIX);

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "gm_xx_uniform_soldier_bdu_rolled_80_wdl";
        backpack = "gm_dk_army_backpack_73_oli";
        weapons[] = {"CUP_arifle_M4A3_black", "CUP_hgun_M9A1", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black", "CUP_hgun_M9A1", "Throw", "Put"};
        magazines[] = {ITEMS_8(ACE_30Rnd_556x45_Stanag_Mk318_mag), ITEMS_2(HandGrenade), ITEMS_2(Chemlight_green), ITEMS_2(CUP_15Rnd_9x19_M9), "SmokeShell"};
        respawnMagazines[] = {ITEMS_8(ACE_30Rnd_556x45_Stanag_Mk318_mag), ITEMS_2(HandGrenade), ITEMS_2(Chemlight_green), ITEMS_2(CUP_15Rnd_9x19_M9), "SmokeShell"};
        items[] = {"ACE_EarPlugs", "ACE_MapTools", "DPSO_FirstAid", "ACE_Flashlight_MX991", "ACE_DAGR"};
        respawnItems[] = {"ACE_EarPlugs", "ACE_MapTools", "DPSO_FirstAid", "ACE_Flashlight_MX991", "ACE_DAGR"}; 
        linkedItems[] = {"CUP_V_B_PASGT", "H_Beret_02", "", "ItemMap", "gm_ge_army_conat2", "ItemWatch", "gm_radio_sem52a", "", "CUP_acc_ANPEQ_2_grey", "CUP_optic_ACOG_PIP", "", "", "", "", ""};
        respawnLinkedItems[] = {"CUP_V_B_PASGT", "H_Beret_02", "", "ItemMap", "gm_ge_army_conat2", "ItemWatch", "gm_radio_sem52a", "", "CUP_acc_ANPEQ_2_grey", "CUP_optic_ACOG_PIP", "", "", "", "", ""};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
        };
    };

    class CLASS(Unit_Combat_DPSO_Pilot): B_recon_F_OCimport_02 {
        author = AUTHOR;
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = QUOTE(PREFIX);

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "gm_xx_uniform_soldier_bdu_rolled_80_wdl";
        backpack = "gm_dk_army_backpack_73_oli";
        weapons[] = {"CUP_arifle_M4A3_black", "CUP_hgun_M9A1", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black", "CUP_hgun_M9A1", "Throw", "Put"};
        magazines[] = {ITEMS_8(ACE_30Rnd_556x45_Stanag_Mk318_mag), ITEMS_2(HandGrenade), ITEMS_2(Chemlight_green), ITEMS_2(CUP_15Rnd_9x19_M9), "SmokeShell"};
        respawnMagazines[] = {ITEMS_8(ACE_30Rnd_556x45_Stanag_Mk318_mag), ITEMS_2(HandGrenade), ITEMS_2(Chemlight_green), ITEMS_2(CUP_15Rnd_9x19_M9), "SmokeShell"};
        items[] = {"ACE_EarPlugs", "ACE_MapTools", "DPSO_FirstAid", "ACE_Flashlight_MX991", "ACE_DAGR"};
        respawnItems[] = {"ACE_EarPlugs", "ACE_MapTools", "DPSO_FirstAid", "ACE_Flashlight_MX991", "ACE_DAGR"}; 
        linkedItems[] = {"CUP_V_B_PASGT", "H_Beret_02", "", "ItemMap", "gm_ge_army_conat2", "ItemWatch", "gm_radio_sem52a", "", "CUP_acc_ANPEQ_2_grey", "CUP_optic_ACOG_PIP", "", "", "", "", ""};
        respawnLinkedItems[] = {"CUP_V_B_PASGT", "H_Beret_02", "", "ItemMap", "gm_ge_army_conat2", "ItemWatch", "gm_radio_sem52a", "", "CUP_acc_ANPEQ_2_grey", "CUP_optic_ACOG_PIP", "", "", "", "", ""};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
        };
    };

    class CLASS(operator_990) : CLASS(Unit_Combat_DPSO_Base) {
        author = AUTHOR;
        scope = 2;
        displayName = "Operator 990";
        
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
        };
    };

    class CLASS(operator_991) : CLASS(Unit_Combat_DPSO_Base) {
        author = AUTHOR;
        scope = 2;
        displayName = "Operator 991";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
        };
    };

    class CLASS(operator_992) : CLASS(Unit_Combat_DPSO_Base) {
        author = AUTHOR;
        scope = 2;
        displayName = "Operator 992";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
        };
    };

    class CLASS(operator_993) : CLASS(Unit_Combat_DPSO_Base) {
        author = AUTHOR;
        scope = 2;
        displayName = "Operator 993";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
        };
    };

    class CLASS(operator_995) : CLASS(Unit_Combat_DPSO_Base) {
        author = AUTHOR;
        scope = 2;
        displayName = "Operator 995";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
        };
    };

    class CLASS(flight_crew_999) : CLASS(Unit_Combat_DPSO_Pilot) {
        author = AUTHOR;
        scope = 2;
        displayName = "Pilot 999";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
        };
    };        
};

