/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Audio_Video_system
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Audio_Video_system.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Audio_Video_system.h"
//#[ ignore
#define ActorPkg_Audio_Video_system_Audio_Video_system_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor Audio_Video_system
Audio_Video_system::Audio_Video_system(void) {
    NOTIFY_CONSTRUCTOR(Audio_Video_system, Audio_Video_system(), 0, ActorPkg_Audio_Video_system_Audio_Video_system_SERIALIZE);
}

Audio_Video_system::~Audio_Video_system(void) {
    NOTIFY_DESTRUCTOR(~Audio_Video_system, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAudio_Video_system::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Audio_Video_system, ActorPkg, ActorPkg, false, OMAnimatedAudio_Video_system)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Audio_Video_system.cpp
*********************************************************************/
