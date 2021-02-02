/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Environment
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Environment.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Environment.h"
//#[ ignore
#define Default_Environment_Environment_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Environment
Environment::Environment(void) {
    NOTIFY_CONSTRUCTOR(Environment, Environment(), 0, Default_Environment_Environment_SERIALIZE);
}

Environment::~Environment(void) {
    NOTIFY_DESTRUCTOR(~Environment, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Environment, Default, Default, false, OMAnimatedEnvironment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Environment.cpp
*********************************************************************/
