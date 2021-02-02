/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CO2Sensor
//!	Generated Date	: Sat, 21, Nov 2020  
	File Path	: DefaultComponent\DefaultConfig\CO2Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CO2Sensor.h"
//## link itsHVACSystem
#include "HVACSystem.h"
//#[ ignore
#define Default_CO2Sensor_CO2Sensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class CO2Sensor
CO2Sensor::CO2Sensor(void) : itsHVACSystem(NULL) {
    NOTIFY_CONSTRUCTOR(CO2Sensor, CO2Sensor(), 0, Default_CO2Sensor_CO2Sensor_SERIALIZE);
}

CO2Sensor::~CO2Sensor(void) {
    NOTIFY_DESTRUCTOR(~CO2Sensor, true);
    cleanUpRelations();
}

const HVACSystem* CO2Sensor::getItsHVACSystem(void) const {
    return itsHVACSystem;
}

void CO2Sensor::setItsHVACSystem(HVACSystem* const p_HVACSystem) {
    if(p_HVACSystem != NULL)
        {
            p_HVACSystem->_setItsCO2Sensor(this);
        }
    _setItsHVACSystem(p_HVACSystem);
}

void CO2Sensor::cleanUpRelations(void) {
    if(itsHVACSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHVACSystem");
            const CO2Sensor* p_CO2Sensor = itsHVACSystem->getItsCO2Sensor();
            if(p_CO2Sensor != NULL)
                {
                    itsHVACSystem->__setItsCO2Sensor(NULL);
                }
            itsHVACSystem = NULL;
        }
}

void CO2Sensor::__setItsHVACSystem(HVACSystem* const p_HVACSystem) {
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

void CO2Sensor::_setItsHVACSystem(HVACSystem* const p_HVACSystem) {
    if(itsHVACSystem != NULL)
        {
            itsHVACSystem->__setItsCO2Sensor(NULL);
        }
    __setItsHVACSystem(p_HVACSystem);
}

void CO2Sensor::_clearItsHVACSystem(void) {
    NOTIFY_RELATION_CLEARED("itsHVACSystem");
    itsHVACSystem = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCO2Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsHVACSystem", false, true);
    if(myReal->itsHVACSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsHVACSystem);
        }
}
//#]

IMPLEMENT_META_P(CO2Sensor, Default, Default, false, OMAnimatedCO2Sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CO2Sensor.cpp
*********************************************************************/
