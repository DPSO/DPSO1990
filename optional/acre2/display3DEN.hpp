class ctrlMenuStrip;
class display3DEN
{
    class Controls
    {
        class MenuStrip : ctrlMenuStrip
        {
            class Items
            {
                class DPSO_Folder {
                    items[] += {"DPSO_ACRE2"};
                };
                class DPSO_ACRE2
                {
                    text = "DPSO ACRE2 Settings";
                    action = "edit3DENMissionAttributes 'DPSO_MissionAcre2Attributes';";
                    //picture = "\z\dpso\addons\media\images\Icons\icon_gear_ca";
                };
            };
        };
    };
};