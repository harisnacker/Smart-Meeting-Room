/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SecurityandAccessSystem
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\SecurityandAccessSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SecurityandAccessSystem.h"
//#[ ignore
#define Default_SecurityandAccessSystem_SecurityandAccessSystem_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class SecurityandAccessSystem
SecurityandAccessSystem::SecurityandAccessSystem(void) : itsCamera_1(NULL) {
    NOTIFY_CONSTRUCTOR(SecurityandAccessSystem, SecurityandAccessSystem(), 0, Default_SecurityandAccessSystem_SecurityandAccessSystem_SERIALIZE);
}

SecurityandAccessSystem::~SecurityandAccessSystem(void) {
    NOTIFY_DESTRUCTOR(~SecurityandAccessSystem, true);
    cleanUpRelations();
}

const Camera* SecurityandAccessSystem::getItsCamera(void) const {
    return &itsCamera;
}

const Camera* SecurityandAccessSystem::getItsCamera_1(void) const {
    return itsCamera_1;
}

void SecurityandAccessSystem::setItsCamera_1(Camera* const p_Camera) {
    if(p_Camera != NULL)
        {
            p_Camera->_setItsSecurityandAccessSystem(this);
        }
    _setItsCamera_1(p_Camera);
}

void SecurityandAccessSystem::cleanUpRelations(void) {
    if(itsCamera_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCamera_1");
            const SecurityandAccessSystem* p_SecurityandAccessSystem = itsCamera_1->getItsSecurityandAccessSystem();
            if(p_SecurityandAccessSystem != NULL)
                {
                    itsCamera_1->__setItsSecurityandAccessSystem(NULL);
                }
            itsCamera_1 = NULL;
        }
}

void SecurityandAccessSystem::__setItsCamera_1(Camera* const p_Camera) {
    itsCamera_1 = p_Camera;
    if(p_Camera != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCamera_1", p_Camera, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCamera_1");
        }
}

void SecurityandAccessSystem::_setItsCamera_1(Camera* const p_Camera) {
    if(itsCamera_1 != NULL)
        {
            itsCamera_1->__setItsSecurityandAccessSystem(NULL);
        }
    __setItsCamera_1(p_Camera);
}

void SecurityandAccessSystem::_clearItsCamera_1(void) {
    NOTIFY_RELATION_CLEARED("itsCamera_1");
    itsCamera_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSecurityandAccessSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsCamera", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCamera);
    aomsRelations->addRelation("itsCamera_1", false, true);
    if(myReal->itsCamera_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsCamera_1);
        }
}
//#]

IMPLEMENT_META_P(SecurityandAccessSystem, Default, Default, false, OMAnimatedSecurityandAccessSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SecurityandAccessSystem.cpp
*********************************************************************/
