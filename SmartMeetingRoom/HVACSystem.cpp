/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HVACSystem
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\HVACSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "HVACSystem.h"
//## link itsCO2Sensor
#include "CO2Sensor.h"
//## link itsTemperatureSensor
#include "TemperatureSensor.h"
//#[ ignore
#define Default_HVACSystem_HVACSystem_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class HVACSystem
HVACSystem::HVACSystem(void) : itsCO2Sensor(NULL), itsTemperatureSensor(NULL) {
    NOTIFY_CONSTRUCTOR(HVACSystem, HVACSystem(), 0, Default_HVACSystem_HVACSystem_SERIALIZE);
}

HVACSystem::~HVACSystem(void) {
    NOTIFY_DESTRUCTOR(~HVACSystem, true);
    cleanUpRelations();
}

const CO2Sensor* HVACSystem::getItsCO2Sensor(void) const {
    return itsCO2Sensor;
}

void HVACSystem::setItsCO2Sensor(CO2Sensor* const p_CO2Sensor) {
    if(p_CO2Sensor != NULL)
        {
            p_CO2Sensor->_setItsHVACSystem(this);
        }
    _setItsCO2Sensor(p_CO2Sensor);
}

const TemperatureSensor* HVACSystem::getItsTemperatureSensor(void) const {
    return itsTemperatureSensor;
}

void HVACSystem::setItsTemperatureSensor(TemperatureSensor* const p_TemperatureSensor) {
    if(p_TemperatureSensor != NULL)
        {
            p_TemperatureSensor->_setItsHVACSystem(this);
        }
    _setItsTemperatureSensor(p_TemperatureSensor);
}

void HVACSystem::cleanUpRelations(void) {
    if(itsCO2Sensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCO2Sensor");
            const HVACSystem* p_HVACSystem = itsCO2Sensor->getItsHVACSystem();
            if(p_HVACSystem != NULL)
                {
                    itsCO2Sensor->__setItsHVACSystem(NULL);
                }
            itsCO2Sensor = NULL;
        }
    if(itsTemperatureSensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTemperatureSensor");
            const HVACSystem* p_HVACSystem = itsTemperatureSensor->getItsHVACSystem();
            if(p_HVACSystem != NULL)
                {
                    itsTemperatureSensor->__setItsHVACSystem(NULL);
                }
            itsTemperatureSensor = NULL;
        }
}

void HVACSystem::__setItsCO2Sensor(CO2Sensor* const p_CO2Sensor) {
    itsCO2Sensor = p_CO2Sensor;
    if(p_CO2Sensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCO2Sensor", p_CO2Sensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCO2Sensor");
        }
}

void HVACSystem::_setItsCO2Sensor(CO2Sensor* const p_CO2Sensor) {
    if(itsCO2Sensor != NULL)
        {
            itsCO2Sensor->__setItsHVACSystem(NULL);
        }
    __setItsCO2Sensor(p_CO2Sensor);
}

void HVACSystem::_clearItsCO2Sensor(void) {
    NOTIFY_RELATION_CLEARED("itsCO2Sensor");
    itsCO2Sensor = NULL;
}

void HVACSystem::__setItsTemperatureSensor(TemperatureSensor* const p_TemperatureSensor) {
    itsTemperatureSensor = p_TemperatureSensor;
    if(p_TemperatureSensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTemperatureSensor", p_TemperatureSensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTemperatureSensor");
        }
}

void HVACSystem::_setItsTemperatureSensor(TemperatureSensor* const p_TemperatureSensor) {
    if(itsTemperatureSensor != NULL)
        {
            itsTemperatureSensor->__setItsHVACSystem(NULL);
        }
    __setItsTemperatureSensor(p_TemperatureSensor);
}

void HVACSystem::_clearItsTemperatureSensor(void) {
    NOTIFY_RELATION_CLEARED("itsTemperatureSensor");
    itsTemperatureSensor = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedHVACSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTemperatureSensor", false, true);
    if(myReal->itsTemperatureSensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsTemperatureSensor);
        }
    aomsRelations->addRelation("itsCO2Sensor", false, true);
    if(myReal->itsCO2Sensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsCO2Sensor);
        }
}
//#]

IMPLEMENT_META_P(HVACSystem, Default, Default, false, OMAnimatedHVACSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HVACSystem.cpp
*********************************************************************/
