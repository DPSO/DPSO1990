// debug logging

params ["_message"];

[_message, "DEBUG"] call YAINA_F_fnc_log;

[format ["[[DPSOF - DEBUG]] %1", _message]] remoteExec ["systemChat", 0];
[format ["[[DPSOF - DEBUG]] %1", _message]] remoteExec ["diag_log", 0];