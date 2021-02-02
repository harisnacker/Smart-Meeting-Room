/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Internal_network_system
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Internal_network_system.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Internal_network_system.h"
//#[ ignore
#define ActorPkg_Internal_network_system_Internal_network_system_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor Internal_network_system
Internal_network_system::Internal_network_system(void) {
    NOTIFY_CONSTRUCTOR(Internal_network_system, Internal_network_system(), 0, ActorPkg_Internal_network_system_Internal_network_system_SERIALIZE);
}

Internal_network_system::~Internal_network_system(void) {
    NOTIFY_DESTRUCTOR(~Internal_network_system, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedInternal_network_system::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Internal_network_system, ActorPkg, ActorPkg, false, OMAnimatedInternal_network_system)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Internal_network_system.cpp
*********************************************************************/
