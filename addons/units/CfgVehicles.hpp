class CBA_Extended_EventHandlers_base;

class CfgVehicles {
    #define MACRO_DPSO_CLASS_COMMON \
    dlc = QUOTE(PREFIX); \
    scope = 0; \
    side = 1; \
    faction = QUOTE(PREFIX); \
    uniformClass = "gm_xx_uniform_soldier_bdu_rolled_80_wdl";\
    backpack = "gm_dk_army_backpack_73_oli";\
    weapons[] = {"CUP_arifle_M4A3_black", "CUP_hgun_M9A1", "Throw", "Put"};\
    respawnWeapons[] = {"CUP_arifle_M4A3_black", "CUP_hgun_M9A1", "Throw", "Put"};\
    magazines[] = {ITEMS_8(ACE_30Rnd_556x45_Stanag_Mk318_mag), ITEMS_2(HandGrenade), ITEMS_2(Chemlight_green), ITEMS_2(CUP_15Rnd_9x19_M9), "SmokeShell"};\
    respawnMagazines[] = {ITEMS_8(ACE_30Rnd_556x45_Stanag_Mk318_mag), ITEMS_2(HandGrenade), ITEMS_2(Chemlight_green), ITEMS_2(CUP_15Rnd_9x19_M9), "SmokeShell"};\
    items[] = {"ACE_EarPlugs", "ACE_MapTools", "DPSO_FirstAid", "ACE_Flashlight_MX991", "ACE_DAGR"}; \
    respawnItems[] = {"ACE_EarPlugs", "ACE_MapTools", "DPSO_FirstAid", "ACE_Flashlight_MX991", "ACE_DAGR"}; \
    linkedItems[] = {"CUP_V_B_PASGT", "H_Beret_02", "", "ItemMap", "gm_ge_army_conat2", "ItemWatch", "gm_radio_sem52a", "", "CUP_acc_ANPEQ_2_grey", "CUP_optic_ACOG_PIP", "", "", "", "", ""};\
    respawnLinkedItems[] = {"CUP_V_B_PASGT", "H_Beret_02", "", "ItemMap", "gm_ge_army_conat2", "ItemWatch", "gm_radio_sem52a", "", "CUP_acc_ANPEQ_2_grey", "CUP_optic_ACOG_PIP", "", "", "", "", ""};\
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "Head_TK", "Head_Greek"}; \
    genericNames = QUOTE(PREFIX); \
    class EventHandlers : EventHandlers {class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};}; \
    modelSides[] = {6}; \
    model = "\A3\Characters_F\Common\basicbody.p3d";

    class B_Soldier_base_F_OCimport_01 : B_Soldier_base_F { scope = 0; class EventHandlers; };
    class B_Soldier_base_F_OCimport_02 : B_Soldier_base_F_OCimport_01 { class EventHandlers; };

    class CLASS(Unit_Combat_DPSO_Base): B_Soldier_base_F_OCimport_02 {
        MACRO_DPSO_CLASS_COMMON
    };

    class CLASS(Unit_Combat_DPSO_Pilot): B_Soldier_base_F_OCimport_02 {
        MACRO_DPSO_CLASS_COMMON
    };

    class CLASS(operator_990) : CLASS(Unit_Combat_DPSO_Base) {
        author = AUTHOR;
        scope = 2;
        displayName = "Operator 990";
        
        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
        };
    };

    class CLASS(operator_991) : CLASS(Unit_Combat_DPSO_Base) {
        author = AUTHOR;
        scope = 2;
        displayName = "Operator 991";

        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
        };
    };

    class CLASS(operator_992) : CLASS(Unit_Combat_DPSO_Base) {
        author = AUTHOR;
        scope = 2;
        displayName = "Operator 992";

        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
        };
    };

    class CLASS(operator_993) : CLASS(Unit_Combat_DPSO_Base) {
        author = AUTHOR;
        scope = 2;
        displayName = "Operator 993";

        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
        };
    };

    class CLASS(operator_995) : CLASS(Unit_Combat_DPSO_Base) {
        author = AUTHOR;
        scope = 2;
        displayName = "Operator 995";

        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
        };
    };

    class CLASS(flight_crew_999) : CLASS(Unit_Combat_DPSO_Pilot) {
        author = AUTHOR;
        scope = 2;
        displayName = "Pilot 999";


        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
        };
    };        
};

