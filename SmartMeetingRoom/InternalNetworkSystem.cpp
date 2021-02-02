/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: InternalNetworkSystem
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\InternalNetworkSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "InternalNetworkSystem.h"
//#[ ignore
#define Default_InternalNetworkSystem_InternalNetworkSystem_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class InternalNetworkSystem
InternalNetworkSystem::InternalNetworkSystem(void) : itsServer_1(NULL) {
    NOTIFY_CONSTRUCTOR(InternalNetworkSystem, InternalNetworkSystem(), 0, Default_InternalNetworkSystem_InternalNetworkSystem_SERIALIZE);
}

InternalNetworkSystem::~InternalNetworkSystem(void) {
    NOTIFY_DESTRUCTOR(~InternalNetworkSystem, true);
    cleanUpRelations();
}

const Server* InternalNetworkSystem::getItsServer(void) const {
    return &itsServer;
}

const Server* InternalNetworkSystem::getItsServer_1(void) const {
    return itsServer_1;
}

void InternalNetworkSystem::setItsServer_1(Server* const p_Server) {
    if(p_Server != NULL)
        {
            p_Server->_setItsInternalNetworkSystem(this);
        }
    _setItsServer_1(p_Server);
}

void InternalNetworkSystem::cleanUpRelations(void) {
    if(itsServer_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsServer_1");
            const InternalNetworkSystem* p_InternalNetworkSystem = itsServer_1->getItsInternalNetworkSystem();
            if(p_InternalNetworkSystem != NULL)
                {
                    itsServer_1->__setItsInternalNetworkSystem(NULL);
                }
            itsServer_1 = NULL;
        }
}

void InternalNetworkSystem::__setItsServer_1(Server* const p_Server) {
    itsServer_1 = p_Server;
    if(p_Server != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsServer_1", p_Server, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsServer_1");
        }
}

void InternalNetworkSystem::_setItsServer_1(Server* const p_Server) {
    if(itsServer_1 != NULL)
        {
            itsServer_1->__setItsInternalNetworkSystem(NULL);
        }
    __setItsServer_1(p_Server);
}

void InternalNetworkSystem::_clearItsServer_1(void) {
    NOTIFY_RELATION_CLEARED("itsServer_1");
    itsServer_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedInternalNetworkSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsServer", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsServer);
    aomsRelations->addRelation("itsServer_1", false, true);
    if(myReal->itsServer_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsServer_1);
        }
}
//#]

IMPLEMENT_META_P(InternalNetworkSystem, Default, Default, false, OMAnimatedInternalNetworkSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\InternalNetworkSystem.cpp
*********************************************************************/
