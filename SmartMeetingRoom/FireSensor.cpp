/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: FireSensor
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\FireSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "FireSensor.h"
//## link itsSafetySystem
#include "SafetySystem.h"
//#[ ignore
#define Default_FireSensor_FireSensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class FireSensor
FireSensor::FireSensor(void) : itsSafetySystem(NULL) {
    NOTIFY_CONSTRUCTOR(FireSensor, FireSensor(), 0, Default_FireSensor_FireSensor_SERIALIZE);
}

FireSensor::~FireSensor(void) {
    NOTIFY_DESTRUCTOR(~FireSensor, true);
    cleanUpRelations();
}

const SafetySystem* FireSensor::getItsSafetySystem(void) const {
    return itsSafetySystem;
}

void FireSensor::setItsSafetySystem(SafetySystem* const p_SafetySystem) {
    if(p_SafetySystem != NULL)
        {
            p_SafetySystem->_setItsFireSensor_1(this);
        }
    _setItsSafetySystem(p_SafetySystem);
}

void FireSensor::cleanUpRelations(void) {
    if(itsSafetySystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSafetySystem");
            const FireSensor* p_FireSensor = itsSafetySystem->getItsFireSensor_1();
            if(p_FireSensor != NULL)
                {
                    itsSafetySystem->__setItsFireSensor_1(NULL);
                }
            itsSafetySystem = NULL;
        }
}

void FireSensor::__setItsSafetySystem(SafetySystem* const p_SafetySystem) {
    itsSafetySystem = p_SafetySystem;
    if(p_SafetySystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSafetySystem", p_SafetySystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSafetySystem");
        }
}

void FireSensor::_setItsSafetySystem(SafetySystem* const p_SafetySystem) {
    if(itsSafetySystem != NULL)
        {
            itsSafetySystem->__setItsFireSensor_1(NULL);
        }
    __setItsSafetySystem(p_SafetySystem);
}

void FireSensor::_clearItsSafetySystem(void) {
    NOTIFY_RELATION_CLEARED("itsSafetySystem");
    itsSafetySystem = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedFireSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSafetySystem", false, true);
    if(myReal->itsSafetySystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsSafetySystem);
        }
}
//#]

IMPLEMENT_META_P(FireSensor, Default, Default, false, OMAnimatedFireSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\FireSensor.cpp
*********************************************************************/
