/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AudioVisualSystem
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\AudioVisualSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "AudioVisualSystem.h"
//#[ ignore
#define Default_AudioVisualSystem_AudioVisualSystem_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class AudioVisualSystem
AudioVisualSystem::AudioVisualSystem(void) {
    NOTIFY_CONSTRUCTOR(AudioVisualSystem, AudioVisualSystem(), 0, Default_AudioVisualSystem_AudioVisualSystem_SERIALIZE);
}

AudioVisualSystem::~AudioVisualSystem(void) {
    NOTIFY_DESTRUCTOR(~AudioVisualSystem, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(AudioVisualSystem, Default, Default, false, OMAnimatedAudioVisualSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AudioVisualSystem.cpp
*********************************************************************/
