/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Remote_user
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Remote_user.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Remote_user.h"
//#[ ignore
#define ActorPkg_Remote_user_Remote_user_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor Remote_user
Remote_user::Remote_user(void) {
    NOTIFY_CONSTRUCTOR(Remote_user, Remote_user(), 0, ActorPkg_Remote_user_Remote_user_SERIALIZE);
}

Remote_user::~Remote_user(void) {
    NOTIFY_DESTRUCTOR(~Remote_user, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedRemote_user::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Remote_user, ActorPkg, ActorPkg, false, OMAnimatedRemote_user)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Remote_user.cpp
*********************************************************************/
