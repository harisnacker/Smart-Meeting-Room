/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Lighting_System
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Lighting_System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Lighting_System.h"
//## link itsUC_AirTemperatureLightControl
#include "UC_AirTemperatureLightControl.h"
//#[ ignore
#define ActorPkg_Lighting_System_Lighting_System_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor Lighting_System
Lighting_System::Lighting_System(void) : itsUC_AirTemperatureLightControl(NULL) {
    NOTIFY_CONSTRUCTOR(Lighting_System, Lighting_System(), 0, ActorPkg_Lighting_System_Lighting_System_SERIALIZE);
}

Lighting_System::~Lighting_System(void) {
    NOTIFY_DESTRUCTOR(~Lighting_System, true);
    cleanUpRelations();
}

const UC_AirTemperatureLightControl* Lighting_System::getItsUC_AirTemperatureLightControl(void) const {
    return itsUC_AirTemperatureLightControl;
}

void Lighting_System::setItsUC_AirTemperatureLightControl(UC_AirTemperatureLightControl* const p_UC_AirTemperatureLightControl) {
    if(p_UC_AirTemperatureLightControl != NULL)
        {
            p_UC_AirTemperatureLightControl->_setItsLighting_System(this);
        }
    _setItsUC_AirTemperatureLightControl(p_UC_AirTemperatureLightControl);
}

void Lighting_System::cleanUpRelations(void) {
    if(itsUC_AirTemperatureLightControl != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_AirTemperatureLightControl");
            const Lighting_System* p_Lighting_System = itsUC_AirTemperatureLightControl->getItsLighting_System();
            if(p_Lighting_System != NULL)
                {
                    itsUC_AirTemperatureLightControl->__setItsLighting_System(NULL);
                }
            itsUC_AirTemperatureLightControl = NULL;
        }
}

void Lighting_System::__setItsUC_AirTemperatureLightControl(UC_AirTemperatureLightControl* const p_UC_AirTemperatureLightControl) {
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

void Lighting_System::_setItsUC_AirTemperatureLightControl(UC_AirTemperatureLightControl* const p_UC_AirTemperatureLightControl) {
    if(itsUC_AirTemperatureLightControl != NULL)
        {
            itsUC_AirTemperatureLightControl->__setItsLighting_System(NULL);
        }
    __setItsUC_AirTemperatureLightControl(p_UC_AirTemperatureLightControl);
}

void Lighting_System::_clearItsUC_AirTemperatureLightControl(void) {
    NOTIFY_RELATION_CLEARED("itsUC_AirTemperatureLightControl");
    itsUC_AirTemperatureLightControl = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLighting_System::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsUC_AirTemperatureLightControl", false, true);
    if(myReal->itsUC_AirTemperatureLightControl)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_AirTemperatureLightControl);
        }
}
//#]

IMPLEMENT_META_P(Lighting_System, ActorPkg, ActorPkg, false, OMAnimatedLighting_System)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Lighting_System.cpp
*********************************************************************/
