#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(C130J_I_DPSO),
            QCLASS(C130J_B_DPSO)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"DPSO_units", "CUP_AirVehicles_C130J"};
        author = AUTHOR;
        authors[] = {"GilleeDoo", "Tyrone"};
        url = URL;
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
