class CfgMarkerColors {
    class Color_MAIN_Default {
        author = "NemesisRE";
        scope = 1;
        name = "DPSO Main";
        color[] = {1, 1, 1, 1};
    };
    class Color_RED_Default: Color_MAIN_Default {
        name = "DPSO Red";
        color[] = {0.901, 0, 0, 1};
    };
    class Color_GREEN_Default: Color_MAIN_Default {
        name = "DPSO Green";
        color[] = {0, 0.901, 0, 1};
    };
    class Color_BLUE_Default: Color_MAIN_Default {
        name = "DPSO Blue";
        color[] = {0, 0.360, 1, 1};
    };
    class Color_YELLOW_Default: Color_MAIN_Default {
        name = "DPSO Yellow";
        color[] = {0.901, 0.901, 0, 1};
    };
    // ACE Colors
    class Color_MAIN_ACE: Color_MAIN_Default {
        name = "DPSO Main (ACE)";
        color[] = {1,1,1,1};
    };
    class Color_RED_ACE: Color_MAIN_Default {
        name = "DPSO Red (ACE)";
        color[] = {1, 0.670, 0.670, 1};
    };
    class Color_GREEN_ACE: Color_MAIN_Default {
        name = "DPSO Green (ACE)";
        color[] = {0.670, 1, 0.670, 1};
    };
    class Color_BLUE_ACE: Color_MAIN_Default {
        name = "DPSO Blue (ACE)";
        color[] = {0.670, 0.670, 1, 1};
    };
    class Color_YELLOW_ACE: Color_MAIN_Default {
        name = "DPSO Yellow (ACE)";
        color[] = {1, 1, 0.670, 1};
    };
    // SThud Colors
    class Color_MAIN_STHUD: Color_MAIN_Default {
        name = "DPSO Main (STHUD)";
        color[] = {1,1,1,1};
    };
    class Color_RED_STHUD: Color_MAIN_Default {
        name = "DPSO Red (STHUD)";
        color[] = {0.901, 0, 0, 1};
    };
    class Color_GREEN_STHUD: Color_MAIN_Default {
        name = "DPSO Green (STHUD)";
        color[] = {0, 0.8, 0, 1};
    };
    class Color_BLUE_STHUD: Color_MAIN_Default {
        name = "DPSO Blue (STHUD)";
        color[] = {0.2, 0.2, 1, 1};
    };
    class Color_YELLOW_STHUD: Color_MAIN_Default {
        name = "DPSO Yellow (STHUD)";
        color[] = {0.850, 0.850, 0, 1};
    };
    // Additional Colors
    class Color_INCAPACITATED: Color_MAIN_Default {
        name = "DPSO Incapacitated";
        color[] = {0.701, 0.701, 0.701, 1};
    };
    class Color_INJURED: Color_MAIN_Default {
        name = "DPSO Injured";
        color[] = {0.858, 0.584, 0.439, 1};
    };
};
