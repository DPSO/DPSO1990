#include "script_component.hpp"
/*
 * Author: NemesisRE
 * Get the lifestate of the given unit depending on the medicalsystem that is used.
 *
 * Arguments:
 * 0: Unit <Object>
 *
 * Return Value:
 * Lifestate <STRING>
 *
 * Example:
 * ["UNIT"] call DPSO_bft_fnc_getUnitLifeState
 *
 * Public: No
 */

params ["_unit"];

private _lifestate = "HEALTHY";

switch (GVAR(medicalSystem)) do {
    case "BIS": {
        switch (lifeState _unit) do {
            case "HEALTHY": {_lifestate = "HEALTHY";};
            case "INCAPACITATED": {_lifestate = "INCAPACITATED";};
            case "INJURED": {_lifestate = "INJURED";};
            case "DEAD";
            case "DEAD-RESPAWN";
            case "DEAD-SWITCHING";
            default {_lifestate = "UNKNOWN";};
        };
    };
    case "ACE": {
        private _unitState = [_unit, ace_medical_STATE_MACHINE] call CBA_statemachine_fnc_getCurrentState;
        switch (_unitState) do {
            case "Default": {_lifestate = "HEALTHY";};
            case "Unconscious": {_lifestate = "INCAPACITATED";};
			case "FatalInjury";
            case "CardiacArrest";
            case "Injured": {_lifestate = "INJURED";};
            case "Dead";
            default {_lifestate = "UNKNOWN";};
        };
    };
};

_lifestate
