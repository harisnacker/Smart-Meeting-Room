/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HVAC_SYSTEM
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\HVAC_SYSTEM.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "HVAC_SYSTEM.h"
//## link itsCO2_SENSOR
#include "CO2_SENSOR.h"
//## link itsUC_AirTemperatureLightControl
#include "UC_AirTemperatureLightControl.h"
//#[ ignore
#define ActorPkg_HVAC_SYSTEM_HVAC_SYSTEM_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor HVAC_SYSTEM
HVAC_SYSTEM::HVAC_SYSTEM(void) : itsCO2_SENSOR(NULL), itsHVAC_SYSTEM(NULL), itsHVAC_SYSTEM_1(NULL), itsUC_AirTemperatureLightControl(NULL) {
    NOTIFY_CONSTRUCTOR(HVAC_SYSTEM, HVAC_SYSTEM(), 0, ActorPkg_HVAC_SYSTEM_HVAC_SYSTEM_SERIALIZE);
}

HVAC_SYSTEM::~HVAC_SYSTEM(void) {
    NOTIFY_DESTRUCTOR(~HVAC_SYSTEM, true);
    cleanUpRelations();
}

const CO2_SENSOR* HVAC_SYSTEM::getItsCO2_SENSOR(void) const {
    return itsCO2_SENSOR;
}

void HVAC_SYSTEM::setItsCO2_SENSOR(CO2_SENSOR* const p_CO2_SENSOR) {
    if(p_CO2_SENSOR != NULL)
        {
            p_CO2_SENSOR->_setItsHVAC_SYSTEM(this);
        }
    _setItsCO2_SENSOR(p_CO2_SENSOR);
}

const HVAC_SYSTEM* HVAC_SYSTEM::getItsHVAC_SYSTEM(void) const {
    return itsHVAC_SYSTEM;
}

void HVAC_SYSTEM::setItsHVAC_SYSTEM(HVAC_SYSTEM* const p_HVAC_SYSTEM) {
    if(p_HVAC_SYSTEM != NULL)
        {
            p_HVAC_SYSTEM->_setItsHVAC_SYSTEM_1(this);
        }
    _setItsHVAC_SYSTEM(p_HVAC_SYSTEM);
}

const HVAC_SYSTEM* HVAC_SYSTEM::getItsHVAC_SYSTEM_1(void) const {
    return itsHVAC_SYSTEM_1;
}

void HVAC_SYSTEM::setItsHVAC_SYSTEM_1(HVAC_SYSTEM* const p_HVAC_SYSTEM) {
    if(p_HVAC_SYSTEM != NULL)
        {
            p_HVAC_SYSTEM->_setItsHVAC_SYSTEM(this);
        }
    _setItsHVAC_SYSTEM_1(p_HVAC_SYSTEM);
}

const UC_AirTemperatureLightControl* HVAC_SYSTEM::getItsUC_AirTemperatureLightControl(void) const {
    return itsUC_AirTemperatureLightControl;
}

void HVAC_SYSTEM::setItsUC_AirTemperatureLightControl(UC_AirTemperatureLightControl* const p_UC_AirTemperatureLightControl) {
    if(p_UC_AirTemperatureLightControl != NULL)
        {
            p_UC_AirTemperatureLightControl->_setItsHVAC_SYSTEM(this);
        }
    _setItsUC_AirTemperatureLightControl(p_UC_AirTemperatureLightControl);
}

void HVAC_SYSTEM::cleanUpRelations(void) {
    if(itsCO2_SENSOR != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCO2_SENSOR");
            const HVAC_SYSTEM* p_HVAC_SYSTEM = itsCO2_SENSOR->getItsHVAC_SYSTEM();
            if(p_HVAC_SYSTEM != NULL)
                {
                    itsCO2_SENSOR->__setItsHVAC_SYSTEM(NULL);
                }
            itsCO2_SENSOR = NULL;
        }
    if(itsHVAC_SYSTEM != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHVAC_SYSTEM");
            const HVAC_SYSTEM* p_HVAC_SYSTEM = itsHVAC_SYSTEM->getItsHVAC_SYSTEM_1();
            if(p_HVAC_SYSTEM != NULL)
                {
                    itsHVAC_SYSTEM->__setItsHVAC_SYSTEM_1(NULL);
                }
            itsHVAC_SYSTEM = NULL;
        }
    if(itsHVAC_SYSTEM_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHVAC_SYSTEM_1");
            const HVAC_SYSTEM* p_HVAC_SYSTEM = itsHVAC_SYSTEM_1->getItsHVAC_SYSTEM();
            if(p_HVAC_SYSTEM != NULL)
                {
                    itsHVAC_SYSTEM_1->__setItsHVAC_SYSTEM(NULL);
                }
            itsHVAC_SYSTEM_1 = NULL;
        }
    if(itsUC_AirTemperatureLightControl != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_AirTemperatureLightControl");
            const HVAC_SYSTEM* p_HVAC_SYSTEM = itsUC_AirTemperatureLightControl->getItsHVAC_SYSTEM();
            if(p_HVAC_SYSTEM != NULL)
                {
                    itsUC_AirTemperatureLightControl->__setItsHVAC_SYSTEM(NULL);
                }
            itsUC_AirTemperatureLightControl = NULL;
        }
}

void HVAC_SYSTEM::__setItsCO2_SENSOR(CO2_SENSOR* const p_CO2_SENSOR) {
    itsCO2_SENSOR = p_CO2_SENSOR;
    if(p_CO2_SENSOR != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCO2_SENSOR", p_CO2_SENSOR, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCO2_SENSOR");
        }
}

void HVAC_SYSTEM::_setItsCO2_SENSOR(CO2_SENSOR* const p_CO2_SENSOR) {
    if(itsCO2_SENSOR != NULL)
        {
            itsCO2_SENSOR->__setItsHVAC_SYSTEM(NULL);
        }
    __setItsCO2_SENSOR(p_CO2_SENSOR);
}

void HVAC_SYSTEM::_clearItsCO2_SENSOR(void) {
    NOTIFY_RELATION_CLEARED("itsCO2_SENSOR");
    itsCO2_SENSOR = NULL;
}

void HVAC_SYSTEM::__setItsHVAC_SYSTEM(HVAC_SYSTEM* const p_HVAC_SYSTEM) {
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

void HVAC_SYSTEM::_setItsHVAC_SYSTEM(HVAC_SYSTEM* const p_HVAC_SYSTEM) {
    if(itsHVAC_SYSTEM != NULL)
        {
            itsHVAC_SYSTEM->__setItsHVAC_SYSTEM_1(NULL);
        }
    __setItsHVAC_SYSTEM(p_HVAC_SYSTEM);
}

void HVAC_SYSTEM::_clearItsHVAC_SYSTEM(void) {
    NOTIFY_RELATION_CLEARED("itsHVAC_SYSTEM");
    itsHVAC_SYSTEM = NULL;
}

void HVAC_SYSTEM::__setItsHVAC_SYSTEM_1(HVAC_SYSTEM* const p_HVAC_SYSTEM) {
    itsHVAC_SYSTEM_1 = p_HVAC_SYSTEM;
    if(p_HVAC_SYSTEM != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsHVAC_SYSTEM_1", p_HVAC_SYSTEM, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsHVAC_SYSTEM_1");
        }
}

void HVAC_SYSTEM::_setItsHVAC_SYSTEM_1(HVAC_SYSTEM* const p_HVAC_SYSTEM) {
    if(itsHVAC_SYSTEM_1 != NULL)
        {
            itsHVAC_SYSTEM_1->__setItsHVAC_SYSTEM(NULL);
        }
    __setItsHVAC_SYSTEM_1(p_HVAC_SYSTEM);
}

void HVAC_SYSTEM::_clearItsHVAC_SYSTEM_1(void) {
    NOTIFY_RELATION_CLEARED("itsHVAC_SYSTEM_1");
    itsHVAC_SYSTEM_1 = NULL;
}

void HVAC_SYSTEM::__setItsUC_AirTemperatureLightControl(UC_AirTemperatureLightControl* const p_UC_AirTemperatureLightControl) {
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

void HVAC_SYSTEM::_setItsUC_AirTemperatureLightControl(UC_AirTemperatureLightControl* const p_UC_AirTemperatureLightControl) {
    if(itsUC_AirTemperatureLightControl != NULL)
        {
            itsUC_AirTemperatureLightControl->__setItsHVAC_SYSTEM(NULL);
        }
    __setItsUC_AirTemperatureLightControl(p_UC_AirTemperatureLightControl);
}

void HVAC_SYSTEM::_clearItsUC_AirTemperatureLightControl(void) {
    NOTIFY_RELATION_CLEARED("itsUC_AirTemperatureLightControl");
    itsUC_AirTemperatureLightControl = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedHVAC_SYSTEM::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsHVAC_SYSTEM", false, true);
    if(myReal->itsHVAC_SYSTEM)
        {
            aomsRelations->ADD_ITEM(myReal->itsHVAC_SYSTEM);
        }
    aomsRelations->addRelation("itsHVAC_SYSTEM_1", false, true);
    if(myReal->itsHVAC_SYSTEM_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsHVAC_SYSTEM_1);
        }
    aomsRelations->addRelation("itsCO2_SENSOR", false, true);
    if(myReal->itsCO2_SENSOR)
        {
            aomsRelations->ADD_ITEM(myReal->itsCO2_SENSOR);
        }
    aomsRelations->addRelation("itsUC_AirTemperatureLightControl", false, true);
    if(myReal->itsUC_AirTemperatureLightControl)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_AirTemperatureLightControl);
        }
}
//#]

IMPLEMENT_META_P(HVAC_SYSTEM, ActorPkg, ActorPkg, false, OMAnimatedHVAC_SYSTEM)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HVAC_SYSTEM.cpp
*********************************************************************/
