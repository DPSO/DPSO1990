// event handler

params ["_mapCtrl","_mouseButton","_mouseX","_mouseY","_shiftDown","_ctrlDown","_altDown"];

// leftclick only
if (_mouseButton != 0) exitWith {};

if (isNil "DPSO_MI_selectDrawEH") exitWith {};

_mapCtrl ctrlRemoveEventHandler ["draw",DPSO_MI_selectDrawEH];
DPSO_MI_selectDrawEH = nil;

DPSO_MI_mouseDragStart params ["_startMouseX","_startMouseY"];
DPSO_MI_mouseDragStart = nil;
(_mapCtrl ctrlMapScreenToWorld [_mouseX,_mouseY]) params ["_endMouseX","_endMouseY"];

private _halfDeltaX = (_endMouseX - _startMouseX)/2;
private _halfDeltaY = (_endMouseY - _startMouseY)/2;

private _selectedArea = [[_startMouseX + _halfDeltaX,_startMouseY + _halfDeltaY],_halfDeltaX,_halfDeltaY,0,true];
private _selectedMarkers = [_selectedArea,_altDown || _shiftDown] call DPSO_MI_fnc_getMarkersInArea;

if (_shiftDown) then {
    DPSO_MI_selectedMarkers = DPSO_MI_selectedMarkers - _selectedMarkers;
} else {
    if (_ctrlDown) then {
        DPSO_MI_selectedMarkers = DPSO_MI_selectedMarkers + _selectedMarkers;
    } else {
        DPSO_MI_selectedMarkers = _selectedMarkers;
    };
};

[] call DPSO_MI_fnc_updateButtonSave;
[nil,-1] call DPSO_MI_fnc_setListSelected;
