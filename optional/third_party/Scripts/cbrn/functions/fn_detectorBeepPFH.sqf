#include "script_component.hpp"

if (!isGameFocused || isGamePaused) exitWith {};
params ["_args", "_idPFH"];
_args params ["_lastIteration"];
private ["_time", "_delta", "_wait"];

_time = cba_missiontime;
_delta = _time - _lastIteration;
_args set [0, _delta];

if ( !cbrn_beep ||  {!(DPSO_unit getVariable ["cbrn_detector_beeps", false])} ) exitWith {
    cbrn_beepPfh = -1;
    [_idPFH] call CBA_fnc_removePerFrameHandler;
};

if (cbrn_curThreat < 0.25) exitWith {};

_wait = linearConversion [0.75, 3, cbrn_curThreat, 2, 0.05, true];
if ((cbrn_lastBeep + _wait) <= _time) then {
    cbrn_lastBeep = _time;
    playSound format ["detector_beep_%1", cbrn_beepVolume];
};
