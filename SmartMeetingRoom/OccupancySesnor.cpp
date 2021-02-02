/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: OccupancySesnor
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\OccupancySesnor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "OccupancySesnor.h"
//## link itsUC_AirTemperatureLightControl
#include "UC_AirTemperatureLightControl.h"
//#[ ignore
#define ActorPkg_OccupancySesnor_OccupancySesnor_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor OccupancySesnor
OccupancySesnor::OccupancySesnor(void) : itsUC_AirTemperatureLightControl(NULL) {
    NOTIFY_CONSTRUCTOR(OccupancySesnor, OccupancySesnor(), 0, ActorPkg_OccupancySesnor_OccupancySesnor_SERIALIZE);
}

OccupancySesnor::~OccupancySesnor(void) {
    NOTIFY_DESTRUCTOR(~OccupancySesnor, true);
    cleanUpRelations();
}

const UC_AirTemperatureLightControl* OccupancySesnor::getItsUC_AirTemperatureLightControl(void) const {
    return itsUC_AirTemperatureLightControl;
}

void OccupancySesnor::setItsUC_AirTemperatureLightControl(UC_AirTemperatureLightControl* const p_UC_AirTemperatureLightControl) {
    if(p_UC_AirTemperatureLightControl != NULL)
        {
            p_UC_AirTemperatureLightControl->_setItsOccupancySesnor(this);
        }
    _setItsUC_AirTemperatureLightControl(p_UC_AirTemperatureLightControl);
}

void OccupancySesnor::cleanUpRelations(void) {
    if(itsUC_AirTemperatureLightControl != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_AirTemperatureLightControl");
            const OccupancySesnor* p_OccupancySesnor = itsUC_AirTemperatureLightControl->getItsOccupancySesnor();
            if(p_OccupancySesnor != NULL)
                {
                    itsUC_AirTemperatureLightControl->__setItsOccupancySesnor(NULL);
                }
            itsUC_AirTemperatureLightControl = NULL;
        }
}

void OccupancySesnor::__setItsUC_AirTemperatureLightControl(UC_AirTemperatureLightControl* const p_UC_AirTemperatureLightControl) {
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

void OccupancySesnor::_setItsUC_AirTemperatureLightControl(UC_AirTemperatureLightControl* const p_UC_AirTemperatureLightControl) {
    if(itsUC_AirTemperatureLightControl != NULL)
        {
            itsUC_AirTemperatureLightControl->__setItsOccupancySesnor(NULL);
        }
    __setItsUC_AirTemperatureLightControl(p_UC_AirTemperatureLightControl);
}

void OccupancySesnor::_clearItsUC_AirTemperatureLightControl(void) {
    NOTIFY_RELATION_CLEARED("itsUC_AirTemperatureLightControl");
    itsUC_AirTemperatureLightControl = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedOccupancySesnor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsUC_AirTemperatureLightControl", false, true);
    if(myReal->itsUC_AirTemperatureLightControl)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_AirTemperatureLightControl);
        }
}
//#]

IMPLEMENT_META_P(OccupancySesnor, ActorPkg, ActorPkg, false, OMAnimatedOccupancySesnor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\OccupancySesnor.cpp
*********************************************************************/
