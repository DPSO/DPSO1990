/*
Script name:    NRE_earplugs.sqf
Created on:        03.06.2015 (06/03/2015)
Author:            NemesisRE
Author website:    http://nrecom.net

Description:    Adds action to insert/remove Earplugs (toggles).
                Inspired by A3Wasteland132DSOv14.Altis kopfh script

License:        Copyright (C) 2015 Steven "NemesisRE" Köberich

                This program is free software: you can redistribute it and/or modify
                it under the terms of the GNU General Public License as published by
                the Free Software Foundation, either version 3 of the License, or
                (at your option) any later version.

                This program is distributed in the hope that it will be useful,
                but WITHOUT ANY WARRANTY; without even the implied warranty of
                MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                GNU General Public License for more details.

                You should have received a copy of the GNU General Public License
                along with this program.  If not, see <http://www.gnu.org/licenses/>.


Manual:            Call from init.sqf via:
                    execVM "\DPSO\3rdPartyScripts\NRE_earplugs.sqf";

                Add following to your stringtable.xml:
                    <?xml version="1.0" encoding="UTF-8"?>
                    <Project name="NRE Earplugs">
                        <Package name="NREEarplugs">
                            <Key ID="STR_NREEP_IN_HINT">
                                <Original>You have insert the earplugs!</Original>
                                <English>You have insert the earplugs!</English>
                                <German>Du hast die Ohrstoepsel eingesteckt!</German>
                            </Key>
                            <Key ID="STR_NREEP_OUT_HINT">
                                <Original>You have removed the earplugs!</Original>
                                <English>You have removed the earplugs!</English>
                                <German>Du hast die Ohrstoepsel rausgenommen!</German>
                            </Key>
                            <Key ID="STR_NREEP_IN_ACTION">
                                <Original>Insert earplugs</Original>
                                <English>Insert earplugs</English>
                                <German>Ohrstoepsel einstecken</German>
                            </Key>
                            <Key ID="STR_NREEP_OUT_ACTION">
                                <Original>Remove earplugs</Original>
                                <English>Remove earplugs</English>
                                <German>Ohrstoepsel rausnehmen</German>
                            </Key>
                        </Package>
                    </Project>
*/
if (isDedicated) exitWith {};
waitUntil {!isNull player}; //to prevent MP / JIP issues

private ["_id"];
NreEarplugsPath = "\DPSO\3rdPartyScripts\";

if (isNil "NreEarplugsActive") then {
    NreEarplugsActive = 0;
    1 fadeSound 1;
    _id = player addAction [("<t color=""#00FF00"">" + (localize "STR_NREEP_IN_ACTION") +"</t>"),NreEarplugsPath+"NRE_earplugs.sqf","",5,false,true,"",""];
    player setVariable ["NreEarplugsAction", _id];
    player addEventHandler ["Respawn", {
        NreEarplugsActive = 0;
        1 fadeSound 1;
        _id = (_this select 1) getVariable "NreEarplugsAction";
        (_this select 1) removeAction _id;
        _id = (_this select 0) addAction [("<t color=""#00FF00"">" + (localize "STR_NREEP_IN_ACTION") +"</t>"),NreEarplugsPath+"NRE_earplugs.sqf","",5,false,true,"",""];
        (_this select 0) setVariable ["NreEarplugsAction", _id];
    }];
    breakto "firstInitFinished";
};

if ( NreEarplugsActive == 1 ) then {
    NreEarplugsActive = 0;
    1 fadeSound 1;
    hint format    [ localize "STR_NREEP_OUT_HINT" ];
    _id = player getVariable "NreEarplugsAction";
    player removeAction _id;
    _id = player addAction [("<t color=""#00FF00"">" + (localize "STR_NREEP_IN_ACTION") +"</t>"),NreEarplugsPath+"NRE_earplugs.sqf","",5,false,true,"",""];
    player setVariable ["NreEarplugsAction", _id];
} else {
    NreEarplugsActive = 1;
    1 fadeSound 0.2;
    hint format    [ localize "STR_NREEP_IN_HINT" ];
    _id = player getVariable "NreEarplugsAction";
    player removeAction _id;
    _id = player addAction [("<t color=""#FF0000"">" + (localize "STR_NREEP_OUT_ACTION") +"</t>"),NreEarplugsPath+"NRE_earplugs.sqf","",5,false,true,"",""];
    player setVariable ["NreEarplugsAction", _id];
};

scopename "firstInitFinished";
