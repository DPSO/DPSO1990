#include "..\ui\defines.inc"
// event handler

params ["_ctrlButtonSave"];

if (count DPSO_MI_selectedMarkers == 0) exitWith {};

private _display = ctrlParent _ctrlButtonSave;
private _ctrlEdit = _display displayCtrl IDC_EDITNAME;

private _saveAs = ctrlText _ctrlEdit;

[_saveAs,worldName,DPSO_MI_selectedMarkers] call DPSO_MI_fnc_saveMarkers;
[_display] call DPSO_MI_fnc_updateSavesList;
[_display,-1] call DPSO_MI_fnc_setListSelected;
