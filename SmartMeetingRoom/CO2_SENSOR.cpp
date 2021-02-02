/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CO2_SENSOR
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\CO2_SENSOR.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CO2_SENSOR.h"
//## link itsHVAC_SYSTEM
#include "HVAC_SYSTEM.h"
//## link itsUC_AirTemperatureLightControl
#include "UC_AirTemperatureLightControl.h"
//#[ ignore
#define ActorPkg_CO2_SENSOR_CO2_SENSOR_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor CO2_SENSOR
CO2_SENSOR::CO2_SENSOR(void) : itsHVAC_SYSTEM(NULL), itsUC_AirTemperatureLightControl(NULL) {
    NOTIFY_CONSTRUCTOR(CO2_SENSOR, CO2_SENSOR(), 0, ActorPkg_CO2_SENSOR_CO2_SENSOR_SERIALIZE);
}

CO2_SENSOR::~CO2_SENSOR(void) {
    NOTIFY_DESTRUCTOR(~CO2_SENSOR, true);
    cleanUpRelations();
}

const HVAC_SYSTEM* CO2_SENSOR::getItsHVAC_SYSTEM(void) const {
    return itsHVAC_SYSTEM;
}

void CO2_SENSOR::setItsHVAC_SYSTEM(HVAC_SYSTEM* const p_HVAC_SYSTEM) {
    if(p_HVAC_SYSTEM != NULL)
        {
            p_HVAC_SYSTEM->_setItsCO2_SENSOR(this);
        }
    _setItsHVAC_SYSTEM(p_HVAC_SYSTEM);
}

const UC_AirTemperatureLightControl* CO2_SENSOR::getItsUC_AirTemperatureLightControl(void) const {
    return itsUC_AirTemperatureLightControl;
}

void CO2_SENSOR::setItsUC_AirTemperatureLightControl(UC_AirTemperatureLightControl* const p_UC_AirTemperatureLightControl) {
    if(p_UC_AirTemperatureLightControl != NULL)
        {
            p_UC_AirTemperatureLightControl->_setItsCO2_SENSOR(this);
        }
    _setItsUC_AirTemperatureLightControl(p_UC_AirTemperatureLightControl);
}

void CO2_SENSOR::cleanUpRelations(void) {
    if(itsHVAC_SYSTEM != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHVAC_SYSTEM");
            const CO2_SENSOR* p_CO2_SENSOR = itsHVAC_SYSTEM->getItsCO2_SENSOR();
            if(p_CO2_SENSOR != NULL)
                {
                    itsHVAC_SYSTEM->__setItsCO2_SENSOR(NULL);
                }
            itsHVAC_SYSTEM = NULL;
        }
    if(itsUC_AirTemperatureLightControl != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_AirTemperatureLightControl");
            const CO2_SENSOR* p_CO2_SENSOR = itsUC_AirTemperatureLightControl->getItsCO2_SENSOR();
            if(p_CO2_SENSOR != NULL)
                {
                    itsUC_AirTemperatureLightControl->__setItsCO2_SENSOR(NULL);
                }
            itsUC_AirTemperatureLightControl = NULL;
        }
}

void CO2_SENSOR::__setItsHVAC_SYSTEM(HVAC_SYSTEM* const p_HVAC_SYSTEM) {
    itsHVAC_SYSTEM = p_HVAC_SYSTEM;
    if(p_HVAC_SYSTEM != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsHVAC_SYSTEM", p_HVAC_SYSTEM, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsHVAC_SYSTEM");
        }
}

void CO2_SENSOR::_setItsHVAC_SYSTEM(HVAC_SYSTEM* const p_HVAC_SYSTEM) {
    if(itsHVAC_SYSTEM != NULL)
        {
            itsHVAC_SYSTEM->__setItsCO2_SENSOR(NULL);
        }
    __setItsHVAC_SYSTEM(p_HVAC_SYSTEM);
}

void CO2_SENSOR::_clearItsHVAC_SYSTEM(void) {
    NOTIFY_RELATION_CLEARED("itsHVAC_SYSTEM");
    itsHVAC_SYSTEM = NULL;
}

void CO2_SENSOR::__setItsUC_AirTemperatureLightControl(UC_AirTemperatureLightControl* const p_UC_AirTemperatureLightControl) {
    itsUC_AirTemperatureLightControl = p_UC_AirTemperatureLightControl;
    if(p_UC_AirTemperatureLightControl != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUC_AirTemperatureLightControl", p_UC_AirTemperatureLightControl, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUC_AirTemperatureLightControl");
        }
}

void CO2_SENSOR::_setItsUC_AirTemperatureLightControl(UC_AirTemperatureLightControl* const p_UC_AirTemperatureLightControl) {
    if(itsUC_AirTemperatureLightControl != NULL)
        {
            itsUC_AirTemperatureLightControl->__setItsCO2_SENSOR(NULL);
        }
    __setItsUC_AirTemperatureLightControl(p_UC_AirTemperatureLightControl);
}

void CO2_SENSOR::_clearItsUC_AirTemperatureLightControl(void) {
    NOTIFY_RELATION_CLEARED("itsUC_AirTemperatureLightControl");
    itsUC_AirTemperatureLightControl = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCO2_SENSOR::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsHVAC_SYSTEM", false, true);
    if(myReal->itsHVAC_SYSTEM)
        {
            aomsRelations->ADD_ITEM(myReal->itsHVAC_SYSTEM);
        }
    aomsRelations->addRelation("itsUC_AirTemperatureLightControl", false, true);
    if(myReal->itsUC_AirTemperatureLightControl)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_AirTemperatureLightControl);
        }
}
//#]

IMPLEMENT_META_P(CO2_SENSOR, ActorPkg, ActorPkg, false, OMAnimatedCO2_SENSOR)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CO2_SENSOR.cpp
*********************************************************************/
