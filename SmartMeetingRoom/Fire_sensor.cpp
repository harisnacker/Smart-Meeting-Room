/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Fire_sensor
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Fire_sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Fire_sensor.h"
//#[ ignore
#define ActorPkg_Fire_sensor_Fire_sensor_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor Fire_sensor
Fire_sensor::Fire_sensor(void) {
    NOTIFY_CONSTRUCTOR(Fire_sensor, Fire_sensor(), 0, ActorPkg_Fire_sensor_Fire_sensor_SERIALIZE);
}

Fire_sensor::~Fire_sensor(void) {
    NOTIFY_DESTRUCTOR(~Fire_sensor, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedFire_sensor::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Fire_sensor, ActorPkg, ActorPkg, false, OMAnimatedFire_sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Fire_sensor.cpp
*********************************************************************/
