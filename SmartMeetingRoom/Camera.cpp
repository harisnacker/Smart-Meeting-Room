/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Camera
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Camera.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Camera.h"
//## link itsSecurityandAccessSystem
#include "SecurityandAccessSystem.h"
//#[ ignore
#define Default_Camera_Camera_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Camera
Camera::Camera(void) : itsSecurityandAccessSystem(NULL) {
    NOTIFY_CONSTRUCTOR(Camera, Camera(), 0, Default_Camera_Camera_SERIALIZE);
}

Camera::~Camera(void) {
    NOTIFY_DESTRUCTOR(~Camera, true);
    cleanUpRelations();
}

const SecurityandAccessSystem* Camera::getItsSecurityandAccessSystem(void) const {
    return itsSecurityandAccessSystem;
}

void Camera::setItsSecurityandAccessSystem(SecurityandAccessSystem* const p_SecurityandAccessSystem) {
    if(p_SecurityandAccessSystem != NULL)
        {
            p_SecurityandAccessSystem->_setItsCamera_1(this);
        }
    _setItsSecurityandAccessSystem(p_SecurityandAccessSystem);
}

void Camera::cleanUpRelations(void) {
    if(itsSecurityandAccessSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSecurityandAccessSystem");
            const Camera* p_Camera = itsSecurityandAccessSystem->getItsCamera_1();
            if(p_Camera != NULL)
                {
                    itsSecurityandAccessSystem->__setItsCamera_1(NULL);
                }
            itsSecurityandAccessSystem = NULL;
        }
}

void Camera::__setItsSecurityandAccessSystem(SecurityandAccessSystem* const p_SecurityandAccessSystem) {
    itsSecurityandAccessSystem = p_SecurityandAccessSystem;
    if(p_SecurityandAccessSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSecurityandAccessSystem", p_SecurityandAccessSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSecurityandAccessSystem");
        }
}

void Camera::_setItsSecurityandAccessSystem(SecurityandAccessSystem* const p_SecurityandAccessSystem) {
    if(itsSecurityandAccessSystem != NULL)
        {
            itsSecurityandAccessSystem->__setItsCamera_1(NULL);
        }
    __setItsSecurityandAccessSystem(p_SecurityandAccessSystem);
}

void Camera::_clearItsSecurityandAccessSystem(void) {
    NOTIFY_RELATION_CLEARED("itsSecurityandAccessSystem");
    itsSecurityandAccessSystem = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCamera::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSecurityandAccessSystem", false, true);
    if(myReal->itsSecurityandAccessSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsSecurityandAccessSystem);
        }
}
//#]

IMPLEMENT_META_P(Camera, Default, Default, false, OMAnimatedCamera)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Camera.cpp
*********************************************************************/
