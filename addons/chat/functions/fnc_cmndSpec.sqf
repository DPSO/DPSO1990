#include "\z\dpso\addons\chat\script_component.hpp"
/*
 * Name = DPSO_chat_fnc_cmndSpec
 * Author = Freddo
 *
 * Syntaxes:
 * #spec - Enters spectator
 *
 * Return Value:
 * Void
 *
 * Description:
 * See Syntaxes
 */

IS_CMND_AVAILABLE(GVAR(specUsage),"#spec");

if (call EFUNC(spectator,isOpen)) exitWith {systemChat "DPSO Error: Spectator already open."};


0 = [] spawn {
    private _playerObj = player;
    [_playerObj, objNull, true] call EFUNC(spectator,init);
    systemChat "DPSO: Entered spectator";
    deleteVehicle _playerObj;
};
