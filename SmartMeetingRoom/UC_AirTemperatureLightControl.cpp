/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_AirTemperatureLightControl
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\UC_AirTemperatureLightControl.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UC_AirTemperatureLightControl.h"
//## link itsCO2_SENSOR
#include "CO2_SENSOR.h"
//## link itsHVAC_SYSTEM
#include "HVAC_SYSTEM.h"
//## link itsLighting_System
#include "Lighting_System.h"
//## link itsOccupancySesnor
#include "OccupancySesnor.h"
//#[ ignore
#define UseCaseAnalysisPkg_AirTemperatureLightPkg_UC_AirTemperatureLightControl_UC_AirTemperatureLightControl_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::AirTemperatureLightPkg

//## class UC_AirTemperatureLightControl
UC_AirTemperatureLightControl::UC_AirTemperatureLightControl(void) : itsCO2_SENSOR(NULL), itsHVAC_SYSTEM(NULL), itsLighting_System(NULL), itsOccupancySesnor(NULL) {
    NOTIFY_ACTIVITY_CONSTRUCTOR(UC_AirTemperatureLightControl, UC_AirTemperatureLightControl(), 0, UseCaseAnalysisPkg_AirTemperatureLightPkg_UC_AirTemperatureLightControl_UC_AirTemperatureLightControl_SERIALIZE);
}

UC_AirTemperatureLightControl::~UC_AirTemperatureLightControl(void) {
    NOTIFY_DESTRUCTOR(~UC_AirTemperatureLightControl, true);
    cleanUpRelations();
}

const CO2_SENSOR* UC_AirTemperatureLightControl::getItsCO2_SENSOR(void) const {
    return itsCO2_SENSOR;
}

void UC_AirTemperatureLightControl::setItsCO2_SENSOR(CO2_SENSOR* const p_CO2_SENSOR) {
    if(p_CO2_SENSOR != NULL)
        {
            p_CO2_SENSOR->_setItsUC_AirTemperatureLightControl(this);
        }
    _setItsCO2_SENSOR(p_CO2_SENSOR);
}

const HVAC_SYSTEM* UC_AirTemperatureLightControl::getItsHVAC_SYSTEM(void) const {
    return itsHVAC_SYSTEM;
}

void UC_AirTemperatureLightControl::setItsHVAC_SYSTEM(HVAC_SYSTEM* const p_HVAC_SYSTEM) {
    if(p_HVAC_SYSTEM != NULL)
        {
            p_HVAC_SYSTEM->_setItsUC_AirTemperatureLightControl(this);
        }
    _setItsHVAC_SYSTEM(p_HVAC_SYSTEM);
}

const Lighting_System* UC_AirTemperatureLightControl::getItsLighting_System(void) const {
    return itsLighting_System;
}

void UC_AirTemperatureLightControl::setItsLighting_System(Lighting_System* const p_Lighting_System) {
    if(p_Lighting_System != NULL)
        {
            p_Lighting_System->_setItsUC_AirTemperatureLightControl(this);
        }
    _setItsLighting_System(p_Lighting_System);
}

const OccupancySesnor* UC_AirTemperatureLightControl::getItsOccupancySesnor(void) const {
    return itsOccupancySesnor;
}

void UC_AirTemperatureLightControl::setItsOccupancySesnor(OccupancySesnor* const p_OccupancySesnor) {
    if(p_OccupancySesnor != NULL)
        {
            p_OccupancySesnor->_setItsUC_AirTemperatureLightControl(this);
        }
    _setItsOccupancySesnor(p_OccupancySesnor);
}

bool UC_AirTemperatureLightControl::startBehavior(void) {
    bool done = false;
    done = OMActivityContext::startBehavior();
    return done;
}

void UC_AirTemperatureLightControl::cleanUpRelations(void) {
    if(itsCO2_SENSOR != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCO2_SENSOR");
            const UC_AirTemperatureLightControl* p_UC_AirTemperatureLightControl = itsCO2_SENSOR->getItsUC_AirTemperatureLightControl();
            if(p_UC_AirTemperatureLightControl != NULL)
                {
                    itsCO2_SENSOR->__setItsUC_AirTemperatureLightControl(NULL);
                }
            itsCO2_SENSOR = NULL;
        }
    if(itsHVAC_SYSTEM != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHVAC_SYSTEM");
            const UC_AirTemperatureLightControl* p_UC_AirTemperatureLightControl = itsHVAC_SYSTEM->getItsUC_AirTemperatureLightControl();
            if(p_UC_AirTemperatureLightControl != NULL)
                {
                    itsHVAC_SYSTEM->__setItsUC_AirTemperatureLightControl(NULL);
                }
            itsHVAC_SYSTEM = NULL;
        }
    if(itsLighting_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLighting_System");
            const UC_AirTemperatureLightControl* p_UC_AirTemperatureLightControl = itsLighting_System->getItsUC_AirTemperatureLightControl();
            if(p_UC_AirTemperatureLightControl != NULL)
                {
                    itsLighting_System->__setItsUC_AirTemperatureLightControl(NULL);
                }
            itsLighting_System = NULL;
        }
    if(itsOccupancySesnor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsOccupancySesnor");
            const UC_AirTemperatureLightControl* p_UC_AirTemperatureLightControl = itsOccupancySesnor->getItsUC_AirTemperatureLightControl();
            if(p_UC_AirTemperatureLightControl != NULL)
                {
                    itsOccupancySesnor->__setItsUC_AirTemperatureLightControl(NULL);
                }
            itsOccupancySesnor = NULL;
        }
}

void UC_AirTemperatureLightControl::__setItsCO2_SENSOR(CO2_SENSOR* const p_CO2_SENSOR) {
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

void UC_AirTemperatureLightControl::_setItsCO2_SENSOR(CO2_SENSOR* const p_CO2_SENSOR) {
    if(itsCO2_SENSOR != NULL)
        {
            itsCO2_SENSOR->__setItsUC_AirTemperatureLightControl(NULL);
        }
    __setItsCO2_SENSOR(p_CO2_SENSOR);
}

void UC_AirTemperatureLightControl::_clearItsCO2_SENSOR(void) {
    NOTIFY_RELATION_CLEARED("itsCO2_SENSOR");
    itsCO2_SENSOR = NULL;
}

void UC_AirTemperatureLightControl::__setItsHVAC_SYSTEM(HVAC_SYSTEM* const p_HVAC_SYSTEM) {
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

void UC_AirTemperatureLightControl::_setItsHVAC_SYSTEM(HVAC_SYSTEM* const p_HVAC_SYSTEM) {
    if(itsHVAC_SYSTEM != NULL)
        {
            itsHVAC_SYSTEM->__setItsUC_AirTemperatureLightControl(NULL);
        }
    __setItsHVAC_SYSTEM(p_HVAC_SYSTEM);
}

void UC_AirTemperatureLightControl::_clearItsHVAC_SYSTEM(void) {
    NOTIFY_RELATION_CLEARED("itsHVAC_SYSTEM");
    itsHVAC_SYSTEM = NULL;
}

void UC_AirTemperatureLightControl::__setItsLighting_System(Lighting_System* const p_Lighting_System) {
    itsLighting_System = p_Lighting_System;
    if(p_Lighting_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLighting_System", p_Lighting_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLighting_System");
        }
}

void UC_AirTemperatureLightControl::_setItsLighting_System(Lighting_System* const p_Lighting_System) {
    if(itsLighting_System != NULL)
        {
            itsLighting_System->__setItsUC_AirTemperatureLightControl(NULL);
        }
    __setItsLighting_System(p_Lighting_System);
}

void UC_AirTemperatureLightControl::_clearItsLighting_System(void) {
    NOTIFY_RELATION_CLEARED("itsLighting_System");
    itsLighting_System = NULL;
}

void UC_AirTemperatureLightControl::__setItsOccupancySesnor(OccupancySesnor* const p_OccupancySesnor) {
    itsOccupancySesnor = p_OccupancySesnor;
    if(p_OccupancySesnor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsOccupancySesnor", p_OccupancySesnor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsOccupancySesnor");
        }
}

void UC_AirTemperatureLightControl::_setItsOccupancySesnor(OccupancySesnor* const p_OccupancySesnor) {
    if(itsOccupancySesnor != NULL)
        {
            itsOccupancySesnor->__setItsUC_AirTemperatureLightControl(NULL);
        }
    __setItsOccupancySesnor(p_OccupancySesnor);
}

void UC_AirTemperatureLightControl::_clearItsOccupancySesnor(void) {
    NOTIFY_RELATION_CLEARED("itsOccupancySesnor");
    itsOccupancySesnor = NULL;
}

//#[ ignore
UC_AirTemperatureLightControl::MainFlowOfUC_AirTemperatureLightControl::ActionAccepteventaction_0InActivityMainFlowOfUC_AirTemperatureLightControl::ActionAccepteventaction_0InActivityMainFlowOfUC_AirTemperatureLightControl(const OMString& id, MainFlowOfUC_AirTemperatureLightControl& activity, IOxfEvent::ID eventId, UC_AirTemperatureLightControl& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> UC_AirTemperatureLightControl::MainFlowOfUC_AirTemperatureLightControl::ActionAccepteventaction_0InActivityMainFlowOfUC_AirTemperatureLightControl::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityMainFlowOfUC_AirTemperatureLightControl();
}

void UC_AirTemperatureLightControl::MainFlowOfUC_AirTemperatureLightControl::ActionAccepteventaction_0InActivityMainFlowOfUC_AirTemperatureLightControl::acceptEventData(void) {
    mContext->delegatedAcceptEventDataFromActionAccepteventaction_0InActivityMainFlowOfUC_AirTemperatureLightControl();
}

UC_AirTemperatureLightControl::MainFlowOfUC_AirTemperatureLightControl::ActionAccepteventaction_1InActivityMainFlowOfUC_AirTemperatureLightControl::ActionAccepteventaction_1InActivityMainFlowOfUC_AirTemperatureLightControl(const OMString& id, MainFlowOfUC_AirTemperatureLightControl& activity, IOxfEvent::ID eventId, UC_AirTemperatureLightControl& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> UC_AirTemperatureLightControl::MainFlowOfUC_AirTemperatureLightControl::ActionAccepteventaction_1InActivityMainFlowOfUC_AirTemperatureLightControl::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionAccepteventaction_1InActivityMainFlowOfUC_AirTemperatureLightControl();
}

void UC_AirTemperatureLightControl::MainFlowOfUC_AirTemperatureLightControl::ActionAccepteventaction_1InActivityMainFlowOfUC_AirTemperatureLightControl::acceptEventData(void) {
    mContext->delegatedAcceptEventDataFromActionAccepteventaction_1InActivityMainFlowOfUC_AirTemperatureLightControl();
}

UC_AirTemperatureLightControl::MainFlowOfUC_AirTemperatureLightControl::ActionAction_2InActivityMainFlowOfUC_AirTemperatureLightControl::ActionAction_2InActivityMainFlowOfUC_AirTemperatureLightControl(const OMString& id, MainFlowOfUC_AirTemperatureLightControl& activity, UC_AirTemperatureLightControl& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> UC_AirTemperatureLightControl::MainFlowOfUC_AirTemperatureLightControl::ActionAction_2InActivityMainFlowOfUC_AirTemperatureLightControl::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionAction_2InActivityMainFlowOfUC_AirTemperatureLightControl();
}

void UC_AirTemperatureLightControl::MainFlowOfUC_AirTemperatureLightControl::ActionAction_2InActivityMainFlowOfUC_AirTemperatureLightControl::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionAction_2InActivityMainFlowOfUC_AirTemperatureLightControl();
}

UC_AirTemperatureLightControl::MainFlowOfUC_AirTemperatureLightControl::MainFlowOfUC_AirTemperatureLightControl(UC_AirTemperatureLightControl& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionAccepteventaction_0InActivityMainFlowOfUC_AirTemperatureLightControl* varAccepteventaction_0 = new ActionAccepteventaction_0InActivityMainFlowOfUC_AirTemperatureLightControl("MainFlow:ROOT.accepteventaction_0", *this, reqAccessMeetingRoom_AirTemperatureLightPkg_UseCaseAnalysisPkg_id, *mContext);
    ActionAccepteventaction_1InActivityMainFlowOfUC_AirTemperatureLightControl* varAccepteventaction_1 = new ActionAccepteventaction_1InActivityMainFlowOfUC_AirTemperatureLightControl("MainFlow:ROOT.accepteventaction_1", *this, evOccupancyDetected_AirTemperatureLightPkg_UseCaseAnalysisPkg_id, *mContext);
    ActionAction_2InActivityMainFlowOfUC_AirTemperatureLightControl* varAction_2 = new ActionAction_2InActivityMainFlowOfUC_AirTemperatureLightControl("MainFlow:ROOT.action_2", *this, *mContext);
    OMInitialAction* varInitialNode0 = new OMInitialAction("MainFlow:0", *this);
    
    // Setup flows
    new OMControlFlow("MainFlow:0", *this, *varInitialNode0, *varAccepteventaction_0);
}

UC_AirTemperatureLightControl::AdjustingBrightnessOfUC_AirTemperatureLightControl::AdjustingBrightnessOfUC_AirTemperatureLightControl(UC_AirTemperatureLightControl& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    
    // Setup flows
}

UC_AirTemperatureLightControl::AdjustingTemperatureOfUC_AirTemperatureLightControl::AdjustingTemperatureOfUC_AirTemperatureLightControl(UC_AirTemperatureLightControl& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    
    // Setup flows
}

UC_AirTemperatureLightControl::ToggleLightOfUC_AirTemperatureLightControl::ToggleLightOfUC_AirTemperatureLightControl(UC_AirTemperatureLightControl& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    
    // Setup flows
}

OMActivity* UC_AirTemperatureLightControl::createMainActivity(void) {
    return new MainFlowOfUC_AirTemperatureLightControl(*this);
}

void* UC_AirTemperatureLightControl::getMe(void) {
    return this;
}
//#]

OMList<OMString> UC_AirTemperatureLightControl::delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityMainFlowOfUC_AirTemperatureLightControl(void) {
    //#[ activity_action MainFlow:ROOT.accepteventaction_0
    OMList<OMString> ans;
    return ans;
    //#]
}

void UC_AirTemperatureLightControl::delegatedAcceptEventDataFromActionAccepteventaction_0InActivityMainFlowOfUC_AirTemperatureLightControl(void) {
    //#[ activity_action MainFlow:ROOT.accepteventaction_0
    //#]
}

OMList<OMString> UC_AirTemperatureLightControl::delegatedFilterPassableFlowsFromActionAccepteventaction_1InActivityMainFlowOfUC_AirTemperatureLightControl(void) {
    //#[ activity_action MainFlow:ROOT.accepteventaction_1
    OMList<OMString> ans;
    return ans;
    //#]
}

void UC_AirTemperatureLightControl::delegatedAcceptEventDataFromActionAccepteventaction_1InActivityMainFlowOfUC_AirTemperatureLightControl(void) {
    //#[ activity_action MainFlow:ROOT.accepteventaction_1
    //#]
}

OMList<OMString> UC_AirTemperatureLightControl::delegatedFilterPassableFlowsFromActionAction_2InActivityMainFlowOfUC_AirTemperatureLightControl(void) {
    //#[ activity_action MainFlow:ROOT.action_2
    OMList<OMString> ans;
    return ans;
    //#]
}

void UC_AirTemperatureLightControl::delegatedInvokeContextMethodFromActionAction_2InActivityMainFlowOfUC_AirTemperatureLightControl(void) {
    //#[ activity_action MainFlow:ROOT.action_2
    //#]
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUC_AirTemperatureLightControl::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsHVAC_SYSTEM", false, true);
    if(myReal->itsHVAC_SYSTEM)
        {
            aomsRelations->ADD_ITEM(myReal->itsHVAC_SYSTEM);
        }
    aomsRelations->addRelation("itsCO2_SENSOR", false, true);
    if(myReal->itsCO2_SENSOR)
        {
            aomsRelations->ADD_ITEM(myReal->itsCO2_SENSOR);
        }
    aomsRelations->addRelation("itsOccupancySesnor", false, true);
    if(myReal->itsOccupancySesnor)
        {
            aomsRelations->ADD_ITEM(myReal->itsOccupancySesnor);
        }
    aomsRelations->addRelation("itsLighting_System", false, true);
    if(myReal->itsLighting_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsLighting_System);
        }
}
//#]

IMPLEMENT_ACTIVITY_META_P(UC_AirTemperatureLightControl, UseCaseAnalysisPkg_AirTemperatureLightPkg, UseCaseAnalysisPkg::AirTemperatureLightPkg, false, OMAnimatedUC_AirTemperatureLightControl)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_AirTemperatureLightControl.cpp
*********************************************************************/
