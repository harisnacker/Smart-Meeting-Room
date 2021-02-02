/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Tue, 11, Aug 2020  
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## auto_generated
#include "AudioVisualSystem.h"
//## auto_generated
#include "block_39.h"
//## auto_generated
#include "block_41.h"
//## auto_generated
#include "Camera.h"
//## auto_generated
#include "CO2Sensor.h"
//## auto_generated
#include "CommunicationSystem.h"
//## auto_generated
#include "Environment.h"
//## auto_generated
#include "FireSensor.h"
//## auto_generated
#include "HVACSystem.h"
//## auto_generated
#include "InternalNetworkSystem.h"
//## auto_generated
#include "LightingSystem.h"
//## auto_generated
#include "MotionSensor.h"
//## auto_generated
#include "OccupancySensor.h"
//## auto_generated
#include "SafetySystem.h"
//## auto_generated
#include "SecurityandAccessSystem.h"
//## auto_generated
#include "SendToUnity.h"
//## auto_generated
#include "SensorSystem.h"
//## auto_generated
#include "Server.h"
//## classInstance itsSMR_SYSTEM
#include "SMR_SYSTEM.h"
//## auto_generated
#include "TemperatureSensor.h"
//## auto_generated
#include "User.h"
//#[ ignore
#define AllowAccess_SERIALIZE OM_NO_OP

#define AllowAccess_UNSERIALIZE OM_NO_OP

#define AllowAccess_CONSTRUCTOR AllowAccess()

#define weatherPredictionRecieved_SERIALIZE OM_NO_OP

#define weatherPredictionRecieved_UNSERIALIZE OM_NO_OP

#define weatherPredictionRecieved_CONSTRUCTOR weatherPredictionRecieved()

#define reqAuthorizedAccess_SERIALIZE OM_NO_OP

#define reqAuthorizedAccess_UNSERIALIZE OM_NO_OP

#define reqAuthorizedAccess_CONSTRUCTOR reqAuthorizedAccess()

#define ValidateAccess_SERIALIZE OM_NO_OP

#define ValidateAccess_UNSERIALIZE OM_NO_OP

#define ValidateAccess_CONSTRUCTOR ValidateAccess()

#define UnauthorizedAccess_SERIALIZE OM_NO_OP

#define UnauthorizedAccess_UNSERIALIZE OM_NO_OP

#define UnauthorizedAccess_CONSTRUCTOR UnauthorizedAccess()

#define LogOFF_SERIALIZE OM_NO_OP

#define LogOFF_UNSERIALIZE OM_NO_OP

#define LogOFF_CONSTRUCTOR LogOFF()

#define reqAudioVideoCall_SERIALIZE OM_NO_OP

#define reqAudioVideoCall_UNSERIALIZE OM_NO_OP

#define reqAudioVideoCall_CONSTRUCTOR reqAudioVideoCall()

#define reqStopAudioVideoCall_SERIALIZE OM_NO_OP

#define reqStopAudioVideoCall_UNSERIALIZE OM_NO_OP

#define reqStopAudioVideoCall_CONSTRUCTOR reqStopAudioVideoCall()

#define reqShareScreen_SERIALIZE OM_NO_OP

#define reqShareScreen_UNSERIALIZE OM_NO_OP

#define reqShareScreen_CONSTRUCTOR reqShareScreen()

#define reqStopShareScreen_SERIALIZE OM_NO_OP

#define reqStopShareScreen_UNSERIALIZE OM_NO_OP

#define reqStopShareScreen_CONSTRUCTOR reqStopShareScreen()

#define reqRemoteAccess_SERIALIZE OM_NO_OP

#define reqRemoteAccess_UNSERIALIZE OM_NO_OP

#define reqRemoteAccess_CONSTRUCTOR reqRemoteAccess()

#define req_LiveTelecast_SERIALIZE OM_NO_OP

#define req_LiveTelecast_UNSERIALIZE OM_NO_OP

#define req_LiveTelecast_CONSTRUCTOR req_LiveTelecast()

#define reqStop_LiveTelecast_SERIALIZE OM_NO_OP

#define reqStop_LiveTelecast_UNSERIALIZE OM_NO_OP

#define reqStop_LiveTelecast_CONSTRUCTOR reqStop_LiveTelecast()

#define reqstopLiveTelecast_SERIALIZE OM_NO_OP

#define reqstopLiveTelecast_UNSERIALIZE OM_NO_OP

#define reqstopLiveTelecast_CONSTRUCTOR reqstopLiveTelecast()

#define BookingInfoVerified_SERIALIZE OM_NO_OP

#define BookingInfoVerified_UNSERIALIZE OM_NO_OP

#define BookingInfoVerified_CONSTRUCTOR BookingInfoVerified()

#define evTurnOFFLight_SERIALIZE OM_NO_OP

#define evTurnOFFLight_UNSERIALIZE OM_NO_OP

#define evTurnOFFLight_CONSTRUCTOR evTurnOFFLight()

#define reqStoreVideo_SERIALIZE OM_NO_OP

#define reqStoreVideo_UNSERIALIZE OM_NO_OP

#define reqStoreVideo_CONSTRUCTOR reqStoreVideo()

#define Erase_After_60days_SERIALIZE OM_NO_OP

#define Erase_After_60days_UNSERIALIZE OM_NO_OP

#define Erase_After_60days_CONSTRUCTOR Erase_After_60days()

#define System_ON_SERIALIZE OM_NO_OP

#define System_ON_UNSERIALIZE OM_NO_OP

#define System_ON_CONSTRUCTOR System_ON()

#define Unlock_SERIALIZE OM_NO_OP

#define Unlock_UNSERIALIZE OM_NO_OP

#define Unlock_CONSTRUCTOR Unlock()

#define login_SERIALIZE OM_NO_OP

#define login_UNSERIALIZE OM_NO_OP

#define login_CONSTRUCTOR login()

#define logout_SERIALIZE OM_NO_OP

#define logout_UNSERIALIZE OM_NO_OP

#define logout_CONSTRUCTOR logout()

#define confirm_brightness_SERIALIZE OM_NO_OP

#define confirm_brightness_UNSERIALIZE OM_NO_OP

#define confirm_brightness_CONSTRUCTOR confirm_brightness()

#define confirm_temperature_SERIALIZE OM_NO_OP

#define confirm_temperature_UNSERIALIZE OM_NO_OP

#define confirm_temperature_CONSTRUCTOR confirm_temperature()

#define Default_Mode_SERIALIZE OM_NO_OP

#define Default_Mode_UNSERIALIZE OM_NO_OP

#define Default_Mode_CONSTRUCTOR Default_Mode()

#define System_OFF_SERIALIZE OM_NO_OP

#define System_OFF_UNSERIALIZE OM_NO_OP

#define System_OFF_CONSTRUCTOR System_OFF()

#define Fire_Alarm_SERIALIZE OM_NO_OP

#define Fire_Alarm_UNSERIALIZE OM_NO_OP

#define Fire_Alarm_CONSTRUCTOR Fire_Alarm()

#define Disable_Fire_Alarm_SERIALIZE OM_NO_OP

#define Disable_Fire_Alarm_UNSERIALIZE OM_NO_OP

#define Disable_Fire_Alarm_CONSTRUCTOR Disable_Fire_Alarm()

#define SMR_ON_SERIALIZE OM_NO_OP

#define SMR_ON_UNSERIALIZE OM_NO_OP

#define SMR_ON_CONSTRUCTOR SMR_ON()

#define Disable_Alarm_SERIALIZE OM_NO_OP

#define Disable_Alarm_UNSERIALIZE OM_NO_OP

#define Disable_Alarm_CONSTRUCTOR Disable_Alarm()

#define MeetingMode_SERIALIZE OM_NO_OP

#define MeetingMode_UNSERIALIZE OM_NO_OP

#define MeetingMode_CONSTRUCTOR MeetingMode()

#define event_46_SERIALIZE OM_NO_OP

#define event_46_UNSERIALIZE OM_NO_OP

#define event_46_CONSTRUCTOR event_46()

#define Enter_Room_SERIALIZE OM_NO_OP

#define Enter_Room_UNSERIALIZE OM_NO_OP

#define Enter_Room_CONSTRUCTOR Enter_Room()
//#]

//## package Default


//## classInstance itsSMR_SYSTEM
SMR_SYSTEM itsSMR_SYSTEM;

//## classInstance itsSMR_SYSTEM_1
SMR_SYSTEM itsSMR_SYSTEM_1;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(Default, Default)
#endif // _OMINSTRUMENT

void Default_initRelations(void) {
    {
        {
            itsSMR_SYSTEM.setShouldDelete(false);
        }
        {
            itsSMR_SYSTEM_1.setShouldDelete(false);
        }
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool Default_startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsSMR_SYSTEM.startBehavior();
        }
    if(done == true)
        {
            done = itsSMR_SYSTEM_1.startBehavior();
        }
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsSMR_SYSTEM, SMR_SYSTEM, "itsSMR_SYSTEM", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsSMR_SYSTEM_1, SMR_SYSTEM, "itsSMR_SYSTEM_1", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
Default_OMInitializer::Default_OMInitializer(void) {
    Default_initRelations();
    (void) Default_startBehavior();
}

Default_OMInitializer::~Default_OMInitializer(void) {
}
//#]

//## event AllowAccess()
AllowAccess::AllowAccess(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(AllowAccess)
    setId(AllowAccess_Default_id);
}

//#[ ignore
const IOxfEvent::ID AllowAccess_Default_id(18601);
//#]

IMPLEMENT_META_EVENT_P(AllowAccess, Default, Default, AllowAccess())

//## event weatherPredictionRecieved()
weatherPredictionRecieved::weatherPredictionRecieved(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(weatherPredictionRecieved)
    setId(weatherPredictionRecieved_Default_id);
}

//#[ ignore
const IOxfEvent::ID weatherPredictionRecieved_Default_id(18602);
//#]

IMPLEMENT_META_EVENT_P(weatherPredictionRecieved, Default, Default, weatherPredictionRecieved())

//## event reqAuthorizedAccess()
reqAuthorizedAccess::reqAuthorizedAccess(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqAuthorizedAccess)
    setId(reqAuthorizedAccess_Default_id);
}

//#[ ignore
const IOxfEvent::ID reqAuthorizedAccess_Default_id(18603);
//#]

IMPLEMENT_META_EVENT_P(reqAuthorizedAccess, Default, Default, reqAuthorizedAccess())

//## event ValidateAccess()
ValidateAccess::ValidateAccess(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(ValidateAccess)
    setId(ValidateAccess_Default_id);
}

//#[ ignore
const IOxfEvent::ID ValidateAccess_Default_id(18604);
//#]

IMPLEMENT_META_EVENT_P(ValidateAccess, Default, Default, ValidateAccess())

//## event UnauthorizedAccess()
UnauthorizedAccess::UnauthorizedAccess(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(UnauthorizedAccess)
    setId(UnauthorizedAccess_Default_id);
}

//#[ ignore
const IOxfEvent::ID UnauthorizedAccess_Default_id(18605);
//#]

IMPLEMENT_META_EVENT_P(UnauthorizedAccess, Default, Default, UnauthorizedAccess())

//## event LogOFF()
LogOFF::LogOFF(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(LogOFF)
    setId(LogOFF_Default_id);
}

//#[ ignore
const IOxfEvent::ID LogOFF_Default_id(18606);
//#]

IMPLEMENT_META_EVENT_P(LogOFF, Default, Default, LogOFF())

//## event reqAudioVideoCall()
reqAudioVideoCall::reqAudioVideoCall(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqAudioVideoCall)
    setId(reqAudioVideoCall_Default_id);
}

//#[ ignore
const IOxfEvent::ID reqAudioVideoCall_Default_id(18607);
//#]

IMPLEMENT_META_EVENT_P(reqAudioVideoCall, Default, Default, reqAudioVideoCall())

//## event reqStopAudioVideoCall()
reqStopAudioVideoCall::reqStopAudioVideoCall(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqStopAudioVideoCall)
    setId(reqStopAudioVideoCall_Default_id);
}

//#[ ignore
const IOxfEvent::ID reqStopAudioVideoCall_Default_id(18608);
//#]

IMPLEMENT_META_EVENT_P(reqStopAudioVideoCall, Default, Default, reqStopAudioVideoCall())

//## event reqShareScreen()
reqShareScreen::reqShareScreen(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqShareScreen)
    setId(reqShareScreen_Default_id);
}

//#[ ignore
const IOxfEvent::ID reqShareScreen_Default_id(18609);
//#]

IMPLEMENT_META_EVENT_P(reqShareScreen, Default, Default, reqShareScreen())

//## event reqStopShareScreen()
reqStopShareScreen::reqStopShareScreen(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqStopShareScreen)
    setId(reqStopShareScreen_Default_id);
}

//#[ ignore
const IOxfEvent::ID reqStopShareScreen_Default_id(18610);
//#]

IMPLEMENT_META_EVENT_P(reqStopShareScreen, Default, Default, reqStopShareScreen())

//## event reqRemoteAccess()
reqRemoteAccess::reqRemoteAccess(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqRemoteAccess)
    setId(reqRemoteAccess_Default_id);
}

//#[ ignore
const IOxfEvent::ID reqRemoteAccess_Default_id(18611);
//#]

IMPLEMENT_META_EVENT_P(reqRemoteAccess, Default, Default, reqRemoteAccess())

//## event req_LiveTelecast()
req_LiveTelecast::req_LiveTelecast(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(req_LiveTelecast)
    setId(req_LiveTelecast_Default_id);
}

//#[ ignore
const IOxfEvent::ID req_LiveTelecast_Default_id(18612);
//#]

IMPLEMENT_META_EVENT_P(req_LiveTelecast, Default, Default, req_LiveTelecast())

//## event reqStop_LiveTelecast()
reqStop_LiveTelecast::reqStop_LiveTelecast(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqStop_LiveTelecast)
    setId(reqStop_LiveTelecast_Default_id);
}

//#[ ignore
const IOxfEvent::ID reqStop_LiveTelecast_Default_id(18613);
//#]

IMPLEMENT_META_EVENT_P(reqStop_LiveTelecast, Default, Default, reqStop_LiveTelecast())

//## event reqstopLiveTelecast()
reqstopLiveTelecast::reqstopLiveTelecast(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqstopLiveTelecast)
    setId(reqstopLiveTelecast_Default_id);
}

//#[ ignore
const IOxfEvent::ID reqstopLiveTelecast_Default_id(18614);
//#]

IMPLEMENT_META_EVENT_P(reqstopLiveTelecast, Default, Default, reqstopLiveTelecast())

//## event BookingInfoVerified()
BookingInfoVerified::BookingInfoVerified(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(BookingInfoVerified)
    setId(BookingInfoVerified_Default_id);
}

//#[ ignore
const IOxfEvent::ID BookingInfoVerified_Default_id(18615);
//#]

IMPLEMENT_META_EVENT_P(BookingInfoVerified, Default, Default, BookingInfoVerified())

//## event evTurnOFFLight()
evTurnOFFLight::evTurnOFFLight(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evTurnOFFLight)
    setId(evTurnOFFLight_Default_id);
}

//#[ ignore
const IOxfEvent::ID evTurnOFFLight_Default_id(18616);
//#]

IMPLEMENT_META_EVENT_P(evTurnOFFLight, Default, Default, evTurnOFFLight())

//## event reqStoreVideo()
reqStoreVideo::reqStoreVideo(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqStoreVideo)
    setId(reqStoreVideo_Default_id);
}

//#[ ignore
const IOxfEvent::ID reqStoreVideo_Default_id(18617);
//#]

IMPLEMENT_META_EVENT_P(reqStoreVideo, Default, Default, reqStoreVideo())

//## event Erase_After_60days()
Erase_After_60days::Erase_After_60days(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(Erase_After_60days)
    setId(Erase_After_60days_Default_id);
}

//#[ ignore
const IOxfEvent::ID Erase_After_60days_Default_id(18618);
//#]

IMPLEMENT_META_EVENT_P(Erase_After_60days, Default, Default, Erase_After_60days())

//## event System_ON()
System_ON::System_ON(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(System_ON)
    setId(System_ON_Default_id);
}

//#[ ignore
const IOxfEvent::ID System_ON_Default_id(18619);
//#]

IMPLEMENT_META_EVENT_P(System_ON, Default, Default, System_ON())

//## event Unlock()
Unlock::Unlock(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(Unlock)
    setId(Unlock_Default_id);
}

//#[ ignore
const IOxfEvent::ID Unlock_Default_id(18620);
//#]

IMPLEMENT_META_EVENT_P(Unlock, Default, Default, Unlock())

//## event login()
login::login(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(login)
    setId(login_Default_id);
}

//#[ ignore
const IOxfEvent::ID login_Default_id(18621);
//#]

IMPLEMENT_META_EVENT_P(login, Default, Default, login())

//## event logout()
logout::logout(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(logout)
    setId(logout_Default_id);
}

//#[ ignore
const IOxfEvent::ID logout_Default_id(18622);
//#]

IMPLEMENT_META_EVENT_P(logout, Default, Default, logout())

//## event confirm_brightness()
confirm_brightness::confirm_brightness(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(confirm_brightness)
    setId(confirm_brightness_Default_id);
}

//#[ ignore
const IOxfEvent::ID confirm_brightness_Default_id(18623);
//#]

IMPLEMENT_META_EVENT_P(confirm_brightness, Default, Default, confirm_brightness())

//## event confirm_temperature()
confirm_temperature::confirm_temperature(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(confirm_temperature)
    setId(confirm_temperature_Default_id);
}

//#[ ignore
const IOxfEvent::ID confirm_temperature_Default_id(18624);
//#]

IMPLEMENT_META_EVENT_P(confirm_temperature, Default, Default, confirm_temperature())

//## event Default_Mode()
Default_Mode::Default_Mode(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(Default_Mode)
    setId(Default_Mode_Default_id);
}

//#[ ignore
const IOxfEvent::ID Default_Mode_Default_id(18625);
//#]

IMPLEMENT_META_EVENT_P(Default_Mode, Default, Default, Default_Mode())

//## event System_OFF()
System_OFF::System_OFF(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(System_OFF)
    setId(System_OFF_Default_id);
}

//#[ ignore
const IOxfEvent::ID System_OFF_Default_id(18626);
//#]

IMPLEMENT_META_EVENT_P(System_OFF, Default, Default, System_OFF())

//## event Fire_Alarm()
Fire_Alarm::Fire_Alarm(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(Fire_Alarm)
    setId(Fire_Alarm_Default_id);
}

//#[ ignore
const IOxfEvent::ID Fire_Alarm_Default_id(18627);
//#]

IMPLEMENT_META_EVENT_P(Fire_Alarm, Default, Default, Fire_Alarm())

//## event Disable_Fire_Alarm()
Disable_Fire_Alarm::Disable_Fire_Alarm(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(Disable_Fire_Alarm)
    setId(Disable_Fire_Alarm_Default_id);
}

//#[ ignore
const IOxfEvent::ID Disable_Fire_Alarm_Default_id(18628);
//#]

IMPLEMENT_META_EVENT_P(Disable_Fire_Alarm, Default, Default, Disable_Fire_Alarm())

//## event SMR_ON()
SMR_ON::SMR_ON(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(SMR_ON)
    setId(SMR_ON_Default_id);
}

//#[ ignore
const IOxfEvent::ID SMR_ON_Default_id(18629);
//#]

IMPLEMENT_META_EVENT_P(SMR_ON, Default, Default, SMR_ON())

//## event Disable_Alarm()
Disable_Alarm::Disable_Alarm(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(Disable_Alarm)
    setId(Disable_Alarm_Default_id);
}

//#[ ignore
const IOxfEvent::ID Disable_Alarm_Default_id(18630);
//#]

IMPLEMENT_META_EVENT_P(Disable_Alarm, Default, Default, Disable_Alarm())

//## event MeetingMode()
MeetingMode::MeetingMode(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(MeetingMode)
    setId(MeetingMode_Default_id);
}

//#[ ignore
const IOxfEvent::ID MeetingMode_Default_id(18631);
//#]

IMPLEMENT_META_EVENT_P(MeetingMode, Default, Default, MeetingMode())

//## event event_46()
event_46::event_46(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(event_46)
    setId(event_46_Default_id);
}

//#[ ignore
const IOxfEvent::ID event_46_Default_id(18632);
//#]

IMPLEMENT_META_EVENT_P(event_46, Default, Default, event_46())

//## event Enter_Room()
Enter_Room::Enter_Room(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(Enter_Room)
    setId(Enter_Room_Default_id);
}

//#[ ignore
const IOxfEvent::ID Enter_Room_Default_id(18633);
//#]

IMPLEMENT_META_EVENT_P(Enter_Room, Default, Default, Enter_Room())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/
