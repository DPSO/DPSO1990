#include "\z\dpso\addons\chat\script_component.hpp"
/*
 * Name = DPSO_chat_fnc_cmndRP
 * Author = Freddo
 *
 * Syntaxes:
 * #rp - Resets player position.
 *
 * Return Value:
 * Void
 *
 * Description:
 * See Syntaxes
 */

IS_CMND_AVAILABLE(GVAR(rpUsage),"#rp");

private _safePos = (getPosATL CURUNIT) findEmptyPosition [0, 25, (typeOf CURUNIT)];

if (count _safePos == 3) exitWith {
    _safePos set [2, 0];
    CURUNIT setPosATL _safePos;
    systemChat "DPSO: Reset player position";
};
systemChat "DPSO Error: Unable to reset player position";
