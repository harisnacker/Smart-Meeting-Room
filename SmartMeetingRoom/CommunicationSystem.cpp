/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommunicationSystem
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\CommunicationSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CommunicationSystem.h"
//#[ ignore
#define Default_CommunicationSystem_CommunicationSystem_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class CommunicationSystem
CommunicationSystem::CommunicationSystem(void) {
    NOTIFY_CONSTRUCTOR(CommunicationSystem, CommunicationSystem(), 0, Default_CommunicationSystem_CommunicationSystem_SERIALIZE);
}

CommunicationSystem::~CommunicationSystem(void) {
    NOTIFY_DESTRUCTOR(~CommunicationSystem, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(CommunicationSystem, Default, Default, false, OMAnimatedCommunicationSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommunicationSystem.cpp
*********************************************************************/
