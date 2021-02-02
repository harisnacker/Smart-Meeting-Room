/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AirTemperatureLightPkg
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\AirTemperatureLightPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "AirTemperatureLightPkg.h"
//## auto_generated
#include "UC_AirTemperatureLightControl.h"
//#[ ignore
#define event_3_SERIALIZE OM_NO_OP

#define event_3_UNSERIALIZE OM_NO_OP

#define event_3_CONSTRUCTOR event_3()

#define event_4_SERIALIZE OM_NO_OP

#define event_4_UNSERIALIZE OM_NO_OP

#define event_4_CONSTRUCTOR event_4()

#define reqAccessMeetingRoom_SERIALIZE OM_NO_OP

#define reqAccessMeetingRoom_UNSERIALIZE OM_NO_OP

#define reqAccessMeetingRoom_CONSTRUCTOR reqAccessMeetingRoom()

#define evOccupancyDetected_SERIALIZE OM_NO_OP

#define evOccupancyDetected_UNSERIALIZE OM_NO_OP

#define evOccupancyDetected_CONSTRUCTOR evOccupancyDetected()

#define reqHVAC_OFF_SERIALIZE OM_NO_OP

#define reqHVAC_OFF_UNSERIALIZE OM_NO_OP

#define reqHVAC_OFF_CONSTRUCTOR reqHVAC_OFF()

#define reqHVAC_ON_SERIALIZE OM_NO_OP

#define reqHVAC_ON_UNSERIALIZE OM_NO_OP

#define reqHVAC_ON_CONSTRUCTOR reqHVAC_ON()

#define evLogOFF_SERIALIZE OM_NO_OP

#define evLogOFF_UNSERIALIZE OM_NO_OP

#define evLogOFF_CONSTRUCTOR evLogOFF()

#define reqAdjustBrightness_SERIALIZE OM_NO_OP

#define reqAdjustBrightness_UNSERIALIZE OM_NO_OP

#define reqAdjustBrightness_CONSTRUCTOR reqAdjustBrightness()

#define reqIncreaseBrightness_SERIALIZE OM_NO_OP

#define reqIncreaseBrightness_UNSERIALIZE OM_NO_OP

#define reqIncreaseBrightness_CONSTRUCTOR reqIncreaseBrightness()

#define reqDecreaseBrightness_SERIALIZE OM_NO_OP

#define reqDecreaseBrightness_UNSERIALIZE OM_NO_OP

#define reqDecreaseBrightness_CONSTRUCTOR reqDecreaseBrightness()
//#]

//## package UseCaseAnalysisPkg::AirTemperatureLightPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(UseCaseAnalysisPkg_AirTemperatureLightPkg, UseCaseAnalysisPkg::AirTemperatureLightPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event event_3()
event_3::event_3(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(event_3)
    setId(event_3_AirTemperatureLightPkg_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID event_3_AirTemperatureLightPkg_UseCaseAnalysisPkg_id(601);
//#]

IMPLEMENT_META_EVENT_P(event_3, UseCaseAnalysisPkg_AirTemperatureLightPkg, UseCaseAnalysisPkg::AirTemperatureLightPkg, event_3())

//## event event_4()
event_4::event_4(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(event_4)
    setId(event_4_AirTemperatureLightPkg_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID event_4_AirTemperatureLightPkg_UseCaseAnalysisPkg_id(602);
//#]

IMPLEMENT_META_EVENT_P(event_4, UseCaseAnalysisPkg_AirTemperatureLightPkg, UseCaseAnalysisPkg::AirTemperatureLightPkg, event_4())

//## event reqAccessMeetingRoom()
reqAccessMeetingRoom::reqAccessMeetingRoom(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqAccessMeetingRoom)
    setId(reqAccessMeetingRoom_AirTemperatureLightPkg_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqAccessMeetingRoom_AirTemperatureLightPkg_UseCaseAnalysisPkg_id(603);
//#]

IMPLEMENT_META_EVENT_P(reqAccessMeetingRoom, UseCaseAnalysisPkg_AirTemperatureLightPkg, UseCaseAnalysisPkg::AirTemperatureLightPkg, reqAccessMeetingRoom())

//## event evOccupancyDetected()
evOccupancyDetected::evOccupancyDetected(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evOccupancyDetected)
    setId(evOccupancyDetected_AirTemperatureLightPkg_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID evOccupancyDetected_AirTemperatureLightPkg_UseCaseAnalysisPkg_id(604);
//#]

IMPLEMENT_META_EVENT_P(evOccupancyDetected, UseCaseAnalysisPkg_AirTemperatureLightPkg, UseCaseAnalysisPkg::AirTemperatureLightPkg, evOccupancyDetected())

//## event reqHVAC_OFF()
reqHVAC_OFF::reqHVAC_OFF(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqHVAC_OFF)
    setId(reqHVAC_OFF_AirTemperatureLightPkg_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqHVAC_OFF_AirTemperatureLightPkg_UseCaseAnalysisPkg_id(605);
//#]

IMPLEMENT_META_EVENT_P(reqHVAC_OFF, UseCaseAnalysisPkg_AirTemperatureLightPkg, UseCaseAnalysisPkg::AirTemperatureLightPkg, reqHVAC_OFF())

//## event reqHVAC_ON()
reqHVAC_ON::reqHVAC_ON(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqHVAC_ON)
    setId(reqHVAC_ON_AirTemperatureLightPkg_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqHVAC_ON_AirTemperatureLightPkg_UseCaseAnalysisPkg_id(606);
//#]

IMPLEMENT_META_EVENT_P(reqHVAC_ON, UseCaseAnalysisPkg_AirTemperatureLightPkg, UseCaseAnalysisPkg::AirTemperatureLightPkg, reqHVAC_ON())

//## event evLogOFF()
evLogOFF::evLogOFF(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evLogOFF)
    setId(evLogOFF_AirTemperatureLightPkg_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID evLogOFF_AirTemperatureLightPkg_UseCaseAnalysisPkg_id(607);
//#]

IMPLEMENT_META_EVENT_P(evLogOFF, UseCaseAnalysisPkg_AirTemperatureLightPkg, UseCaseAnalysisPkg::AirTemperatureLightPkg, evLogOFF())

//## event reqAdjustBrightness()
reqAdjustBrightness::reqAdjustBrightness(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqAdjustBrightness)
    setId(reqAdjustBrightness_AirTemperatureLightPkg_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqAdjustBrightness_AirTemperatureLightPkg_UseCaseAnalysisPkg_id(608);
//#]

IMPLEMENT_META_EVENT_P(reqAdjustBrightness, UseCaseAnalysisPkg_AirTemperatureLightPkg, UseCaseAnalysisPkg::AirTemperatureLightPkg, reqAdjustBrightness())

//## event reqIncreaseBrightness()
reqIncreaseBrightness::reqIncreaseBrightness(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqIncreaseBrightness)
    setId(reqIncreaseBrightness_AirTemperatureLightPkg_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqIncreaseBrightness_AirTemperatureLightPkg_UseCaseAnalysisPkg_id(609);
//#]

IMPLEMENT_META_EVENT_P(reqIncreaseBrightness, UseCaseAnalysisPkg_AirTemperatureLightPkg, UseCaseAnalysisPkg::AirTemperatureLightPkg, reqIncreaseBrightness())

//## event reqDecreaseBrightness()
reqDecreaseBrightness::reqDecreaseBrightness(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqDecreaseBrightness)
    setId(reqDecreaseBrightness_AirTemperatureLightPkg_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqDecreaseBrightness_AirTemperatureLightPkg_UseCaseAnalysisPkg_id(610);
//#]

IMPLEMENT_META_EVENT_P(reqDecreaseBrightness, UseCaseAnalysisPkg_AirTemperatureLightPkg, UseCaseAnalysisPkg::AirTemperatureLightPkg, reqDecreaseBrightness())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AirTemperatureLightPkg.cpp
*********************************************************************/
