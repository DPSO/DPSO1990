#include "script_component.hpp"
/*
 * Author: NemesisRE
 * Shows hint with the group details for the given Marker
 *
 * Arguments:
 * 0: marker name <NetID>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["0:1"] call DPSO_bft_fnc_showGroupDetails
 *
 * Public: No
 */

params ["_markerName"];
private ["_group", "_text", "_groupCount", "_unitNameList"];

if (!isNull (_markerName call BIS_fnc_groupFromNetId)) then {
    _group = _markerName call BIS_fnc_groupFromNetId;
} else {
    if (isNull (_markerName call BIS_fnc_objectFromNetId)) exitWith {};
    _group = group (_markerName call BIS_fnc_objectFromNetId);
};

if (!((side _group) isEqualTo playerSide)) exitWith {
    hintSilent "This group is not in your faction!";
};

_text = groupId _group;
_groupCount = count (units _group);
_unitNameList = "";

{
    private ["_markerColorName", "_color", "_unitMOS", "_unitName", "_leader", "_vehicle"];
    _markerColorName = [_x] call FUNC(getMarkerColor);
    _color = (getArray (configFile >> "CfgMarkerColors" >> _markerColorName >> "color")) call BIS_fnc_colorRGBtoHTML;
    _unitMOS = "[" + getText (configFile >> "CfgVehicles" >> (typeOf _x) >> "displayName") + "]";
    _unitName = name _x;
    _leader = "";
    _vehicle = "";

    if (leader (group _x) == _x) then {
        _leader = "[L]";
    };

    if (vehicle _x != _x) then {
        _vehicle = "[" + getText (configFile >> "CfgVehicles" >> (typeOf (vehicle _x)) >> "displayName") + "]";
    };

    if (!isPlayer _x && !(GVAR(showAINames))) then {
        _unitName = "[AI]";
    };

    _unitNameList = _unitNameList + format ["<t align='left'><t color='%1'>%2</t></t>",_color,_unitName] + format ["<t align='right'><t size='0.75'>%1 %2 %3</t></t>",_leader,_vehicle,_unitMOS] + "<br/>";
} forEach (units _group);

hintSilent parseText format [
    "
        <t align='left'><t size='2'>%1</t></t><t align='right'>%2</t><br/><br/>
        %3
    ",
    _text,
    _groupCount,
    _unitNameList
];
