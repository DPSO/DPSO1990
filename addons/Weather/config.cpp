#include "script_component.hpp"

class CfgPatches
{
	class DPSO_Weather
	{
		author = AUTHOR;
		name = NAME;
		url = URL;
		units[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"A3_UI_F","cba_main","cba_xeh"};
		version = VERSION;
		authors[] = {"MitchJC"};
		weapons[] = {};
	};
};

class Extended_PreInit_EventHandlers {
    class DPSO_Weather_Event {
        init = "call compile preprocessFileLineNumbers 'z\dpso\addons\Weather\XEH_preInit.sqf'";
    };
};


class CfgFunctions {

    #include "cfgFunctions.hpp"

};
