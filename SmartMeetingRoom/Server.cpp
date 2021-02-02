/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Server
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Server.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Server.h"
//## link itsInternalNetworkSystem
#include "InternalNetworkSystem.h"
//#[ ignore
#define Default_Server_Server_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Server
Server::Server(void) : itsInternalNetworkSystem(NULL) {
    NOTIFY_CONSTRUCTOR(Server, Server(), 0, Default_Server_Server_SERIALIZE);
}

Server::~Server(void) {
    NOTIFY_DESTRUCTOR(~Server, true);
    cleanUpRelations();
}

const InternalNetworkSystem* Server::getItsInternalNetworkSystem(void) const {
    return itsInternalNetworkSystem;
}

void Server::setItsInternalNetworkSystem(InternalNetworkSystem* const p_InternalNetworkSystem) {
    if(p_InternalNetworkSystem != NULL)
        {
            p_InternalNetworkSystem->_setItsServer_1(this);
        }
    _setItsInternalNetworkSystem(p_InternalNetworkSystem);
}

void Server::cleanUpRelations(void) {
    if(itsInternalNetworkSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsInternalNetworkSystem");
            const Server* p_Server = itsInternalNetworkSystem->getItsServer_1();
            if(p_Server != NULL)
                {
                    itsInternalNetworkSystem->__setItsServer_1(NULL);
                }
            itsInternalNetworkSystem = NULL;
        }
}

void Server::__setItsInternalNetworkSystem(InternalNetworkSystem* const p_InternalNetworkSystem) {
    itsInternalNetworkSystem = p_InternalNetworkSystem;
    if(p_InternalNetworkSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsInternalNetworkSystem", p_InternalNetworkSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsInternalNetworkSystem");
        }
}

void Server::_setItsInternalNetworkSystem(InternalNetworkSystem* const p_InternalNetworkSystem) {
    if(itsInternalNetworkSystem != NULL)
        {
            itsInternalNetworkSystem->__setItsServer_1(NULL);
        }
    __setItsInternalNetworkSystem(p_InternalNetworkSystem);
}

void Server::_clearItsInternalNetworkSystem(void) {
    NOTIFY_RELATION_CLEARED("itsInternalNetworkSystem");
    itsInternalNetworkSystem = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedServer::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsInternalNetworkSystem", false, true);
    if(myReal->itsInternalNetworkSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsInternalNetworkSystem);
        }
}
//#]

IMPLEMENT_META_P(Server, Default, Default, false, OMAnimatedServer)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Server.cpp
*********************************************************************/
