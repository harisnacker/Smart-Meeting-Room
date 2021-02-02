/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TemperatureSensor
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\TemperatureSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TemperatureSensor.h"
//## link itsHVACSystem
#include "HVACSystem.h"
//#[ ignore
#define Default_TemperatureSensor_TemperatureSensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class TemperatureSensor
TemperatureSensor::TemperatureSensor(void) : itsHVACSystem(NULL) {
    NOTIFY_CONSTRUCTOR(TemperatureSensor, TemperatureSensor(), 0, Default_TemperatureSensor_TemperatureSensor_SERIALIZE);
}

TemperatureSensor::~TemperatureSensor(void) {
    NOTIFY_DESTRUCTOR(~TemperatureSensor, true);
    cleanUpRelations();
}

const HVACSystem* TemperatureSensor::getItsHVACSystem(void) const {
    return itsHVACSystem;
}

void TemperatureSensor::setItsHVACSystem(HVACSystem* const p_HVACSystem) {
    if(p_HVACSystem != NULL)
        {
            p_HVACSystem->_setItsTemperatureSensor(this);
        }
    _setItsHVACSystem(p_HVACSystem);
}

void TemperatureSensor::cleanUpRelations(void) {
    if(itsHVACSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHVACSystem");
            const TemperatureSensor* p_TemperatureSensor = itsHVACSystem->getItsTemperatureSensor();
            if(p_TemperatureSensor != NULL)
                {
                    itsHVACSystem->__setItsTemperatureSensor(NULL);
                }
            itsHVACSystem = NULL;
        }
}

void TemperatureSensor::__setItsHVACSystem(HVACSystem* const p_HVACSystem) {
    itsHVACSystem = p_HVACSystem;
    if(p_HVACSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsHVACSystem", p_HVACSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsHVACSystem");
        }
}

void TemperatureSensor::_setItsHVACSystem(HVACSystem* const p_HVACSystem) {
    if(itsHVACSystem != NULL)
        {
            itsHVACSystem->__setItsTemperatureSensor(NULL);
        }
    __setItsHVACSystem(p_HVACSystem);
}

void TemperatureSensor::_clearItsHVACSystem(void) {
    NOTIFY_RELATION_CLEARED("itsHVACSystem");
    itsHVACSystem = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTemperatureSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsHVACSystem", false, true);
    if(myReal->itsHVACSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsHVACSystem);
        }
}
//#]

IMPLEMENT_META_P(TemperatureSensor, Default, Default, false, OMAnimatedTemperatureSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TemperatureSensor.cpp
*********************************************************************/
