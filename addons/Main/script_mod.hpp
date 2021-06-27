#define MAINPREFIX z
#define PREFIX DPSO
#define SUBPREFIX addons

#include "script_version.hpp"

#define VERSION MAJOR.MINOR.PATCH
#define VERSION_STR MAJOR.MINOR.PATCH
#define VERSION_AR MAJOR,MINOR,PATCH

#define AUTHOR DPSO
#define LOGO_PATH "\z\dpso\addons\media\images\logo_sm_ca.paa"

#define URL https://armadocs.purplesmoke.info/
#define NAME DPSO

// MINIMAL REQUIRED VERSIONS
// ARMA, CBA, ACE
#define REQUIRED_VERSION 2
#define REQUIRED_CBA_VERSION {3,12,2}
#define REQUIRED_ACE_VERSION {3,12,6}

#define ZEUS_ADDITIONS_TAG ZEUS_ADDITIONS

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(DPSO - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(DPSO - COMPONENT)
#endif
