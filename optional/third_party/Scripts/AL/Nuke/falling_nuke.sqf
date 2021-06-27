#include "script_component.hpp"

params ["_mark_temp"];
private ["_inte"];

[] spawn {
	sleep 120;
	alias_fallout = false
};

_inte = 1;
alias_fallout = true;

sleep 20;

while {alias_fallout} do {
	[_mark_temp] spawn {
		params ["_mark_dif"];
		private ["_pozit", "_objcar"];
		_pozit = [getPos _mark_dif,random 500,random 360] call BIS_fnc_relPos;
		_objcar = createVehicle ["Land_Battery_F", _pozit, [], 0, "CAN_COLLIDE"];
		_objcar setPosATL [getPosATL _objcar select 0,getPosATL _objcar select 1, 700 + (random 500)];

		[[_objcar],QPATHTOF(Scripts\AL\Nuke\alias_schije.sqf)] remoteExec ["execVM"];
		[_objcar] spawn {
			params ["_de_delete"];
			sleep floor (5+random 6);
			deleteVehicle _de_delete;
		};
	};

	sleep random _inte;
	_inte = _inte + 0.1;
};
