/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: LightingSystem
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\LightingSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "LightingSystem.h"
//#[ ignore
#define Default_LightingSystem_LightingSystem_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class LightingSystem
LightingSystem::LightingSystem(void) {
    NOTIFY_CONSTRUCTOR(LightingSystem, LightingSystem(), 0, Default_LightingSystem_LightingSystem_SERIALIZE);
}

LightingSystem::~LightingSystem(void) {
    NOTIFY_DESTRUCTOR(~LightingSystem, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(LightingSystem, Default, Default, false, OMAnimatedLightingSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\LightingSystem.cpp
*********************************************************************/
