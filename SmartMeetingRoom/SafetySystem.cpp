/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SafetySystem
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\SafetySystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SafetySystem.h"
//## link itsFireSensor_1
#include "FireSensor.h"
//#[ ignore
#define Default_SafetySystem_SafetySystem_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class SafetySystem
SafetySystem::SafetySystem(void) : itsFireSensor_1(NULL) {
    NOTIFY_CONSTRUCTOR(SafetySystem, SafetySystem(), 0, Default_SafetySystem_SafetySystem_SERIALIZE);
}

SafetySystem::~SafetySystem(void) {
    NOTIFY_DESTRUCTOR(~SafetySystem, true);
    cleanUpRelations();
}

const FireSensor* SafetySystem::getItsFireSensor_1(void) const {
    return itsFireSensor_1;
}

void SafetySystem::setItsFireSensor_1(FireSensor* const p_FireSensor) {
    if(p_FireSensor != NULL)
        {
            p_FireSensor->_setItsSafetySystem(this);
        }
    _setItsFireSensor_1(p_FireSensor);
}

void SafetySystem::cleanUpRelations(void) {
    if(itsFireSensor_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsFireSensor_1");
            const SafetySystem* p_SafetySystem = itsFireSensor_1->getItsSafetySystem();
            if(p_SafetySystem != NULL)
                {
                    itsFireSensor_1->__setItsSafetySystem(NULL);
                }
            itsFireSensor_1 = NULL;
        }
}

void SafetySystem::__setItsFireSensor_1(FireSensor* const p_FireSensor) {
    itsFireSensor_1 = p_FireSensor;
    if(p_FireSensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsFireSensor_1", p_FireSensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsFireSensor_1");
        }
}

void SafetySystem::_setItsFireSensor_1(FireSensor* const p_FireSensor) {
    if(itsFireSensor_1 != NULL)
        {
            itsFireSensor_1->__setItsSafetySystem(NULL);
        }
    __setItsFireSensor_1(p_FireSensor);
}

void SafetySystem::_clearItsFireSensor_1(void) {
    NOTIFY_RELATION_CLEARED("itsFireSensor_1");
    itsFireSensor_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSafetySystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsFireSensor_1", false, true);
    if(myReal->itsFireSensor_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsFireSensor_1);
        }
}
//#]

IMPLEMENT_META_P(SafetySystem, Default, Default, false, OMAnimatedSafetySystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SafetySystem.cpp
*********************************************************************/
