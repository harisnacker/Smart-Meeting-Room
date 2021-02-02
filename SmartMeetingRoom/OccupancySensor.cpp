/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: OccupancySensor
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\OccupancySensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "OccupancySensor.h"
//#[ ignore
#define Default_OccupancySensor_OccupancySensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class OccupancySensor
OccupancySensor::OccupancySensor(void) {
    NOTIFY_CONSTRUCTOR(OccupancySensor, OccupancySensor(), 0, Default_OccupancySensor_OccupancySensor_SERIALIZE);
}

OccupancySensor::~OccupancySensor(void) {
    NOTIFY_DESTRUCTOR(~OccupancySensor, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(OccupancySensor, Default, Default, false, OMAnimatedOccupancySensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\OccupancySensor.cpp
*********************************************************************/
