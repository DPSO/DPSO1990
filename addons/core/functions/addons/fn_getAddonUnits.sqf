/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\z\dpso\addons\core\functions\addons\fn_getAddonUnits.sqf
 *	by Ojemineh
 *	
 *	get addon units
 *	
 *	Arguments:
 *	0: classname - <STRING>
 *	
 *	Return:
 *	<ARRAY>
 *	
 *	Example:
 *	["dpso_core"] call DPSO_fnc_getAddonUnits;
 *	
 */

// -------------------------------------------------------------------------------------------------

private ["_classname"];

_classname = [_this, 0, "", [""]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

private _return = [];

if (isClass (configfile >> "CfgPatches" >> _classname)) then {
	_return = getArray (configfile >> "CfgPatches" >> _classname >> "units");
};

_return;