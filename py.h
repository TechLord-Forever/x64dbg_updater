#ifndef _PY_H
#define _PY_H

#include "pluginmain.h"

extern HINSTANCE hInst;

//menu identifiers
#define MENU_UPDATER 0 //edit this

//functions
void pyInit(PLUG_INITSTRUCT* initStruct);
void pyStop();
void pySetup();

#endif // _PY_H
