/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorSystem
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\SensorSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SensorSystem.h"
//#[ ignore
#define Default_SensorSystem_SensorSystem_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class SensorSystem
SensorSystem::SensorSystem(void) {
    NOTIFY_CONSTRUCTOR(SensorSystem, SensorSystem(), 0, Default_SensorSystem_SensorSystem_SERIALIZE);
}

SensorSystem::~SensorSystem(void) {
    NOTIFY_DESTRUCTOR(~SensorSystem, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(SensorSystem, Default, Default, false, OMAnimatedSensorSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorSystem.cpp
*********************************************************************/
