#include "..\ui\defines.inc"
// event handler

params ["_ctrlSavesList","_selID"];

if (_selID < 0) exitWith {
    [] call DPSO_MI_fnc_createMarkerPreview;
    [IDC_BUTTONDELETE,false] call DPSO_MI_fnc_setButtonEnabled;
    [IDC_BUTTONLOAD,false] call DPSO_MI_fnc_setButtonEnabled;
};

private _dataID = _ctrlSavesList lnbValue [_selID,0];
private _saveMarkersData = profileNamespace getVariable "DPSO_MI_saveData";
(_saveMarkersData select _dataID) params ["_saveName","_worldName",["_markersData",[]]];

private _isThisWorld = _worldName == worldName;

[IDC_BUTTONLOAD,_isThisWorld] call DPSO_MI_fnc_setButtonEnabled;
[IDC_BUTTONDELETE,true] call DPSO_MI_fnc_setButtonEnabled;

if (_isThisWorld) then {
    [_markersData] call DPSO_MI_fnc_createMarkerPreview;
} else {
    [] call DPSO_MI_fnc_createMarkerPreview;
};

private _display = ctrlParent _ctrlSavesList;
private _ctrlEditName = _display displayCtrl IDC_EDITNAME;

_ctrlEditName ctrlSetText _saveName;
[] call DPSO_MI_fnc_onEditNameChanged;
