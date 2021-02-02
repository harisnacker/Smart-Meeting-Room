/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MotionSensor
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\MotionSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "MotionSensor.h"
//#[ ignore
#define Default_MotionSensor_MotionSensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class MotionSensor
MotionSensor::MotionSensor(void) {
    NOTIFY_CONSTRUCTOR(MotionSensor, MotionSensor(), 0, Default_MotionSensor_MotionSensor_SERIALIZE);
}

MotionSensor::~MotionSensor(void) {
    NOTIFY_DESTRUCTOR(~MotionSensor, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(MotionSensor, Default, Default, false, OMAnimatedMotionSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MotionSensor.cpp
*********************************************************************/
