/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\z\dpso\addons\medical\area\functions\fn_doLightOn.sqf
 *	by Ojemineh
 *	
 *	switch light on
 *	
 *	Arguments:
 *	0: area - <OBJECT>
 *	
 *	Return:
 *	nothing
 *	
 *	Example:
 *	[area1] call DPSO_medical_area_fnc_doLightOn;
 *	
 */

// -------------------------------------------------------------------------------------------------

private ["_area"];

_area = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

if (isNull _area) exitWith {false};

// -------------------------------------------------------------------------------------------------

[_area] spawn {
	
	params ["_area"];
	
	_area setVariable ["DPSO_MedicalArea_LightOnInProgress", true, true];
	
	private _lights = [];
	
	DPSO_MEDICAL_AREA_LIGHT_ON_SUCCESS = false;
	DPSO_MEDICAL_AREA_LIGHT_ON_FAILURE = false;
	
	[
		1,
		[],
		{ DPSO_MEDICAL_AREA_LIGHT_ON_SUCCESS = true; },
		{ DPSO_MEDICAL_AREA_LIGHT_ON_FAILURE = true; },
		localize "STR_DPSO_Medical_Area_Progress_LightOn"
	] call ACE_common_fnc_progressBar;
	
	waitUntil {if ((DPSO_MEDICAL_AREA_LIGHT_ON_SUCCESS) || (DPSO_MEDICAL_AREA_LIGHT_ON_FAILURE)) exitWith {true}; false};
	
	if (DPSO_MEDICAL_AREA_LIGHT_ON_SUCCESS) exitWith {
		private _light1 = "Chemlight_Blue" createVehicle (position _area); 
		_light1 attachTo [_area, [0,0,-0.3]];
		//_light1 attachTo [_area, [0,0,0.35]];
		_lights pushBack _light1;
		_area setVariable ["DPSO_MedicalArea_Lights", _lights, true];
		_area setVariable ["DPSO_MedicalArea_LightOnInProgress", nil, true];
	};
	
	if (DPSO_MEDICAL_AREA_LIGHT_ON_FAILURE) exitWith {
		_area setVariable ["DPSO_MedicalArea_LightOnInProgress", nil, true];
	};
	
};
