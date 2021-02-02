/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20181013
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMR_SYSTEM
//!	Generated Date	: Fri, 7, Aug 2020  
	File Path	: DefaultComponent\DefaultConfig\SMR_SYSTEM.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "SMR_SYSTEM.h"
//#[ ignore
#define Default_SMR_SYSTEM_SMR_SYSTEM_SERIALIZE OM_NO_OP

#define Default_SMR_SYSTEM_User_Light_Settings_SERIALIZE OM_NO_OP

#define Default_SMR_SYSTEM_User_Temperature_Settings_SERIALIZE OM_NO_OP

#define Default_SMR_SYSTEM_User_Unlock_SERIALIZE OM_NO_OP

#define Default_SMR_SYSTEM_callMain_SERIALIZE OM_NO_OP

#define OMAnim_Default_SMR_SYSTEM_setBrightness_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_Brightness)

#define OMAnim_Default_SMR_SYSTEM_setBrightness_int_SERIALIZE_RET_VAL

#define OMAnim_Default_SMR_SYSTEM_setDoor_Bool_bool_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_Door_Bool)

#define OMAnim_Default_SMR_SYSTEM_setDoor_Bool_bool_SERIALIZE_RET_VAL

#define OMAnim_Default_SMR_SYSTEM_setRoom_Temperature_float_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_Room_Temperature)

#define OMAnim_Default_SMR_SYSTEM_setRoom_Temperature_float_SERIALIZE_RET_VAL

#define OMAnim_Default_SMR_SYSTEM_setHvac_bool_bool_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_hvac_bool)

#define OMAnim_Default_SMR_SYSTEM_setHvac_bool_bool_SERIALIZE_RET_VAL

#define OMAnim_Default_SMR_SYSTEM_setPin1_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_pin1)

#define OMAnim_Default_SMR_SYSTEM_setPin1_int_SERIALIZE_RET_VAL

#define OMAnim_Default_SMR_SYSTEM_setPin2_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_pin2)

#define OMAnim_Default_SMR_SYSTEM_setPin2_int_SERIALIZE_RET_VAL

#define OMAnim_Default_SMR_SYSTEM_setPin3_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_pin3)

#define OMAnim_Default_SMR_SYSTEM_setPin3_int_SERIALIZE_RET_VAL

#define OMAnim_Default_SMR_SYSTEM_setWindow_bool_bool_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_window_bool)

#define OMAnim_Default_SMR_SYSTEM_setWindow_bool_bool_SERIALIZE_RET_VAL
//#]

//## package Default

//## class SMR_SYSTEM
SMR_SYSTEM::SMR_SYSTEM(void) : OMThread(), OMReactive(), Brightness(0), Default_Temperature(25), HVAC_ON(1), Int32(0), Light_Default(3), Security(0), Temperature_Default(25), connectSocketForHVAC(INVALID_SOCKET), connectSocketForIntensity(INVALID_SOCKET), connectSocketForTemperature(INVALID_SOCKET), connectSocketForTest(INVALID_SOCKET), connectSocketForTest1(INVALID_SOCKET), connectSocketForTest2(INVALID_SOCKET), displayValue(""), filename(""), hvac(0), hvac_bool(0), hvac_text(""), intensity(0), listenSocketForHVAC(INVALID_SOCKET), listenSocketForIntensity(INVALID_SOCKET), listenSocketForTemperature(INVALID_SOCKET), listenSocketForTest(INVALID_SOCKET), listenSocketForTest1(INVALID_SOCKET), listenSocketForTest2(INVALID_SOCKET), portHVAC(52057), portIntensity(52055), portTemperature(52056), portTest(52051), portTest1(52052), portTest2(52053), recvbuflen(DEFAULT_BUFLEN), sendbuflen(DEFAULT_BUFLEN), serverName("127.0.0.1"), temp('c'), temperature(0), test(1), test1(10), test2(0), window_bool(0), itsSMR_SYSTEM(NULL), itsSMR_SYSTEM_1(NULL), Door(1), Meeting_Light(1), Meeting_Temperature(20), listenSocketForDoor(INVALID_SOCKET), portDoor(52053) {
    NOTIFY_ACTIVE_CONSTRUCTOR(SMR_SYSTEM, SMR_SYSTEM(), 0, Default_SMR_SYSTEM_SMR_SYSTEM_SERIALIZE);
    setActiveContext(this, true);
    initStatechart();
}

SMR_SYSTEM::~SMR_SYSTEM(void) {
    NOTIFY_DESTRUCTOR(~SMR_SYSTEM, true);
    cleanUpRelations();
    cancelTimeouts();
}

void SMR_SYSTEM::User_Light_Settings(void) {
    NOTIFY_OPERATION(User_Light_Settings, User_Light_Settings(), 0, Default_SMR_SYSTEM_User_Light_Settings_SERIALIZE);
    //#[ operation User_Light_Settings()
    intensity = Brightness;
    
    //#]
}

void SMR_SYSTEM::User_Temperature_Settings(void) {
    NOTIFY_OPERATION(User_Temperature_Settings, User_Temperature_Settings(), 0, Default_SMR_SYSTEM_User_Temperature_Settings_SERIALIZE);
    //#[ operation User_Temperature_Settings()
    temperature = Room_Temperature;
    //#]
}

RhpVoid SMR_SYSTEM::User_Unlock(void) {
    NOTIFY_OPERATION(User_Unlock, User_Unlock(), 0, Default_SMR_SYSTEM_User_Unlock_SERIALIZE);
    //#[ operation User_Unlock()
    if( (pin1 == 1) && (pin2 == 5) && (pin3 == 9))
    {
    password = true;
    Display_msg = " Room Unlocked ";
    }
    
    //#]
}

int SMR_SYSTEM::callMain(void) {
    NOTIFY_OPERATION(callMain, callMain(), 0, Default_SMR_SYSTEM_callMain_SERIALIZE);
    //#[ operation callMain()
    #ifndef WIN32_LEAN_AND_MEAN
    #define WIN32_LEAN_AND_MEAN 
    #define _WINSOCK_DEPRECATED_NO_WARNINGS
    #endif      
    
    #include <stdlib.h> 
    
    WSAStartup(0x0101,&ws);
    
    char out_string_for_test [1024];
    char out_string_for_test1 [1024];
    //char out_string_for_test2 [1024];
    char out_string_for_intensity [1024];
    char out_string_for_temperature [1024];
    char out_string_for_hvac [1024];  
    char out_string_for_Door [1024];
    
    //TEST
    ZeroMemory(&address_test, sizeof(address_test));
    address_test.sin_family = AF_INET;
    address_test.sin_port = htons(portTest);
    address_test.sin_addr.s_addr=inet_addr(serverName);             
    
    //TEST1
    ZeroMemory(&address_test1, sizeof(address_test1));
    address_test1.sin_family = AF_INET;
    address_test1.sin_port = htons(portTest1);
    address_test1.sin_addr.s_addr=inet_addr(serverName);      
    
    //TEST2
    //ZeroMemory(&address_test2, sizeof(address_test2));
    //address_test2.sin_family = AF_INET;
    //address_test2.sin_port = htons(portTest2);
    //address_test2.sin_addr.s_addr=inet_addr(serverName);
    
    //LIGHT INTENSITY
    ZeroMemory(&address_intensity, sizeof(address_intensity));
    address_intensity.sin_family = AF_INET;
    address_intensity.sin_port = htons(portIntensity);
    address_intensity.sin_addr.s_addr=inet_addr(serverName);
    
    //TEMPERATURE
    ZeroMemory(&address_temperature, sizeof(address_temperature));
    address_temperature.sin_family = AF_INET;
    address_temperature.sin_port = htons(portTemperature);
    address_temperature.sin_addr.s_addr=inet_addr(serverName);
    
    //HVAC
    ZeroMemory(&address_hvac, sizeof(address_hvac));
    address_hvac.sin_family = AF_INET;
    address_hvac.sin_port = htons(portHVAC);
    address_hvac.sin_addr.s_addr=inet_addr(serverName); 
    
    //Door
    ZeroMemory(&address_Door, sizeof(address_Door));
    address_Door.sin_family = AF_INET;
    address_Door.sin_port = htons(portDoor);
    address_Door.sin_addr.s_addr=inet_addr(serverName);
                                      
    //INITIALIZE ALL SOCKETS
    listenSocketForTest = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    listenSocketForTest1 = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    //listenSocketForTest2 = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    listenSocketForIntensity = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    listenSocketForTemperature = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    listenSocketForHVAC = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);  
    listenSocketForDoor = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    
    //CONNECT ALL THE SOCKETS
    iResultTest = connect(listenSocketForTest,(SOCKADDR*)&address_test, sizeof(address_test));    
    iResultTest1 = connect(listenSocketForTest1,(SOCKADDR*)&address_test1, sizeof(address_test1));
    //iResultTest2 = connect(listenSocketForTest2,(SOCKADDR*)&address_test2, sizeof(address_test2));
    iResultIntensity = connect(listenSocketForIntensity,(SOCKADDR*)&address_intensity, sizeof(address_intensity));
    iResultTemperature = connect(listenSocketForTemperature,(SOCKADDR*)&address_temperature, sizeof(address_temperature));
    iResultHVAC = connect(listenSocketForHVAC,(SOCKADDR*)&address_hvac, sizeof(address_hvac));
    iResultDoor = connect(listenSocketForDoor,(SOCKADDR*)&address_Door, sizeof(address_Door));
    
    //ASSIGN VALUES TO SEND 
    sprintf(out_string_for_test, "%f", test);
    sprintf(out_string_for_test1, "%f", test1);
    //sprintf(out_string_for_test2, "%f", test2);
    sprintf(out_string_for_intensity, "%f", intensity);
    sprintf(out_string_for_temperature, "%f", temperature);  
    if(hvac_bool==true){
    	hvac = 1;
    }
    else{
    	hvac = 0;
    }
    sprintf(out_string_for_hvac, "%f", hvac);
     
    if(Door_Bool==true){
    	Door = 1;
    }
    else{
    	Door = 0;
    }
    sprintf(out_string_for_Door, "%f", Door);
    
    //SEND VALUE
    iSendResultTest = sendto(listenSocketForTest, (char *)&out_string_for_test ,sizeof(uint32_t), 0 ,(SOCKADDR *) & address_test, sizeof (address_test) );               
    iSendResultTest1 = sendto(listenSocketForTest1, (char *)&out_string_for_test1 ,sizeof(uint32_t), 0 ,(SOCKADDR *) & address_test1, sizeof (address_test1) );               
    //iSendResultTest2 = sendto(listenSocketForTest2, (char *)&out_string_for_test2 ,sizeof(uint32_t), 0 ,(SOCKADDR *) & address_test2, sizeof (address_test2) );               
    iSendResultIntensity = sendto(listenSocketForIntensity, (char *)&out_string_for_intensity ,sizeof(uint32_t), 0 ,(SOCKADDR *) & address_intensity, sizeof (address_intensity) );               
    iSendResultTemperature = sendto(listenSocketForTemperature, (char *)&out_string_for_temperature ,sizeof(uint32_t), 0 ,(SOCKADDR *) & address_temperature, sizeof (address_temperature) );               
    iSendResultHVAC = sendto(listenSocketForHVAC, (char *)&out_string_for_hvac ,sizeof(uint32_t), 0 ,(SOCKADDR *) & address_hvac, sizeof (address_hvac) );  
    iSendResultDoor = sendto(listenSocketForDoor, (char *)&out_string_for_Door ,sizeof(uint32_t), 0 ,(SOCKADDR *) & address_Door, sizeof (address_Door) );              
    
    //SHOW SENT VALUES IN CONSOLE
    printf("Test value sent: %s \n",out_string_for_test);
    printf("Test1 value sent: %s \n",out_string_for_test1);
    //printf("Test2 value sent: %s \n",out_string_for_test2);
    printf("Intensity value sent: %s \n",out_string_for_intensity);
    printf("Temperature value sent: %s \n",out_string_for_temperature);
    printf("HVAC Status value sent: %s \n",out_string_for_hvac); 
    printf("Door Status value sent: %s \n",out_string_for_Door);
    
    //RECIEVED VALUE OF TEST
    iResultTest = recv(listenSocketForTest, recvbuf, recvbuflen, 0);   
    printf("Test value recieved: %f\n",atof(recvbuf)); 
    //RECIEVED VALUE OF TEST1
    iResultTest1 = recv(listenSocketForTest1, recvbuf, recvbuflen, 0);   
    printf("Test1 value recieved: %f\n",atof(recvbuf)); 
    //RECIEVED VALUE OF TEST2
    //iResultTest2 = recv(listenSocketForTest2, recvbuf, recvbuflen, 0);   
    //test2check = atof(recvbuf);
    printf("Test2 value recieved: %f\n",test2check); 
    //RECIEVED VALUE OF INTENSITY
    iResultIntensity = recv(listenSocketForIntensity, recvbuf, recvbuflen, 0);   
    printf("Intensity value recieved: %f\n",atof(recvbuf)); 
    //RECIEVED VALUE OF TEMPERATURE
    iResultTemperature = recv(listenSocketForTemperature, recvbuf, recvbuflen, 0);   
    printf("Temperature value recieved: %f\n",atof(recvbuf)); 
    //RECIEVED VALUE OF HVAC
    iResultHVAC = recv(listenSocketForHVAC, recvbuf, recvbuflen, 0);   
    printf("HVAC value recieved: %f\n",atof(recvbuf)); 
    int hvactocheck = atof(recvbuf);
    if(hvactocheck==1){
    	hvac_text = "HVAC is ON";
    }
    else{
    	hvac_text = "HVAC is OFF";
    }
    //RECIEVED VALUE OF DOOR
    iResultDoor = recv(listenSocketForDoor, recvbuf, recvbuflen, 0);   
    printf(" DOOR value recieved: %f\n",atof(recvbuf));
    
    //CLOSE ALL THE SOCKETS
    closesocket(listenSocketForTest);
    closesocket(listenSocketForTest1);
    //closesocket(listenSocketForTest2);
    closesocket(listenSocketForIntensity);
    closesocket(listenSocketForTemperature);
    closesocket(listenSocketForHVAC);  
    closesocket(listenSocketForDoor);
    
    return 0;
    //#]
}

const int SMR_SYSTEM::getBrightness(void) const {
    return Brightness;
}

void SMR_SYSTEM::setBrightness(const int p_Brightness) {
    Brightness = p_Brightness;
    NOTIFY_SET_OPERATION;
}

const RhpString SMR_SYSTEM::getDefault_Brightness(void) const {
    return Default_Brightness;
}

void SMR_SYSTEM::setDefault_Brightness(const RhpString p_Default_Brightness) {
    Default_Brightness = p_Default_Brightness;
    NOTIFY_SET_OPERATION;
}

const RhpString SMR_SYSTEM::getDefault_Temperature(void) const {
    return Default_Temperature;
}

void SMR_SYSTEM::setDefault_Temperature(const RhpString p_Default_Temperature) {
    Default_Temperature = p_Default_Temperature;
}

const RhpString SMR_SYSTEM::getDisplay_msg(void) const {
    return Display_msg;
}

void SMR_SYSTEM::setDisplay_msg(const RhpString p_Display_msg) {
    Display_msg = p_Display_msg;
    NOTIFY_SET_OPERATION;
}

const RhpString SMR_SYSTEM::getEmergency_Alert(void) const {
    return Emergency_Alert;
}

void SMR_SYSTEM::setEmergency_Alert(const RhpString p_Emergency_Alert) {
    Emergency_Alert = p_Emergency_Alert;
}

const int SMR_SYSTEM::getFire(void) const {
    return Fire;
}

void SMR_SYSTEM::setFire(const int p_Fire) {
    Fire = p_Fire;
    NOTIFY_SET_OPERATION;
}

const RhpString SMR_SYSTEM::getFire_Alert(void) const {
    return Fire_Alert;
}

void SMR_SYSTEM::setFire_Alert(const RhpString p_Fire_Alert) {
    Fire_Alert = p_Fire_Alert;
    NOTIFY_SET_OPERATION;
}

const bool SMR_SYSTEM::getHVAC_ON(void) const {
    return HVAC_ON;
}

void SMR_SYSTEM::setHVAC_ON(const bool p_HVAC_ON) {
    HVAC_ON = p_HVAC_ON;
}

const RhpString SMR_SYSTEM::getHVAC_Status(void) const {
    return HVAC_Status;
}

void SMR_SYSTEM::setHVAC_Status(const RhpString p_HVAC_Status) {
    HVAC_Status = p_HVAC_Status;
    NOTIFY_SET_OPERATION;
}

const int SMR_SYSTEM::getInt32(void) const {
    return Int32;
}

void SMR_SYSTEM::setInt32(const int p_Int32) {
    Int32 = p_Int32;
}

const float SMR_SYSTEM::getLight_Default(void) const {
    return Light_Default;
}

void SMR_SYSTEM::setLight_Default(const float p_Light_Default) {
    Light_Default = p_Light_Default;
}

const int SMR_SYSTEM::getLight_settings(void) const {
    return Light_settings;
}

void SMR_SYSTEM::setLight_settings(const int p_Light_settings) {
    Light_settings = p_Light_settings;
}

const RhpString SMR_SYSTEM::getRoom_Status(void) const {
    return Room_Status;
}

void SMR_SYSTEM::setRoom_Status(const RhpString p_Room_Status) {
    Room_Status = p_Room_Status;
    NOTIFY_SET_OPERATION;
}

const RhpInteger SMR_SYSTEM::getSecurity(void) const {
    return Security;
}

void SMR_SYSTEM::setSecurity(const RhpInteger p_Security) {
    Security = p_Security;
}

const int SMR_SYSTEM::getSystem_LED_OFF(void) const {
    return System_LED_OFF;
}

void SMR_SYSTEM::setSystem_LED_OFF(const int p_System_LED_OFF) {
    System_LED_OFF = p_System_LED_OFF;
}

const int SMR_SYSTEM::getSystem_LED_ON(void) const {
    return System_LED_ON;
}

void SMR_SYSTEM::setSystem_LED_ON(const int p_System_LED_ON) {
    System_LED_ON = p_System_LED_ON;
    NOTIFY_SET_OPERATION;
}

const float SMR_SYSTEM::getTemperature_Default(void) const {
    return Temperature_Default;
}

void SMR_SYSTEM::setTemperature_Default(const float p_Temperature_Default) {
    Temperature_Default = p_Temperature_Default;
}

const SOCKADDR_IN SMR_SYSTEM::getAddress_hvac(void) const {
    return address_hvac;
}

void SMR_SYSTEM::setAddress_hvac(const SOCKADDR_IN p_address_hvac) {
    address_hvac = p_address_hvac;
}

const SOCKADDR_IN SMR_SYSTEM::getAddress_intensity(void) const {
    return address_intensity;
}

void SMR_SYSTEM::setAddress_intensity(const SOCKADDR_IN p_address_intensity) {
    address_intensity = p_address_intensity;
}

const SOCKADDR_IN SMR_SYSTEM::getAddress_temperature(void) const {
    return address_temperature;
}

void SMR_SYSTEM::setAddress_temperature(const SOCKADDR_IN p_address_temperature) {
    address_temperature = p_address_temperature;
}

const SOCKADDR_IN SMR_SYSTEM::getAddress_test(void) const {
    return address_test;
}

void SMR_SYSTEM::setAddress_test(const SOCKADDR_IN p_address_test) {
    address_test = p_address_test;
}

const SOCKADDR_IN SMR_SYSTEM::getAddress_test1(void) const {
    return address_test1;
}

void SMR_SYSTEM::setAddress_test1(const SOCKADDR_IN p_address_test1) {
    address_test1 = p_address_test1;
}

const SOCKADDR_IN SMR_SYSTEM::getAddress_test2(void) const {
    return address_test2;
}

void SMR_SYSTEM::setAddress_test2(const SOCKADDR_IN p_address_test2) {
    address_test2 = p_address_test2;
}

const SOCKET SMR_SYSTEM::getConnectSocketForHVAC(void) const {
    return connectSocketForHVAC;
}

void SMR_SYSTEM::setConnectSocketForHVAC(const SOCKET p_connectSocketForHVAC) {
    connectSocketForHVAC = p_connectSocketForHVAC;
}

const SOCKET SMR_SYSTEM::getConnectSocketForIntensity(void) const {
    return connectSocketForIntensity;
}

void SMR_SYSTEM::setConnectSocketForIntensity(const SOCKET p_connectSocketForIntensity) {
    connectSocketForIntensity = p_connectSocketForIntensity;
}

const SOCKET SMR_SYSTEM::getConnectSocketForTemperature(void) const {
    return connectSocketForTemperature;
}

void SMR_SYSTEM::setConnectSocketForTemperature(const SOCKET p_connectSocketForTemperature) {
    connectSocketForTemperature = p_connectSocketForTemperature;
}

const SOCKET SMR_SYSTEM::getConnectSocketForTest(void) const {
    return connectSocketForTest;
}

void SMR_SYSTEM::setConnectSocketForTest(const SOCKET p_connectSocketForTest) {
    connectSocketForTest = p_connectSocketForTest;
}

const SOCKET SMR_SYSTEM::getConnectSocketForTest1(void) const {
    return connectSocketForTest1;
}

void SMR_SYSTEM::setConnectSocketForTest1(const SOCKET p_connectSocketForTest1) {
    connectSocketForTest1 = p_connectSocketForTest1;
}

const SOCKET SMR_SYSTEM::getConnectSocketForTest2(void) const {
    return connectSocketForTest2;
}

void SMR_SYSTEM::setConnectSocketForTest2(const SOCKET p_connectSocketForTest2) {
    connectSocketForTest2 = p_connectSocketForTest2;
}

const OMString SMR_SYSTEM::getDisplayValue(void) const {
    return displayValue;
}

void SMR_SYSTEM::setDisplayValue(const OMString p_displayValue) {
    displayValue = p_displayValue;
}

const OMString SMR_SYSTEM::getFilename(void) const {
    return filename;
}

void SMR_SYSTEM::setFilename(const OMString p_filename) {
    filename = p_filename;
}

const double SMR_SYSTEM::getFval(void) const {
    return fval;
}

void SMR_SYSTEM::setFval(const double p_fval) {
    fval = p_fval;
}

const float SMR_SYSTEM::getHvac(void) const {
    return hvac;
}

void SMR_SYSTEM::setHvac(const float p_hvac) {
    hvac = p_hvac;
}

const bool SMR_SYSTEM::getHvac_bool(void) const {
    return hvac_bool;
}

void SMR_SYSTEM::setHvac_bool(const bool p_hvac_bool) {
    hvac_bool = p_hvac_bool;
    NOTIFY_SET_OPERATION;
}

const OMString SMR_SYSTEM::getHvac_text(void) const {
    return hvac_text;
}

void SMR_SYSTEM::setHvac_text(const OMString p_hvac_text) {
    hvac_text = p_hvac_text;
}

const int SMR_SYSTEM::getIResultHVAC(void) const {
    return iResultHVAC;
}

void SMR_SYSTEM::setIResultHVAC(const int p_iResultHVAC) {
    iResultHVAC = p_iResultHVAC;
}

const int SMR_SYSTEM::getIResultIntensity(void) const {
    return iResultIntensity;
}

void SMR_SYSTEM::setIResultIntensity(const int p_iResultIntensity) {
    iResultIntensity = p_iResultIntensity;
}

const int SMR_SYSTEM::getIResultTemperature(void) const {
    return iResultTemperature;
}

void SMR_SYSTEM::setIResultTemperature(const int p_iResultTemperature) {
    iResultTemperature = p_iResultTemperature;
}

const int SMR_SYSTEM::getIResultTest(void) const {
    return iResultTest;
}

void SMR_SYSTEM::setIResultTest(const int p_iResultTest) {
    iResultTest = p_iResultTest;
}

const int SMR_SYSTEM::getIResultTest1(void) const {
    return iResultTest1;
}

void SMR_SYSTEM::setIResultTest1(const int p_iResultTest1) {
    iResultTest1 = p_iResultTest1;
}

const int SMR_SYSTEM::getIResultTest2(void) const {
    return iResultTest2;
}

void SMR_SYSTEM::setIResultTest2(const int p_iResultTest2) {
    iResultTest2 = p_iResultTest2;
}

const int SMR_SYSTEM::getISendResultHVAC(void) const {
    return iSendResultHVAC;
}

void SMR_SYSTEM::setISendResultHVAC(const int p_iSendResultHVAC) {
    iSendResultHVAC = p_iSendResultHVAC;
}

const int SMR_SYSTEM::getISendResultIntensity(void) const {
    return iSendResultIntensity;
}

void SMR_SYSTEM::setISendResultIntensity(const int p_iSendResultIntensity) {
    iSendResultIntensity = p_iSendResultIntensity;
}

const int SMR_SYSTEM::getISendResultTemperature(void) const {
    return iSendResultTemperature;
}

void SMR_SYSTEM::setISendResultTemperature(const int p_iSendResultTemperature) {
    iSendResultTemperature = p_iSendResultTemperature;
}

const int SMR_SYSTEM::getISendResultTest(void) const {
    return iSendResultTest;
}

void SMR_SYSTEM::setISendResultTest(const int p_iSendResultTest) {
    iSendResultTest = p_iSendResultTest;
}

const int SMR_SYSTEM::getISendResultTest1(void) const {
    return iSendResultTest1;
}

void SMR_SYSTEM::setISendResultTest1(const int p_iSendResultTest1) {
    iSendResultTest1 = p_iSendResultTest1;
}

const int SMR_SYSTEM::getISendResultTest2(void) const {
    return iSendResultTest2;
}

void SMR_SYSTEM::setISendResultTest2(const int p_iSendResultTest2) {
    iSendResultTest2 = p_iSendResultTest2;
}

const float SMR_SYSTEM::getIntensity(void) const {
    return intensity;
}

void SMR_SYSTEM::setIntensity(const float p_intensity) {
    intensity = p_intensity;
}

const SOCKET SMR_SYSTEM::getListenSocketForHVAC(void) const {
    return listenSocketForHVAC;
}

void SMR_SYSTEM::setListenSocketForHVAC(const SOCKET p_listenSocketForHVAC) {
    listenSocketForHVAC = p_listenSocketForHVAC;
}

const SOCKET SMR_SYSTEM::getListenSocketForIntensity(void) const {
    return listenSocketForIntensity;
}

void SMR_SYSTEM::setListenSocketForIntensity(const SOCKET p_listenSocketForIntensity) {
    listenSocketForIntensity = p_listenSocketForIntensity;
}

const SOCKET SMR_SYSTEM::getListenSocketForTemperature(void) const {
    return listenSocketForTemperature;
}

void SMR_SYSTEM::setListenSocketForTemperature(const SOCKET p_listenSocketForTemperature) {
    listenSocketForTemperature = p_listenSocketForTemperature;
}

const SOCKET SMR_SYSTEM::getListenSocketForTest(void) const {
    return listenSocketForTest;
}

void SMR_SYSTEM::setListenSocketForTest(const SOCKET p_listenSocketForTest) {
    listenSocketForTest = p_listenSocketForTest;
}

const SOCKET SMR_SYSTEM::getListenSocketForTest1(void) const {
    return listenSocketForTest1;
}

void SMR_SYSTEM::setListenSocketForTest1(const SOCKET p_listenSocketForTest1) {
    listenSocketForTest1 = p_listenSocketForTest1;
}

const SOCKET SMR_SYSTEM::getListenSocketForTest2(void) const {
    return listenSocketForTest2;
}

void SMR_SYSTEM::setListenSocketForTest2(const SOCKET p_listenSocketForTest2) {
    listenSocketForTest2 = p_listenSocketForTest2;
}

const RhpInteger SMR_SYSTEM::getPassword(void) const {
    return password;
}

void SMR_SYSTEM::setPassword(const RhpInteger p_password) {
    password = p_password;
}

void SMR_SYSTEM::setPin1(const int p_pin1) {
    pin1 = p_pin1;
    NOTIFY_STATIC_SET_OPERATION(SMR_SYSTEM);
}

void SMR_SYSTEM::setPin2(const int p_pin2) {
    pin2 = p_pin2;
    NOTIFY_STATIC_SET_OPERATION(SMR_SYSTEM);
}

void SMR_SYSTEM::setPin3(const int p_pin3) {
    pin3 = p_pin3;
    NOTIFY_STATIC_SET_OPERATION(SMR_SYSTEM);
}

const int SMR_SYSTEM::getPortHVAC(void) const {
    return portHVAC;
}

void SMR_SYSTEM::setPortHVAC(const int p_portHVAC) {
    portHVAC = p_portHVAC;
}

const int SMR_SYSTEM::getPortIntensity(void) const {
    return portIntensity;
}

void SMR_SYSTEM::setPortIntensity(const int p_portIntensity) {
    portIntensity = p_portIntensity;
}

const int SMR_SYSTEM::getPortTemperature(void) const {
    return portTemperature;
}

void SMR_SYSTEM::setPortTemperature(const int p_portTemperature) {
    portTemperature = p_portTemperature;
}

const int SMR_SYSTEM::getPortTest(void) const {
    return portTest;
}

void SMR_SYSTEM::setPortTest(const int p_portTest) {
    portTest = p_portTest;
}

const int SMR_SYSTEM::getPortTest1(void) const {
    return portTest1;
}

void SMR_SYSTEM::setPortTest1(const int p_portTest1) {
    portTest1 = p_portTest1;
}

const int SMR_SYSTEM::getPortTest2(void) const {
    return portTest2;
}

void SMR_SYSTEM::setPortTest2(const int p_portTest2) {
    portTest2 = p_portTest2;
}

const char SMR_SYSTEM::getRecvbuf(const Rhp_int32_t iterI1) const {
    return recvbuf[iterI1];
}

void SMR_SYSTEM::setRecvbuf(const Rhp_int32_t iterI1, const char p_recvbuf) {
    recvbuf[iterI1] = p_recvbuf;
}

const int SMR_SYSTEM::getRecvbuflen(void) const {
    return recvbuflen;
}

void SMR_SYSTEM::setRecvbuflen(const int p_recvbuflen) {
    recvbuflen = p_recvbuflen;
}

const int SMR_SYSTEM::getSendbuflen(void) const {
    return sendbuflen;
}

void SMR_SYSTEM::setSendbuflen(const int p_sendbuflen) {
    sendbuflen = p_sendbuflen;
}

const char* SMR_SYSTEM::getServerName(void) const {
    return serverName;
}

void SMR_SYSTEM::setServerName(char* const p_serverName) {
    serverName = p_serverName;
}

const char SMR_SYSTEM::getSndmsgbuf(const Rhp_int32_t iterI1) const {
    return sndmsgbuf[iterI1];
}

void SMR_SYSTEM::setSndmsgbuf(const Rhp_int32_t iterI1, const char p_sndmsgbuf) {
    sndmsgbuf[iterI1] = p_sndmsgbuf;
}

const int SMR_SYSTEM::getSockfd(void) const {
    return sockfd;
}

void SMR_SYSTEM::setSockfd(const int p_sockfd) {
    sockfd = p_sockfd;
}

const char SMR_SYSTEM::getTemp(void) const {
    return temp;
}

void SMR_SYSTEM::setTemp(const char p_temp) {
    temp = p_temp;
}

const float SMR_SYSTEM::getTemperature(void) const {
    return temperature;
}

void SMR_SYSTEM::setTemperature(const float p_temperature) {
    temperature = p_temperature;
}

const float SMR_SYSTEM::getTest(void) const {
    return test;
}

void SMR_SYSTEM::setTest(const float p_test) {
    test = p_test;
}

const float SMR_SYSTEM::getTest1(void) const {
    return test1;
}

void SMR_SYSTEM::setTest1(const float p_test1) {
    test1 = p_test1;
}

const float SMR_SYSTEM::getTest2(void) const {
    return test2;
}

void SMR_SYSTEM::setTest2(const float p_test2) {
    test2 = p_test2;
}

const float SMR_SYSTEM::getTest2check(void) const {
    return test2check;
}

void SMR_SYSTEM::setTest2check(const float p_test2check) {
    test2check = p_test2check;
}

const double SMR_SYSTEM::getUtof(void) const {
    return utof;
}

void SMR_SYSTEM::setUtof(const double p_utof) {
    utof = p_utof;
}

const bool SMR_SYSTEM::getWindow_bool(void) const {
    return window_bool;
}

void SMR_SYSTEM::setWindow_bool(const bool p_window_bool) {
    window_bool = p_window_bool;
    NOTIFY_SET_OPERATION;
}

const RhpString SMR_SYSTEM::getWindow_status(void) const {
    return window_status;
}

void SMR_SYSTEM::setWindow_status(const RhpString p_window_status) {
    window_status = p_window_status;
    NOTIFY_SET_OPERATION;
}

const WSADATA SMR_SYSTEM::getWs(void) const {
    return ws;
}

void SMR_SYSTEM::setWs(const WSADATA p_ws) {
    ws = p_ws;
}

const SMR_SYSTEM* SMR_SYSTEM::getItsSMR_SYSTEM(void) const {
    return itsSMR_SYSTEM;
}

void SMR_SYSTEM::setItsSMR_SYSTEM(SMR_SYSTEM* const p_SMR_SYSTEM) {
    if(p_SMR_SYSTEM != NULL)
        {
            p_SMR_SYSTEM->_setItsSMR_SYSTEM_1(this);
        }
    _setItsSMR_SYSTEM(p_SMR_SYSTEM);
}

const SMR_SYSTEM* SMR_SYSTEM::getItsSMR_SYSTEM_1(void) const {
    return itsSMR_SYSTEM_1;
}

void SMR_SYSTEM::setItsSMR_SYSTEM_1(SMR_SYSTEM* const p_SMR_SYSTEM) {
    if(p_SMR_SYSTEM != NULL)
        {
            p_SMR_SYSTEM->_setItsSMR_SYSTEM(this);
        }
    _setItsSMR_SYSTEM_1(p_SMR_SYSTEM);
}

bool SMR_SYSTEM::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(DispenseFuel_DispenseFuel_DispenseFuel_state_11_timeout == arg)
        {
            DispenseFuel_DispenseFuel_DispenseFuel_state_11_timeout = NULL;
            res = true;
        }
    if(DispenseFuel_DispenseFuel_DispenseFuel_state_10_timeout == arg)
        {
            DispenseFuel_DispenseFuel_DispenseFuel_state_10_timeout = NULL;
            res = true;
        }
    if(state_11_timeout == arg)
        {
            state_11_timeout = NULL;
            res = true;
        }
    if(state_10_timeout == arg)
        {
            state_10_timeout = NULL;
            res = true;
        }
    if(DispenseFuel_DispenseFuel_state_11_timeout == arg)
        {
            DispenseFuel_DispenseFuel_state_11_timeout = NULL;
            res = true;
        }
    if(DispenseFuel_DispenseFuel_state_10_timeout == arg)
        {
            DispenseFuel_DispenseFuel_state_10_timeout = NULL;
            res = true;
        }
    if(DispenseFuel_state_11_timeout == arg)
        {
            DispenseFuel_state_11_timeout = NULL;
            res = true;
        }
    if(DispenseFuel_state_10_timeout == arg)
        {
            DispenseFuel_state_10_timeout = NULL;
            res = true;
        }
    return res;
}

bool SMR_SYSTEM::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void SMR_SYSTEM::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_56_state_46_subState = OMNonState;
    state_56_state_46_active = OMNonState;
    DispenseFuel_DispenseFuel_DispenseFuel_state_11_subState = OMNonState;
    DispenseFuel_DispenseFuel_DispenseFuel_state_11_active = OMNonState;
    DispenseFuel_DispenseFuel_DispenseFuel_state_11_timeout = NULL;
    DispenseFuel_DispenseFuel_DispenseFuel_state_10_subState = OMNonState;
    DispenseFuel_DispenseFuel_DispenseFuel_state_10_active = OMNonState;
    DispenseFuel_DispenseFuel_DispenseFuel_state_10_timeout = NULL;
    state_56_state_42_subState = OMNonState;
    state_56_state_42_active = OMNonState;
    state_56_state_41_subState = OMNonState;
    state_56_state_41_active = OMNonState;
    state_56_state_40_subState = OMNonState;
    state_56_state_40_active = OMNonState;
    state_46_subState = OMNonState;
    state_46_active = OMNonState;
    state_11_subState = OMNonState;
    state_11_active = OMNonState;
    state_11_timeout = NULL;
    state_10_subState = OMNonState;
    state_10_active = OMNonState;
    state_10_timeout = NULL;
    state_42_subState = OMNonState;
    state_42_active = OMNonState;
    state_41_subState = OMNonState;
    state_41_active = OMNonState;
    state_40_subState = OMNonState;
    state_40_active = OMNonState;
    Meeting_mode_state_51_subState = OMNonState;
    Meeting_mode_state_51_active = OMNonState;
    DispenseFuel_DispenseFuel_state_11_subState = OMNonState;
    DispenseFuel_DispenseFuel_state_11_active = OMNonState;
    DispenseFuel_DispenseFuel_state_11_timeout = NULL;
    DispenseFuel_DispenseFuel_state_10_subState = OMNonState;
    DispenseFuel_DispenseFuel_state_10_active = OMNonState;
    DispenseFuel_DispenseFuel_state_10_timeout = NULL;
    Meeting_mode_state_48_subState = OMNonState;
    Meeting_mode_state_48_active = OMNonState;
    Meeting_mode_state_45_subState = OMNonState;
    Meeting_mode_state_45_active = OMNonState;
    Meeting_mode_state_44_subState = OMNonState;
    Meeting_mode_state_44_active = OMNonState;
    Meeting_mode_state_43_subState = OMNonState;
    Meeting_mode_state_43_active = OMNonState;
    state_51_subState = OMNonState;
    state_51_active = OMNonState;
    DispenseFuel_state_11_subState = OMNonState;
    DispenseFuel_state_11_active = OMNonState;
    DispenseFuel_state_11_timeout = NULL;
    DispenseFuel_state_10_subState = OMNonState;
    DispenseFuel_state_10_active = OMNonState;
    DispenseFuel_state_10_timeout = NULL;
    state_48_subState = OMNonState;
    state_48_active = OMNonState;
    state_45_subState = OMNonState;
    state_45_active = OMNonState;
    state_44_subState = OMNonState;
    state_44_active = OMNonState;
    state_43_subState = OMNonState;
    state_43_active = OMNonState;
}

void SMR_SYSTEM::cleanUpRelations(void) {
    if(itsSMR_SYSTEM != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMR_SYSTEM");
            const SMR_SYSTEM* p_SMR_SYSTEM = itsSMR_SYSTEM->getItsSMR_SYSTEM_1();
            if(p_SMR_SYSTEM != NULL)
                {
                    itsSMR_SYSTEM->__setItsSMR_SYSTEM_1(NULL);
                }
            itsSMR_SYSTEM = NULL;
        }
    if(itsSMR_SYSTEM_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMR_SYSTEM_1");
            const SMR_SYSTEM* p_SMR_SYSTEM = itsSMR_SYSTEM_1->getItsSMR_SYSTEM();
            if(p_SMR_SYSTEM != NULL)
                {
                    itsSMR_SYSTEM_1->__setItsSMR_SYSTEM(NULL);
                }
            itsSMR_SYSTEM_1 = NULL;
        }
}

void SMR_SYSTEM::cancelTimeouts(void) {
    cancel(DispenseFuel_DispenseFuel_DispenseFuel_state_11_timeout);
    cancel(DispenseFuel_DispenseFuel_DispenseFuel_state_10_timeout);
    cancel(state_11_timeout);
    cancel(state_10_timeout);
    cancel(DispenseFuel_DispenseFuel_state_11_timeout);
    cancel(DispenseFuel_DispenseFuel_state_10_timeout);
    cancel(DispenseFuel_state_11_timeout);
    cancel(DispenseFuel_state_10_timeout);
}

void SMR_SYSTEM::__setItsSMR_SYSTEM(SMR_SYSTEM* const p_SMR_SYSTEM) {
    itsSMR_SYSTEM = p_SMR_SYSTEM;
    if(p_SMR_SYSTEM != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMR_SYSTEM", p_SMR_SYSTEM, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMR_SYSTEM");
        }
}

void SMR_SYSTEM::_setItsSMR_SYSTEM(SMR_SYSTEM* const p_SMR_SYSTEM) {
    if(itsSMR_SYSTEM != NULL)
        {
            itsSMR_SYSTEM->__setItsSMR_SYSTEM_1(NULL);
        }
    __setItsSMR_SYSTEM(p_SMR_SYSTEM);
}

void SMR_SYSTEM::_clearItsSMR_SYSTEM(void) {
    NOTIFY_RELATION_CLEARED("itsSMR_SYSTEM");
    itsSMR_SYSTEM = NULL;
}

void SMR_SYSTEM::__setItsSMR_SYSTEM_1(SMR_SYSTEM* const p_SMR_SYSTEM) {
    itsSMR_SYSTEM_1 = p_SMR_SYSTEM;
    if(p_SMR_SYSTEM != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMR_SYSTEM_1", p_SMR_SYSTEM, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMR_SYSTEM_1");
        }
}

void SMR_SYSTEM::_setItsSMR_SYSTEM_1(SMR_SYSTEM* const p_SMR_SYSTEM) {
    if(itsSMR_SYSTEM_1 != NULL)
        {
            itsSMR_SYSTEM_1->__setItsSMR_SYSTEM(NULL);
        }
    __setItsSMR_SYSTEM_1(p_SMR_SYSTEM);
}

void SMR_SYSTEM::_clearItsSMR_SYSTEM_1(void) {
    NOTIFY_RELATION_CLEARED("itsSMR_SYSTEM_1");
    itsSMR_SYSTEM_1 = NULL;
}

int SMR_SYSTEM::pin1;

int SMR_SYSTEM::pin2;

int SMR_SYSTEM::pin3;

float SMR_SYSTEM::Room_Temperature(0);

const float SMR_SYSTEM::getDoor(void) const {
    return Door;
}

void SMR_SYSTEM::setDoor(const float p_Door) {
    Door = p_Door;
}

const bool SMR_SYSTEM::getDoor_Bool(void) const {
    return Door_Bool;
}

void SMR_SYSTEM::setDoor_Bool(const bool p_Door_Bool) {
    Door_Bool = p_Door_Bool;
    NOTIFY_SET_OPERATION;
}

const int SMR_SYSTEM::getMeeting_Light(void) const {
    return Meeting_Light;
}

void SMR_SYSTEM::setMeeting_Light(const int p_Meeting_Light) {
    Meeting_Light = p_Meeting_Light;
}

const int SMR_SYSTEM::getMeeting_Temperature(void) const {
    return Meeting_Temperature;
}

void SMR_SYSTEM::setMeeting_Temperature(const int p_Meeting_Temperature) {
    Meeting_Temperature = p_Meeting_Temperature;
}

float SMR_SYSTEM::getRoom_Temperature(void) {
    return Room_Temperature;
}

void SMR_SYSTEM::setRoom_Temperature(const float p_Room_Temperature) {
    Room_Temperature = p_Room_Temperature;
    NOTIFY_STATIC_SET_OPERATION(SMR_SYSTEM);
}

const SOCKADDR_IN SMR_SYSTEM::getAddress_Door(void) const {
    return address_Door;
}

void SMR_SYSTEM::setAddress_Door(const SOCKADDR_IN p_address_Door) {
    address_Door = p_address_Door;
}

const SOCKET SMR_SYSTEM::getConnectSocketForDoor(void) const {
    return connectSocketForDoor;
}

void SMR_SYSTEM::setConnectSocketForDoor(const SOCKET p_connectSocketForDoor) {
    connectSocketForDoor = p_connectSocketForDoor;
}

const int SMR_SYSTEM::getIResultDoor(void) const {
    return iResultDoor;
}

void SMR_SYSTEM::setIResultDoor(const int p_iResultDoor) {
    iResultDoor = p_iResultDoor;
}

const int SMR_SYSTEM::getISendResultDoor(void) const {
    return iSendResultDoor;
}

void SMR_SYSTEM::setISendResultDoor(const int p_iSendResultDoor) {
    iSendResultDoor = p_iSendResultDoor;
}

const SOCKET SMR_SYSTEM::getListenSocketForDoor(void) const {
    return listenSocketForDoor;
}

void SMR_SYSTEM::setListenSocketForDoor(const SOCKET p_listenSocketForDoor) {
    listenSocketForDoor = p_listenSocketForDoor;
}

int SMR_SYSTEM::getPin1(void) {
    return pin1;
}

int SMR_SYSTEM::getPin2(void) {
    return pin2;
}

int SMR_SYSTEM::getPin3(void) {
    return pin3;
}

const int SMR_SYSTEM::getPortDoor(void) const {
    return portDoor;
}

void SMR_SYSTEM::setPortDoor(const int p_portDoor) {
    portDoor = p_portDoor;
}

void SMR_SYSTEM::state_56_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.state_56");
    rootState_subState = state_56;
    rootState_active = state_56;
    //#[ state state_56.(Entry) 
                  Display_msg = " Login Here";
                 System_LED_ON = 1;
                 System_LED_OFF = 0;
                 Fire = 1;
                 Fire_Alert = " Evacuate the premises ";  
                 Room_Status = " Room is shutting down"; 
                 HVAC_Status = " HVAC OFF ";
                 hvac_bool = 0;
                 Door_Bool = 0;
                  
                 test = 5;
    //#]
    state_56_state_40_entDef();
    state_56_state_41_entDef();
    state_56_state_42_entDef();
    state_56_state_46_entDef();
}

void SMR_SYSTEM::state_56_exit(void) {
    state_56_state_40_exit();
    state_56_state_41_exit();
    state_56_state_42_exit();
    state_56_state_46_exit();
    
    NOTIFY_STATE_EXITED("ROOT.state_56");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_56TakeDisable_Alarm(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("10");
    state_56_exit();
    SMR_Ready_entDef();
    NOTIFY_TRANSITION_TERMINATED("10");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_56TakeSystem_OFF(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("44");
    state_56_exit();
    NOTIFY_STATE_ENTERED("ROOT.Default_State");
    rootState_subState = Default_State;
    rootState_active = Default_State;
    //#[ state Default_State.(Entry) 
                Fire = 0; 
                Door = 0;
                System_LED_ON = 0;
                System_LED_OFF = 1;
                hvac_bool = 0; 
                intensity = 0;
                Display_msg = "";
                Room_Status = "Room is Vacant";
                Fire_Alert = " ";
                Emergency_Alert = " ";
                Default_Temperature = "" ;
                Default_Brightness = "";
                Brightness = 0;
                Room_Temperature = 0;
                HVAC_Status = " ";
                window_status = " " ; 
                test = 1;
                
                
    //#]
    NOTIFY_TRANSITION_TERMINATED("44");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_56_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    IOxfReactive::TakeEventStatus omComponentStatus = eventNotConsumed;
    bool dispatchDone = false;
    {
        // State state_40
        omComponentStatus = state_56_state_40_processEvent();
        if(omComponentStatus != eventNotConsumed)
            {
                res = eventConsumed;
                if(IS_IN(state_56) == false)
                    {
                        dispatchDone = true;
                    }
            }
    }
    if(!dispatchDone)
        {
            // State state_41
            omComponentStatus = state_56_state_41_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                    if(IS_IN(state_56) == false)
                        {
                            dispatchDone = true;
                        }
                }
        }
    if(!dispatchDone)
        {
            // State state_42
            omComponentStatus = state_56_state_42_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                    if(IS_IN(state_56) == false)
                        {
                            dispatchDone = true;
                        }
                }
        }
    if(!dispatchDone)
        {
            // State state_46
            omComponentStatus = state_56_state_46_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                }
        }
    if(res == eventNotConsumed)
        {
            res = state_56_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_56_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(System_OFF_Default_id) == 1)
        {
            res = state_56TakeSystem_OFF();
        }
    else {
        if(IS_EVENT_TYPE_OF(Disable_Alarm_Default_id) == 1)
            {
                res = state_56TakeDisable_Alarm();
            }
        }
        
    
    return res;
}

void SMR_SYSTEM::state_56_state_46_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.state_56.state_46");
    NOTIFY_TRANSITION_STARTED("40");
    state_46_DispenseFuel_entDef();
    NOTIFY_TRANSITION_TERMINATED("40");
}

void SMR_SYSTEM::state_56_state_46_exit(void) {
    // State DispenseFuel
    if(state_56_state_46_subState == state_46_DispenseFuel)
        {
            state_46_DispenseFuel_exit();
        }
    state_56_state_46_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_56.state_46");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_56_state_46_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State DispenseFuel
    if(state_56_state_46_active == state_46_DispenseFuel)
        {
            res = state_46_DispenseFuel_processEvent();
        }
    return res;
}

void SMR_SYSTEM::state_46_DispenseFuel_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.state_56.state_46.DispenseFuel");
    state_56_state_46_subState = state_46_DispenseFuel;
    state_56_state_46_active = state_46_DispenseFuel;
    DispenseFuel_DispenseFuel_DispenseFuel_state_10_entDef();
    DispenseFuel_DispenseFuel_DispenseFuel_state_11_entDef();
}

void SMR_SYSTEM::state_46_DispenseFuel_exit(void) {
    switch (DispenseFuel_DispenseFuel_DispenseFuel_state_10_subState) {
        // State UpdateVariable
        case state_10_state_10_state_10_UpdateVariable:
        {
            cancel(DispenseFuel_DispenseFuel_DispenseFuel_state_10_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
        }
        break;
        case state_10_state_10_state_10_accepttimeevent_25:
        {
            NOTIFY_STATE_EXITED("ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.accepttimeevent_25");
        }
        break;
        default:
            break;
    }
    DispenseFuel_DispenseFuel_DispenseFuel_state_10_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_10");
    DispenseFuel_DispenseFuel_DispenseFuel_state_11_exit();
    
    NOTIFY_STATE_EXITED("ROOT.state_56.state_46.DispenseFuel");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_46_DispenseFuel_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    IOxfReactive::TakeEventStatus omComponentStatus = eventNotConsumed;
    bool dispatchDone = false;
    {
        // State state_10
        omComponentStatus = DispenseFuel_DispenseFuel_DispenseFuel_state_10_processEvent();
        if(omComponentStatus != eventNotConsumed)
            {
                res = eventConsumed;
                if(IS_IN(state_46_DispenseFuel) == false)
                    {
                        dispatchDone = true;
                    }
            }
    }
    if(!dispatchDone)
        {
            // State state_11
            omComponentStatus = DispenseFuel_DispenseFuel_DispenseFuel_state_11_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                }
        }
    
    return res;
}

void SMR_SYSTEM::DispenseFuel_DispenseFuel_DispenseFuel_state_11_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_11");
    NOTIFY_TRANSITION_STARTED("ROOT.state_56.state_46.DispenseFuel.0");
    NOTIFY_STATE_ENTERED("ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
    DispenseFuel_DispenseFuel_DispenseFuel_state_11_subState = state_11_state_11_state_11_SendAndRecieve;
    DispenseFuel_DispenseFuel_DispenseFuel_state_11_active = state_11_state_11_state_11_SendAndRecieve;
    //#[ state state_56.state_46.DispenseFuel.DispenseFuel.state_11.SendAndRecieve.(Entry) 
    callMain();
                
     
    //#]
    DispenseFuel_DispenseFuel_DispenseFuel_state_11_timeout = scheduleTimeout(1000, "ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
    NOTIFY_TRANSITION_TERMINATED("ROOT.state_56.state_46.DispenseFuel.0");
}

void SMR_SYSTEM::DispenseFuel_DispenseFuel_DispenseFuel_state_11_exit(void) {
    // State SendAndRecieve
    if(DispenseFuel_DispenseFuel_DispenseFuel_state_11_subState == state_11_state_11_state_11_SendAndRecieve)
        {
            cancel(DispenseFuel_DispenseFuel_DispenseFuel_state_11_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
        }
    DispenseFuel_DispenseFuel_DispenseFuel_state_11_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_11");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::DispenseFuel_DispenseFuel_DispenseFuel_state_11_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State SendAndRecieve
    if(DispenseFuel_DispenseFuel_DispenseFuel_state_11_active == state_11_state_11_state_11_SendAndRecieve)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == DispenseFuel_DispenseFuel_DispenseFuel_state_11_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.state_56.state_46.DispenseFuel.1");
                            cancel(DispenseFuel_DispenseFuel_DispenseFuel_state_11_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
                            NOTIFY_STATE_ENTERED("ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
                            DispenseFuel_DispenseFuel_DispenseFuel_state_11_subState = state_11_state_11_state_11_SendAndRecieve;
                            DispenseFuel_DispenseFuel_DispenseFuel_state_11_active = state_11_state_11_state_11_SendAndRecieve;
                            //#[ state state_56.state_46.DispenseFuel.DispenseFuel.state_11.SendAndRecieve.(Entry) 
                            callMain();
                                        
                             
                            //#]
                            DispenseFuel_DispenseFuel_DispenseFuel_state_11_timeout = scheduleTimeout(1000, "ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
                            NOTIFY_TRANSITION_TERMINATED("ROOT.state_56.state_46.DispenseFuel.1");
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

void SMR_SYSTEM::DispenseFuel_DispenseFuel_DispenseFuel_state_10_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_10");
    NOTIFY_TRANSITION_STARTED("ROOT.state_56.state_46.DispenseFuel.2");
    NOTIFY_STATE_ENTERED("ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
    DispenseFuel_DispenseFuel_DispenseFuel_state_10_subState = state_10_state_10_state_10_UpdateVariable;
    DispenseFuel_DispenseFuel_DispenseFuel_state_10_active = state_10_state_10_state_10_UpdateVariable;
    //#[ state state_56.state_46.DispenseFuel.DispenseFuel.state_10.UpdateVariable.(Entry) 
    test++;  
    test1++;      
    test2++;
    //#]
    DispenseFuel_DispenseFuel_DispenseFuel_state_10_timeout = scheduleTimeout(5000, "ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
    NOTIFY_TRANSITION_TERMINATED("ROOT.state_56.state_46.DispenseFuel.2");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::DispenseFuel_DispenseFuel_DispenseFuel_state_10_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (DispenseFuel_DispenseFuel_DispenseFuel_state_10_active) {
        // State UpdateVariable
        case state_10_state_10_state_10_UpdateVariable:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == DispenseFuel_DispenseFuel_DispenseFuel_state_10_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.state_56.state_46.DispenseFuel.3");
                            cancel(DispenseFuel_DispenseFuel_DispenseFuel_state_10_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
                            NOTIFY_STATE_ENTERED("ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.accepttimeevent_25");
                            DispenseFuel_DispenseFuel_DispenseFuel_state_10_subState = state_10_state_10_state_10_accepttimeevent_25;
                            DispenseFuel_DispenseFuel_DispenseFuel_state_10_active = state_10_state_10_state_10_accepttimeevent_25;
                            NOTIFY_TRANSITION_TERMINATED("ROOT.state_56.state_46.DispenseFuel.3");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case state_10_state_10_state_10_accepttimeevent_25:
        {
            if(IS_EVENT_TYPE_OF(MeetingMode_Default_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.state_56.state_46.DispenseFuel.4");
                    NOTIFY_STATE_EXITED("ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.accepttimeevent_25");
                    NOTIFY_STATE_ENTERED("ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
                    DispenseFuel_DispenseFuel_DispenseFuel_state_10_subState = state_10_state_10_state_10_UpdateVariable;
                    DispenseFuel_DispenseFuel_DispenseFuel_state_10_active = state_10_state_10_state_10_UpdateVariable;
                    //#[ state state_56.state_46.DispenseFuel.DispenseFuel.state_10.UpdateVariable.(Entry) 
                    test++;  
                    test1++;      
                    test2++;
                    //#]
                    DispenseFuel_DispenseFuel_DispenseFuel_state_10_timeout = scheduleTimeout(5000, "ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
                    NOTIFY_TRANSITION_TERMINATED("ROOT.state_56.state_46.DispenseFuel.4");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void SMR_SYSTEM::state_56_state_42_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.state_56.state_42");
    NOTIFY_TRANSITION_STARTED("41");
    NOTIFY_STATE_ENTERED("ROOT.state_56.state_42.Ventilation_Ready");
    state_56_state_42_subState = state_42_Ventilation_Ready;
    state_56_state_42_active = state_42_Ventilation_Ready;
    //#[ state state_56.state_42.Ventilation_Ready.(Entry) 
    window_status = "Windows Closed";
    //#]
    NOTIFY_TRANSITION_TERMINATED("41");
}

void SMR_SYSTEM::state_56_state_42_exit(void) {
    // State Ventilation_Ready
    if(state_56_state_42_subState == state_42_Ventilation_Ready)
        {
            NOTIFY_STATE_EXITED("ROOT.state_56.state_42.Ventilation_Ready");
        }
    state_56_state_42_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_56.state_42");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_56_state_42_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State Ventilation_Ready
    
    return res;
}

void SMR_SYSTEM::state_56_state_41_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.state_56.state_41");
    NOTIFY_TRANSITION_STARTED("42");
    NOTIFY_STATE_ENTERED("ROOT.state_56.state_41.Light_Ready");
    state_56_state_41_subState = state_41_Light_Ready;
    state_56_state_41_active = state_41_Light_Ready;
    //#[ state state_56.state_41.Light_Ready.(Entry) 
                  intensity = !Light_Default;
                  Default_Brightness = " Lights Off ";
    //#]
    NOTIFY_TRANSITION_TERMINATED("42");
}

void SMR_SYSTEM::state_56_state_41_exit(void) {
    // State Light_Ready
    if(state_56_state_41_subState == state_41_Light_Ready)
        {
            NOTIFY_STATE_EXITED("ROOT.state_56.state_41.Light_Ready");
        }
    state_56_state_41_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_56.state_41");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_56_state_41_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State Light_Ready
    
    return res;
}

void SMR_SYSTEM::state_56_state_40_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.state_56.state_40");
    NOTIFY_TRANSITION_STARTED("43");
    NOTIFY_STATE_ENTERED("ROOT.state_56.state_40.HVAC_Ready");
    state_56_state_40_subState = state_40_HVAC_Ready;
    state_56_state_40_active = state_40_HVAC_Ready;
    //#[ state state_56.state_40.HVAC_Ready.(Entry) 
             HVAC_Status = "HVAC IS OFF";
    //#]
    NOTIFY_TRANSITION_TERMINATED("43");
}

void SMR_SYSTEM::state_56_state_40_exit(void) {
    // State HVAC_Ready
    if(state_56_state_40_subState == state_40_HVAC_Ready)
        {
            NOTIFY_STATE_EXITED("ROOT.state_56.state_40.HVAC_Ready");
        }
    state_56_state_40_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_56.state_40");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_56_state_40_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State HVAC_Ready
    
    return res;
}

void SMR_SYSTEM::SMR_Ready_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.SMR_Ready");
    rootState_subState = SMR_Ready;
    rootState_active = SMR_Ready;
    //#[ state SMR_Ready.(Entry) 
                     Display_msg = " Login Here";
                     Room_Status = " Room Locked "; 
                     HVAC_Status = " HVAC OFF ";
                     System_LED_ON = 1;
                     System_LED_OFF = 0;
                     Fire_Alert = " ";
                     Emergency_Alert = " ";
                     Fire = 0;  
                     test = 2;
                     temperature = Temperature_Default;
    //#]
    state_40_entDef();
    state_41_entDef();
    state_42_entDef();
    state_46_entDef();
}

void SMR_SYSTEM::SMR_Ready_exit(void) {
    state_40_exit();
    state_41_exit();
    state_42_exit();
    state_46_exit();
    
    NOTIFY_STATE_EXITED("ROOT.SMR_Ready");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::SMR_ReadyTakeFire_Alarm(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("8");
    SMR_Ready_exit();
    NOTIFY_STATE_ENTERED("ROOT.state_56");
    rootState_subState = state_56;
    rootState_active = state_56;
    //#[ state state_56.(Entry) 
                  Display_msg = " Login Here";
                 System_LED_ON = 1;
                 System_LED_OFF = 0;
                 Fire = 1;
                 Fire_Alert = " Evacuate the premises ";  
                 Room_Status = " Room is shutting down"; 
                 HVAC_Status = " HVAC OFF ";
                 hvac_bool = 0;
                 Door_Bool = 0;
                  
                 test = 5;
    //#]
    state_56_state_40_entDef();
    state_56_state_41_entDef();
    state_56_state_42_entDef();
    state_56_state_46_entDef();
    NOTIFY_TRANSITION_TERMINATED("8");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::SMR_Ready_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    IOxfReactive::TakeEventStatus omComponentStatus = eventNotConsumed;
    bool dispatchDone = false;
    {
        // State state_40
        omComponentStatus = state_40_processEvent();
        if(omComponentStatus != eventNotConsumed)
            {
                res = eventConsumed;
                if(IS_IN(SMR_Ready) == false)
                    {
                        dispatchDone = true;
                    }
            }
    }
    if(!dispatchDone)
        {
            // State state_41
            omComponentStatus = state_41_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                    if(IS_IN(SMR_Ready) == false)
                        {
                            dispatchDone = true;
                        }
                }
        }
    if(!dispatchDone)
        {
            // State state_42
            omComponentStatus = state_42_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                    if(IS_IN(SMR_Ready) == false)
                        {
                            dispatchDone = true;
                        }
                }
        }
    if(!dispatchDone)
        {
            // State state_46
            omComponentStatus = state_46_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                }
        }
    if(res == eventNotConsumed)
        {
            res = SMR_Ready_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::SMR_Ready_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(Fire_Alarm_Default_id) == 1)
        {
            res = SMR_ReadyTakeFire_Alarm();
        }
    
    return res;
}

void SMR_SYSTEM::state_46_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.SMR_Ready.state_46");
    NOTIFY_TRANSITION_STARTED("12");
    DispenseFuel_entDef();
    NOTIFY_TRANSITION_TERMINATED("12");
}

void SMR_SYSTEM::state_46_exit(void) {
    // State DispenseFuel
    if(state_46_subState == DispenseFuel)
        {
            DispenseFuel_exit();
        }
    state_46_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.SMR_Ready.state_46");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_46TakeUnlock(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("35");
    SMR_Ready_exit();
    NOTIFY_STATE_ENTERED("ROOT.Access_Granted");
    pushNullTransition();
    rootState_subState = Access_Granted;
    rootState_active = Access_Granted;
    //#[ state Access_Granted.(Entry) 
    User_Unlock();
    //#]
    NOTIFY_TRANSITION_TERMINATED("35");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_46_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State DispenseFuel
    if(state_46_active == DispenseFuel)
        {
            res = DispenseFuel_processEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_46_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(Unlock_Default_id) == 1)
        {
            res = state_46TakeUnlock();
        }
    
    return res;
}

void SMR_SYSTEM::DispenseFuel_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.SMR_Ready.state_46.DispenseFuel");
    state_46_subState = DispenseFuel;
    state_46_active = DispenseFuel;
    state_10_entDef();
    state_11_entDef();
}

void SMR_SYSTEM::DispenseFuel_exit(void) {
    switch (state_10_subState) {
        // State UpdateVariable
        case UpdateVariable:
        {
            cancel(state_10_timeout);
            NOTIFY_STATE_EXITED("ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
        }
        break;
        case accepttimeevent_25:
        {
            NOTIFY_STATE_EXITED("ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.accepttimeevent_25");
        }
        break;
        default:
            break;
    }
    state_10_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_10");
    state_11_exit();
    
    NOTIFY_STATE_EXITED("ROOT.SMR_Ready.state_46.DispenseFuel");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::DispenseFuel_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    IOxfReactive::TakeEventStatus omComponentStatus = eventNotConsumed;
    bool dispatchDone = false;
    {
        // State state_10
        omComponentStatus = state_10_processEvent();
        if(omComponentStatus != eventNotConsumed)
            {
                res = eventConsumed;
                if(IS_IN(DispenseFuel) == false)
                    {
                        dispatchDone = true;
                    }
            }
    }
    if(!dispatchDone)
        {
            // State state_11
            omComponentStatus = state_11_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                }
        }
    if(res == eventNotConsumed)
        {
            res = DispenseFuel_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::DispenseFuel_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    res = state_46_handleEvent();
    return res;
}

void SMR_SYSTEM::state_11_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_11");
    NOTIFY_TRANSITION_STARTED("ROOT.SMR_Ready.state_46.DispenseFuel.0");
    NOTIFY_STATE_ENTERED("ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
    state_11_subState = SendAndRecieve;
    state_11_active = SendAndRecieve;
    //#[ state SMR_Ready.state_46.DispenseFuel.DispenseFuel.state_11.SendAndRecieve.(Entry) 
    callMain();
                
     
    //#]
    state_11_timeout = scheduleTimeout(1000, "ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
    NOTIFY_TRANSITION_TERMINATED("ROOT.SMR_Ready.state_46.DispenseFuel.0");
}

void SMR_SYSTEM::state_11_exit(void) {
    // State SendAndRecieve
    if(state_11_subState == SendAndRecieve)
        {
            cancel(state_11_timeout);
            NOTIFY_STATE_EXITED("ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
        }
    state_11_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_11");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_11_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State SendAndRecieve
    if(state_11_active == SendAndRecieve)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == state_11_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.SMR_Ready.state_46.DispenseFuel.1");
                            cancel(state_11_timeout);
                            NOTIFY_STATE_EXITED("ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
                            NOTIFY_STATE_ENTERED("ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
                            state_11_subState = SendAndRecieve;
                            state_11_active = SendAndRecieve;
                            //#[ state SMR_Ready.state_46.DispenseFuel.DispenseFuel.state_11.SendAndRecieve.(Entry) 
                            callMain();
                                        
                             
                            //#]
                            state_11_timeout = scheduleTimeout(1000, "ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
                            NOTIFY_TRANSITION_TERMINATED("ROOT.SMR_Ready.state_46.DispenseFuel.1");
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

void SMR_SYSTEM::state_10_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_10");
    NOTIFY_TRANSITION_STARTED("ROOT.SMR_Ready.state_46.DispenseFuel.2");
    NOTIFY_STATE_ENTERED("ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
    state_10_subState = UpdateVariable;
    state_10_active = UpdateVariable;
    //#[ state SMR_Ready.state_46.DispenseFuel.DispenseFuel.state_10.UpdateVariable.(Entry) 
    test++;  
    test1++;      
    test2++;
    //#]
    state_10_timeout = scheduleTimeout(5000, "ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
    NOTIFY_TRANSITION_TERMINATED("ROOT.SMR_Ready.state_46.DispenseFuel.2");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_10_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_10_active) {
        // State UpdateVariable
        case UpdateVariable:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == state_10_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.SMR_Ready.state_46.DispenseFuel.3");
                            cancel(state_10_timeout);
                            NOTIFY_STATE_EXITED("ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
                            NOTIFY_STATE_ENTERED("ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.accepttimeevent_25");
                            state_10_subState = accepttimeevent_25;
                            state_10_active = accepttimeevent_25;
                            NOTIFY_TRANSITION_TERMINATED("ROOT.SMR_Ready.state_46.DispenseFuel.3");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case accepttimeevent_25:
        {
            if(IS_EVENT_TYPE_OF(MeetingMode_Default_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.SMR_Ready.state_46.DispenseFuel.4");
                    NOTIFY_STATE_EXITED("ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.accepttimeevent_25");
                    NOTIFY_STATE_ENTERED("ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
                    state_10_subState = UpdateVariable;
                    state_10_active = UpdateVariable;
                    //#[ state SMR_Ready.state_46.DispenseFuel.DispenseFuel.state_10.UpdateVariable.(Entry) 
                    test++;  
                    test1++;      
                    test2++;
                    //#]
                    state_10_timeout = scheduleTimeout(5000, "ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
                    NOTIFY_TRANSITION_TERMINATED("ROOT.SMR_Ready.state_46.DispenseFuel.4");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void SMR_SYSTEM::state_42_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.SMR_Ready.state_42");
    NOTIFY_TRANSITION_STARTED("14");
    NOTIFY_STATE_ENTERED("ROOT.SMR_Ready.state_42.Ventilation_Ready");
    state_42_subState = Ventilation_Ready;
    state_42_active = Ventilation_Ready;
    //#[ state SMR_Ready.state_42.Ventilation_Ready.(Entry) 
    window_status = "Windows Closed";
    //#]
    NOTIFY_TRANSITION_TERMINATED("14");
}

void SMR_SYSTEM::state_42_exit(void) {
    // State Ventilation_Ready
    if(state_42_subState == Ventilation_Ready)
        {
            NOTIFY_STATE_EXITED("ROOT.SMR_Ready.state_42.Ventilation_Ready");
        }
    state_42_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.SMR_Ready.state_42");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_42_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State Ventilation_Ready
    
    return res;
}

void SMR_SYSTEM::state_41_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.SMR_Ready.state_41");
    NOTIFY_TRANSITION_STARTED("13");
    NOTIFY_STATE_ENTERED("ROOT.SMR_Ready.state_41.Light_Ready");
    state_41_subState = Light_Ready;
    state_41_active = Light_Ready;
    //#[ state SMR_Ready.state_41.Light_Ready.(Entry) 
                  intensity = !Light_Default;
                  Default_Brightness = " Lights Off ";
    //#]
    NOTIFY_TRANSITION_TERMINATED("13");
}

void SMR_SYSTEM::state_41_exit(void) {
    // State Light_Ready
    if(state_41_subState == Light_Ready)
        {
            NOTIFY_STATE_EXITED("ROOT.SMR_Ready.state_41.Light_Ready");
        }
    state_41_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.SMR_Ready.state_41");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_41_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State Light_Ready
    
    return res;
}

void SMR_SYSTEM::state_40_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.SMR_Ready.state_40");
    NOTIFY_TRANSITION_STARTED("11");
    NOTIFY_STATE_ENTERED("ROOT.SMR_Ready.state_40.HVAC_Ready");
    state_40_subState = HVAC_Ready;
    state_40_active = HVAC_Ready;
    //#[ state SMR_Ready.state_40.HVAC_Ready.(Entry) 
             HVAC_Status = "HVAC IS OFF";
    //#]
    NOTIFY_TRANSITION_TERMINATED("11");
}

void SMR_SYSTEM::state_40_exit(void) {
    // State HVAC_Ready
    if(state_40_subState == HVAC_Ready)
        {
            NOTIFY_STATE_EXITED("ROOT.SMR_Ready.state_40.HVAC_Ready");
        }
    state_40_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.SMR_Ready.state_40");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_40_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State HVAC_Ready
    
    return res;
}

void SMR_SYSTEM::Meeting_mode_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Meeting_mode");
    rootState_subState = Meeting_mode;
    rootState_active = Meeting_mode;
    //#[ state Meeting_mode.(Entry) 
    Room_Status = " Room Occupied Meeting"; 
    hvac_bool = 1;  
    Door_Bool = 1; 
    test = 4;
    
    //#]
    Meeting_mode_state_43_entDef();
    Meeting_mode_state_44_entDef();
    Meeting_mode_state_45_entDef();
    Meeting_mode_state_48_entDef();
    Meeting_mode_state_51_entDef();
}

void SMR_SYSTEM::Meeting_mode_exit(void) {
    switch (Meeting_mode_state_43_subState) {
        // State Light_Control
        case state_43_Light_Control:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_43.Light_Control");
        }
        break;
        // State Adjust_Lighting
        case state_43_Adjust_Lighting:
        {
            NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_43.Adjust_Lighting");
        }
        break;
        default:
            break;
    }
    Meeting_mode_state_43_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_43");
    switch (Meeting_mode_state_44_subState) {
        // State Temperature_Control
        case state_44_Temperature_Control:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_44.Temperature_Control");
        }
        break;
        // State Adjust_Temperature
        case state_44_Adjust_Temperature:
        {
            NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_44.Adjust_Temperature");
        }
        break;
        default:
            break;
    }
    Meeting_mode_state_44_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_44");
    switch (Meeting_mode_state_45_subState) {
        // State HVAC_Control
        case state_45_HVAC_Control:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_45.HVAC_Control");
        }
        break;
        // State Adjust_HVAC
        case state_45_Adjust_HVAC:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_45.Adjust_HVAC");
        }
        break;
        default:
            break;
    }
    Meeting_mode_state_45_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_45");
    switch (Meeting_mode_state_48_subState) {
        // State Ventilation_Control
        case state_48_Ventilation_Control:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_48.Ventilation_Control");
        }
        break;
        // State Adjust_Ventilation
        case state_48_Adjust_Ventilation:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_48.Adjust_Ventilation");
        }
        break;
        default:
            break;
    }
    Meeting_mode_state_48_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_48");
    Meeting_mode_state_51_exit();
    
    NOTIFY_STATE_EXITED("ROOT.Meeting_mode");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::Meeting_modeTakeFire_Alarm(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("34");
    Meeting_mode_exit();
    NOTIFY_STATE_ENTERED("ROOT.state_56");
    rootState_subState = state_56;
    rootState_active = state_56;
    //#[ state state_56.(Entry) 
                  Display_msg = " Login Here";
                 System_LED_ON = 1;
                 System_LED_OFF = 0;
                 Fire = 1;
                 Fire_Alert = " Evacuate the premises ";  
                 Room_Status = " Room is shutting down"; 
                 HVAC_Status = " HVAC OFF ";
                 hvac_bool = 0;
                 Door_Bool = 0;
                  
                 test = 5;
    //#]
    state_56_state_41_entDef();
    state_56_state_42_entDef();
    state_56_state_46_entDef();
    state_56_state_40_entDef();
    NOTIFY_TRANSITION_TERMINATED("34");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::Meeting_mode_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    IOxfReactive::TakeEventStatus omComponentStatus = eventNotConsumed;
    bool dispatchDone = false;
    {
        // State state_43
        omComponentStatus = Meeting_mode_state_43_processEvent();
        if(omComponentStatus != eventNotConsumed)
            {
                res = eventConsumed;
                if(IS_IN(Meeting_mode) == false)
                    {
                        dispatchDone = true;
                    }
            }
    }
    if(!dispatchDone)
        {
            // State state_44
            omComponentStatus = Meeting_mode_state_44_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                    if(IS_IN(Meeting_mode) == false)
                        {
                            dispatchDone = true;
                        }
                }
        }
    if(!dispatchDone)
        {
            // State state_45
            omComponentStatus = Meeting_mode_state_45_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                    if(IS_IN(Meeting_mode) == false)
                        {
                            dispatchDone = true;
                        }
                }
        }
    if(!dispatchDone)
        {
            // State state_48
            omComponentStatus = Meeting_mode_state_48_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                    if(IS_IN(Meeting_mode) == false)
                        {
                            dispatchDone = true;
                        }
                }
        }
    if(!dispatchDone)
        {
            // State state_51
            omComponentStatus = Meeting_mode_state_51_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                }
        }
    if(res == eventNotConsumed)
        {
            res = Meeting_mode_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::Meeting_mode_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(Fire_Alarm_Default_id) == 1)
        {
            res = Meeting_modeTakeFire_Alarm();
        }
    
    return res;
}

void SMR_SYSTEM::Meeting_mode_state_51_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_51");
    NOTIFY_TRANSITION_STARTED("22");
    state_51_state_51_DispenseFuel_entDef();
    NOTIFY_TRANSITION_TERMINATED("22");
}

void SMR_SYSTEM::Meeting_mode_state_51_exit(void) {
    // State DispenseFuel
    if(Meeting_mode_state_51_subState == state_51_state_51_DispenseFuel)
        {
            state_51_state_51_DispenseFuel_exit();
        }
    Meeting_mode_state_51_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_51");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::Meeting_mode_state_51_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State DispenseFuel
    if(Meeting_mode_state_51_active == state_51_state_51_DispenseFuel)
        {
            res = state_51_state_51_DispenseFuel_processEvent();
        }
    return res;
}

void SMR_SYSTEM::state_51_state_51_DispenseFuel_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_51.DispenseFuel");
    Meeting_mode_state_51_subState = state_51_state_51_DispenseFuel;
    Meeting_mode_state_51_active = state_51_state_51_DispenseFuel;
    DispenseFuel_DispenseFuel_state_10_entDef();
    DispenseFuel_DispenseFuel_state_11_entDef();
}

void SMR_SYSTEM::state_51_state_51_DispenseFuel_exit(void) {
    switch (DispenseFuel_DispenseFuel_state_10_subState) {
        // State UpdateVariable
        case state_10_state_10_UpdateVariable:
        {
            cancel(DispenseFuel_DispenseFuel_state_10_timeout);
            NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
        }
        break;
        case state_10_state_10_accepttimeevent_25:
        {
            NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.accepttimeevent_25");
        }
        break;
        default:
            break;
    }
    DispenseFuel_DispenseFuel_state_10_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_10");
    DispenseFuel_DispenseFuel_state_11_exit();
    
    NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_51.DispenseFuel");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_51_state_51_DispenseFuel_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    IOxfReactive::TakeEventStatus omComponentStatus = eventNotConsumed;
    bool dispatchDone = false;
    {
        // State state_10
        omComponentStatus = DispenseFuel_DispenseFuel_state_10_processEvent();
        if(omComponentStatus != eventNotConsumed)
            {
                res = eventConsumed;
                if(IS_IN(state_51_state_51_DispenseFuel) == false)
                    {
                        dispatchDone = true;
                    }
            }
    }
    if(!dispatchDone)
        {
            // State state_11
            omComponentStatus = DispenseFuel_DispenseFuel_state_11_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                }
        }
    
    return res;
}

void SMR_SYSTEM::DispenseFuel_DispenseFuel_state_11_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_11");
    NOTIFY_TRANSITION_STARTED("ROOT.Meeting_mode.state_51.DispenseFuel.0");
    NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
    DispenseFuel_DispenseFuel_state_11_subState = state_11_state_11_SendAndRecieve;
    DispenseFuel_DispenseFuel_state_11_active = state_11_state_11_SendAndRecieve;
    //#[ state Meeting_mode.state_51.DispenseFuel.DispenseFuel.state_11.SendAndRecieve.(Entry) 
    callMain();
                
     
    //#]
    DispenseFuel_DispenseFuel_state_11_timeout = scheduleTimeout(1000, "ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
    NOTIFY_TRANSITION_TERMINATED("ROOT.Meeting_mode.state_51.DispenseFuel.0");
}

void SMR_SYSTEM::DispenseFuel_DispenseFuel_state_11_exit(void) {
    // State SendAndRecieve
    if(DispenseFuel_DispenseFuel_state_11_subState == state_11_state_11_SendAndRecieve)
        {
            cancel(DispenseFuel_DispenseFuel_state_11_timeout);
            NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
        }
    DispenseFuel_DispenseFuel_state_11_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_11");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::DispenseFuel_DispenseFuel_state_11_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State SendAndRecieve
    if(DispenseFuel_DispenseFuel_state_11_active == state_11_state_11_SendAndRecieve)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == DispenseFuel_DispenseFuel_state_11_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.Meeting_mode.state_51.DispenseFuel.1");
                            cancel(DispenseFuel_DispenseFuel_state_11_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
                            NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
                            DispenseFuel_DispenseFuel_state_11_subState = state_11_state_11_SendAndRecieve;
                            DispenseFuel_DispenseFuel_state_11_active = state_11_state_11_SendAndRecieve;
                            //#[ state Meeting_mode.state_51.DispenseFuel.DispenseFuel.state_11.SendAndRecieve.(Entry) 
                            callMain();
                                        
                             
                            //#]
                            DispenseFuel_DispenseFuel_state_11_timeout = scheduleTimeout(1000, "ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
                            NOTIFY_TRANSITION_TERMINATED("ROOT.Meeting_mode.state_51.DispenseFuel.1");
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

void SMR_SYSTEM::DispenseFuel_DispenseFuel_state_10_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_10");
    NOTIFY_TRANSITION_STARTED("ROOT.Meeting_mode.state_51.DispenseFuel.2");
    NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
    DispenseFuel_DispenseFuel_state_10_subState = state_10_state_10_UpdateVariable;
    DispenseFuel_DispenseFuel_state_10_active = state_10_state_10_UpdateVariable;
    //#[ state Meeting_mode.state_51.DispenseFuel.DispenseFuel.state_10.UpdateVariable.(Entry) 
    test++;  
    test1++;      
    test2++;
    //#]
    DispenseFuel_DispenseFuel_state_10_timeout = scheduleTimeout(5000, "ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
    NOTIFY_TRANSITION_TERMINATED("ROOT.Meeting_mode.state_51.DispenseFuel.2");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::DispenseFuel_DispenseFuel_state_10_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (DispenseFuel_DispenseFuel_state_10_active) {
        // State UpdateVariable
        case state_10_state_10_UpdateVariable:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == DispenseFuel_DispenseFuel_state_10_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.Meeting_mode.state_51.DispenseFuel.3");
                            cancel(DispenseFuel_DispenseFuel_state_10_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
                            NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.accepttimeevent_25");
                            DispenseFuel_DispenseFuel_state_10_subState = state_10_state_10_accepttimeevent_25;
                            DispenseFuel_DispenseFuel_state_10_active = state_10_state_10_accepttimeevent_25;
                            NOTIFY_TRANSITION_TERMINATED("ROOT.Meeting_mode.state_51.DispenseFuel.3");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case state_10_state_10_accepttimeevent_25:
        {
            if(IS_EVENT_TYPE_OF(MeetingMode_Default_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.Meeting_mode.state_51.DispenseFuel.4");
                    NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.accepttimeevent_25");
                    NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
                    DispenseFuel_DispenseFuel_state_10_subState = state_10_state_10_UpdateVariable;
                    DispenseFuel_DispenseFuel_state_10_active = state_10_state_10_UpdateVariable;
                    //#[ state Meeting_mode.state_51.DispenseFuel.DispenseFuel.state_10.UpdateVariable.(Entry) 
                    test++;  
                    test1++;      
                    test2++;
                    //#]
                    DispenseFuel_DispenseFuel_state_10_timeout = scheduleTimeout(5000, "ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
                    NOTIFY_TRANSITION_TERMINATED("ROOT.Meeting_mode.state_51.DispenseFuel.4");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void SMR_SYSTEM::Meeting_mode_state_48_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_48");
    NOTIFY_TRANSITION_STARTED("25");
    NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_48.Ventilation_Control");
    pushNullTransition();
    Meeting_mode_state_48_subState = state_48_Ventilation_Control;
    Meeting_mode_state_48_active = state_48_Ventilation_Control;
    //#[ state Meeting_mode.state_48.Ventilation_Control.(Entry) 
           window_status = "WINDOW IS CLOSED";
    //#]
    NOTIFY_TRANSITION_TERMINATED("25");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::Meeting_mode_state_48_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (Meeting_mode_state_48_active) {
        // State Ventilation_Control
        case state_48_Ventilation_Control:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    //## transition 23 
                    if( window_bool == 1)
                        {
                            NOTIFY_TRANSITION_STARTED("23");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_48.Ventilation_Control");
                            NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_48.Adjust_Ventilation");
                            pushNullTransition();
                            Meeting_mode_state_48_subState = state_48_Adjust_Ventilation;
                            Meeting_mode_state_48_active = state_48_Adjust_Ventilation;
                            //#[ state Meeting_mode.state_48.Adjust_Ventilation.(Entry) 
                                 
                            window_status = "Windows Open " ; 
                            
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("23");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State Adjust_Ventilation
        case state_48_Adjust_Ventilation:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    //## transition 24 
                    if(window_bool == 0)
                        {
                            NOTIFY_TRANSITION_STARTED("24");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_48.Adjust_Ventilation");
                            NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_48.Ventilation_Control");
                            pushNullTransition();
                            Meeting_mode_state_48_subState = state_48_Ventilation_Control;
                            Meeting_mode_state_48_active = state_48_Ventilation_Control;
                            //#[ state Meeting_mode.state_48.Ventilation_Control.(Entry) 
                                   window_status = "WINDOW IS CLOSED";
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("24");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void SMR_SYSTEM::Meeting_mode_state_45_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_45");
    NOTIFY_TRANSITION_STARTED("27");
    NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_45.HVAC_Control");
    pushNullTransition();
    Meeting_mode_state_45_subState = state_45_HVAC_Control;
    Meeting_mode_state_45_active = state_45_HVAC_Control;
    //#[ state Meeting_mode.state_45.HVAC_Control.(Entry) 
                    HVAC_Status = "HVAC IS ON";
    //#]
    NOTIFY_TRANSITION_TERMINATED("27");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::Meeting_mode_state_45_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (Meeting_mode_state_45_active) {
        // State HVAC_Control
        case state_45_HVAC_Control:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    //## transition 26 
                    if(hvac_bool == 0)
                        {
                            NOTIFY_TRANSITION_STARTED("26");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_45.HVAC_Control");
                            NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_45.Adjust_HVAC");
                            pushNullTransition();
                            Meeting_mode_state_45_subState = state_45_Adjust_HVAC;
                            Meeting_mode_state_45_active = state_45_Adjust_HVAC;
                            //#[ state Meeting_mode.state_45.Adjust_HVAC.(Entry) 
                                              HVAC_Status = "HVAC IS OFF";
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("26");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State Adjust_HVAC
        case state_45_Adjust_HVAC:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    //## transition 28 
                    if(hvac_bool == 1)
                        {
                            NOTIFY_TRANSITION_STARTED("28");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_45.Adjust_HVAC");
                            NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_45.HVAC_Control");
                            pushNullTransition();
                            Meeting_mode_state_45_subState = state_45_HVAC_Control;
                            Meeting_mode_state_45_active = state_45_HVAC_Control;
                            //#[ state Meeting_mode.state_45.HVAC_Control.(Entry) 
                                            HVAC_Status = "HVAC IS ON";
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("28");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void SMR_SYSTEM::Meeting_mode_state_44_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_44");
    NOTIFY_TRANSITION_STARTED("30");
    NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_44.Temperature_Control");
    pushNullTransition();
    Meeting_mode_state_44_subState = state_44_Temperature_Control;
    Meeting_mode_state_44_active = state_44_Temperature_Control;
    //#[ state Meeting_mode.state_44.Temperature_Control.(Entry) 
            Room_Temperature = Meeting_Temperature; 
            
    //#]
    NOTIFY_TRANSITION_TERMINATED("30");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::Meeting_mode_state_44_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (Meeting_mode_state_44_active) {
        // State Temperature_Control
        case state_44_Temperature_Control:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("29");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_44.Temperature_Control");
                    NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_44.Adjust_Temperature");
                    Meeting_mode_state_44_subState = state_44_Adjust_Temperature;
                    Meeting_mode_state_44_active = state_44_Adjust_Temperature;
                    //#[ state Meeting_mode.state_44.Adjust_Temperature.(Entry) 
                                     temperature = Room_Temperature;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("29");
                    res = eventConsumed;
                }
            
            
        }
        break;
        
        default:
            break;
    }
    return res;
}

void SMR_SYSTEM::Meeting_mode_state_43_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_43");
    NOTIFY_TRANSITION_STARTED("32");
    NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_43.Light_Control");
    pushNullTransition();
    Meeting_mode_state_43_subState = state_43_Light_Control;
    Meeting_mode_state_43_active = state_43_Light_Control;
    //#[ state Meeting_mode.state_43.Light_Control.(Entry) 
                Brightness = Meeting_Light;
                Default_Brightness = " Lights On ";
    //#]
    NOTIFY_TRANSITION_TERMINATED("32");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::Meeting_mode_state_43_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (Meeting_mode_state_43_active) {
        // State Light_Control
        case state_43_Light_Control:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("31");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Meeting_mode.state_43.Light_Control");
                    NOTIFY_STATE_ENTERED("ROOT.Meeting_mode.state_43.Adjust_Lighting");
                    Meeting_mode_state_43_subState = state_43_Adjust_Lighting;
                    Meeting_mode_state_43_active = state_43_Adjust_Lighting;
                    //#[ state Meeting_mode.state_43.Adjust_Lighting.(Entry) 
                       intensity = Brightness;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("31");
                    res = eventConsumed;
                }
            
            
        }
        break;
        
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::Incorrect_PasswordTakeNull(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("15");
    popNullTransition();
    NOTIFY_STATE_EXITED("ROOT.Incorrect_Password");
    SMR_Ready_entDef();
    NOTIFY_TRANSITION_TERMINATED("15");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::Incorrect_Password_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            res = Incorrect_PasswordTakeNull();
        }
    
    return res;
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::Default_StateTakeSMR_ON(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("0");
    NOTIFY_STATE_EXITED("ROOT.Default_State");
    SMR_Ready_entDef();
    NOTIFY_TRANSITION_TERMINATED("0");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::Default_StateTakeFire_Alarm(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("7");
    NOTIFY_STATE_EXITED("ROOT.Default_State");
    state_56_entDef();
    NOTIFY_TRANSITION_TERMINATED("7");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::Default_State_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(Fire_Alarm_Default_id) == 1)
        {
            res = Default_StateTakeFire_Alarm();
        }
    else {
        if(IS_EVENT_TYPE_OF(SMR_ON_Default_id) == 1)
            {
                res = Default_StateTakeSMR_ON();
            }
        }
        
    
    return res;
}

void SMR_SYSTEM::Control_SMR_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Control_SMR");
    rootState_subState = Control_SMR;
    rootState_active = Control_SMR;
    //#[ state Control_SMR.(Entry) 
    Room_Status = " Room Occupied"; 
    hvac_bool = 1; 
    Door_Bool = 1;
    test = 3;
    
    //#]
    state_43_entDef();
    state_44_entDef();
    state_45_entDef();
    state_48_entDef();
    state_51_entDef();
}

void SMR_SYSTEM::Control_SMR_exit(void) {
    switch (state_43_subState) {
        // State Light_Control
        case Light_Control:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_43.Light_Control");
        }
        break;
        // State Adjust_Lighting
        case Adjust_Lighting:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_43.Adjust_Lighting");
        }
        break;
        default:
            break;
    }
    state_43_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_43");
    switch (state_44_subState) {
        // State Temperature_Control
        case Temperature_Control:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_44.Temperature_Control");
        }
        break;
        // State Adjust_Temperature
        case Adjust_Temperature:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_44.Adjust_Temperature");
        }
        break;
        default:
            break;
    }
    state_44_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_44");
    switch (state_45_subState) {
        // State HVAC_Control
        case HVAC_Control:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_45.HVAC_Control");
        }
        break;
        // State Adjust_HVAC
        case Adjust_HVAC:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_45.Adjust_HVAC");
        }
        break;
        default:
            break;
    }
    state_45_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_45");
    switch (state_48_subState) {
        // State Ventilation_Control
        case Ventilation_Control:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_48.Ventilation_Control");
        }
        break;
        // State Adjust_Ventilation
        case Adjust_Ventilation:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_48.Adjust_Ventilation");
        }
        break;
        default:
            break;
    }
    state_48_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_48");
    state_51_exit();
    
    NOTIFY_STATE_EXITED("ROOT.Control_SMR");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::Control_SMRTakeFire_Alarm(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("9");
    Control_SMR_exit();
    state_56_entDef();
    NOTIFY_TRANSITION_TERMINATED("9");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::Control_SMRTakeMeetingMode(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("33");
    Control_SMR_exit();
    Meeting_mode_entDef();
    NOTIFY_TRANSITION_TERMINATED("33");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::Control_SMR_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    IOxfReactive::TakeEventStatus omComponentStatus = eventNotConsumed;
    bool dispatchDone = false;
    {
        // State state_43
        omComponentStatus = state_43_processEvent();
        if(omComponentStatus != eventNotConsumed)
            {
                res = eventConsumed;
                if(IS_IN(Control_SMR) == false)
                    {
                        dispatchDone = true;
                    }
            }
    }
    if(!dispatchDone)
        {
            // State state_44
            omComponentStatus = state_44_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                    if(IS_IN(Control_SMR) == false)
                        {
                            dispatchDone = true;
                        }
                }
        }
    if(!dispatchDone)
        {
            // State state_45
            omComponentStatus = state_45_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                    if(IS_IN(Control_SMR) == false)
                        {
                            dispatchDone = true;
                        }
                }
        }
    if(!dispatchDone)
        {
            // State state_48
            omComponentStatus = state_48_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                    if(IS_IN(Control_SMR) == false)
                        {
                            dispatchDone = true;
                        }
                }
        }
    if(!dispatchDone)
        {
            // State state_51
            omComponentStatus = state_51_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                }
        }
    if(res == eventNotConsumed)
        {
            res = Control_SMR_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::Control_SMR_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(Fire_Alarm_Default_id) == 1)
        {
            res = Control_SMRTakeFire_Alarm();
        }
    else {
        if(IS_EVENT_TYPE_OF(MeetingMode_Default_id) == 1)
            {
                res = Control_SMRTakeMeetingMode();
            }
        }
        
    
    return res;
}

void SMR_SYSTEM::state_51_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_51");
    NOTIFY_TRANSITION_STARTED("5");
    state_51_DispenseFuel_entDef();
    NOTIFY_TRANSITION_TERMINATED("5");
}

void SMR_SYSTEM::state_51_exit(void) {
    // State DispenseFuel
    if(state_51_subState == state_51_DispenseFuel)
        {
            state_51_DispenseFuel_exit();
        }
    state_51_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_51");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_51_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State DispenseFuel
    if(state_51_active == state_51_DispenseFuel)
        {
            res = state_51_DispenseFuel_processEvent();
        }
    return res;
}

void SMR_SYSTEM::state_51_DispenseFuel_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_51.DispenseFuel");
    state_51_subState = state_51_DispenseFuel;
    state_51_active = state_51_DispenseFuel;
    DispenseFuel_state_10_entDef();
    DispenseFuel_state_11_entDef();
}

void SMR_SYSTEM::state_51_DispenseFuel_exit(void) {
    switch (DispenseFuel_state_10_subState) {
        // State UpdateVariable
        case state_10_UpdateVariable:
        {
            cancel(DispenseFuel_state_10_timeout);
            NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
        }
        break;
        case state_10_accepttimeevent_25:
        {
            NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.accepttimeevent_25");
        }
        break;
        default:
            break;
    }
    DispenseFuel_state_10_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_10");
    DispenseFuel_state_11_exit();
    
    NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_51.DispenseFuel");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_51_DispenseFuel_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    IOxfReactive::TakeEventStatus omComponentStatus = eventNotConsumed;
    bool dispatchDone = false;
    {
        // State state_10
        omComponentStatus = DispenseFuel_state_10_processEvent();
        if(omComponentStatus != eventNotConsumed)
            {
                res = eventConsumed;
                if(IS_IN(state_51_DispenseFuel) == false)
                    {
                        dispatchDone = true;
                    }
            }
    }
    if(!dispatchDone)
        {
            // State state_11
            omComponentStatus = DispenseFuel_state_11_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                }
        }
    
    return res;
}

void SMR_SYSTEM::DispenseFuel_state_11_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_11");
    NOTIFY_TRANSITION_STARTED("ROOT.Control_SMR.state_51.DispenseFuel.0");
    NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
    DispenseFuel_state_11_subState = state_11_SendAndRecieve;
    DispenseFuel_state_11_active = state_11_SendAndRecieve;
    //#[ state Control_SMR.state_51.DispenseFuel.DispenseFuel.state_11.SendAndRecieve.(Entry) 
    callMain();
                
     
    //#]
    DispenseFuel_state_11_timeout = scheduleTimeout(1000, "ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
    NOTIFY_TRANSITION_TERMINATED("ROOT.Control_SMR.state_51.DispenseFuel.0");
}

void SMR_SYSTEM::DispenseFuel_state_11_exit(void) {
    // State SendAndRecieve
    if(DispenseFuel_state_11_subState == state_11_SendAndRecieve)
        {
            cancel(DispenseFuel_state_11_timeout);
            NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
        }
    DispenseFuel_state_11_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_11");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::DispenseFuel_state_11_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State SendAndRecieve
    if(DispenseFuel_state_11_active == state_11_SendAndRecieve)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == DispenseFuel_state_11_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.Control_SMR.state_51.DispenseFuel.1");
                            cancel(DispenseFuel_state_11_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
                            NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
                            DispenseFuel_state_11_subState = state_11_SendAndRecieve;
                            DispenseFuel_state_11_active = state_11_SendAndRecieve;
                            //#[ state Control_SMR.state_51.DispenseFuel.DispenseFuel.state_11.SendAndRecieve.(Entry) 
                            callMain();
                                        
                             
                            //#]
                            DispenseFuel_state_11_timeout = scheduleTimeout(1000, "ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
                            NOTIFY_TRANSITION_TERMINATED("ROOT.Control_SMR.state_51.DispenseFuel.1");
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

void SMR_SYSTEM::DispenseFuel_state_10_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_10");
    NOTIFY_TRANSITION_STARTED("ROOT.Control_SMR.state_51.DispenseFuel.2");
    NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
    DispenseFuel_state_10_subState = state_10_UpdateVariable;
    DispenseFuel_state_10_active = state_10_UpdateVariable;
    //#[ state Control_SMR.state_51.DispenseFuel.DispenseFuel.state_10.UpdateVariable.(Entry) 
    test++;  
    test1++;      
    test2++;
    //#]
    DispenseFuel_state_10_timeout = scheduleTimeout(5000, "ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
    NOTIFY_TRANSITION_TERMINATED("ROOT.Control_SMR.state_51.DispenseFuel.2");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::DispenseFuel_state_10_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (DispenseFuel_state_10_active) {
        // State UpdateVariable
        case state_10_UpdateVariable:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == DispenseFuel_state_10_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.Control_SMR.state_51.DispenseFuel.3");
                            cancel(DispenseFuel_state_10_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
                            NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.accepttimeevent_25");
                            DispenseFuel_state_10_subState = state_10_accepttimeevent_25;
                            DispenseFuel_state_10_active = state_10_accepttimeevent_25;
                            NOTIFY_TRANSITION_TERMINATED("ROOT.Control_SMR.state_51.DispenseFuel.3");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case state_10_accepttimeevent_25:
        {
            if(IS_EVENT_TYPE_OF(MeetingMode_Default_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.Control_SMR.state_51.DispenseFuel.4");
                    NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.accepttimeevent_25");
                    NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
                    DispenseFuel_state_10_subState = state_10_UpdateVariable;
                    DispenseFuel_state_10_active = state_10_UpdateVariable;
                    //#[ state Control_SMR.state_51.DispenseFuel.DispenseFuel.state_10.UpdateVariable.(Entry) 
                    test++;  
                    test1++;      
                    test2++;
                    //#]
                    DispenseFuel_state_10_timeout = scheduleTimeout(5000, "ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
                    NOTIFY_TRANSITION_TERMINATED("ROOT.Control_SMR.state_51.DispenseFuel.4");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void SMR_SYSTEM::state_48_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_48");
    NOTIFY_TRANSITION_STARTED("16");
    NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_48.Ventilation_Control");
    pushNullTransition();
    state_48_subState = Ventilation_Control;
    state_48_active = Ventilation_Control;
    //#[ state Control_SMR.state_48.Ventilation_Control.(Entry) 
           window_status = "WINDOW IS CLOSED";
    //#]
    NOTIFY_TRANSITION_TERMINATED("16");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_48_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_48_active) {
        // State Ventilation_Control
        case Ventilation_Control:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    //## transition 17 
                    if( window_bool == 1)
                        {
                            NOTIFY_TRANSITION_STARTED("17");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_48.Ventilation_Control");
                            NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_48.Adjust_Ventilation");
                            pushNullTransition();
                            state_48_subState = Adjust_Ventilation;
                            state_48_active = Adjust_Ventilation;
                            //#[ state Control_SMR.state_48.Adjust_Ventilation.(Entry) 
                                 
                            window_status = "Windows Open " ; 
                            
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("17");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State Adjust_Ventilation
        case Adjust_Ventilation:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    //## transition 18 
                    if(window_bool == 0)
                        {
                            NOTIFY_TRANSITION_STARTED("18");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_48.Adjust_Ventilation");
                            NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_48.Ventilation_Control");
                            pushNullTransition();
                            state_48_subState = Ventilation_Control;
                            state_48_active = Ventilation_Control;
                            //#[ state Control_SMR.state_48.Ventilation_Control.(Entry) 
                                   window_status = "WINDOW IS CLOSED";
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("18");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void SMR_SYSTEM::state_45_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_45");
    NOTIFY_TRANSITION_STARTED("21");
    NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_45.HVAC_Control");
    pushNullTransition();
    state_45_subState = HVAC_Control;
    state_45_active = HVAC_Control;
    //#[ state Control_SMR.state_45.HVAC_Control.(Entry) 
                    HVAC_Status = "HVAC IS ON";
    //#]
    NOTIFY_TRANSITION_TERMINATED("21");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_45_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_45_active) {
        // State HVAC_Control
        case HVAC_Control:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    //## transition 19 
                    if(hvac_bool == 0)
                        {
                            NOTIFY_TRANSITION_STARTED("19");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_45.HVAC_Control");
                            NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_45.Adjust_HVAC");
                            pushNullTransition();
                            state_45_subState = Adjust_HVAC;
                            state_45_active = Adjust_HVAC;
                            //#[ state Control_SMR.state_45.Adjust_HVAC.(Entry) 
                                              HVAC_Status = "HVAC IS OFF";
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("19");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State Adjust_HVAC
        case Adjust_HVAC:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    //## transition 20 
                    if(hvac_bool == 1)
                        {
                            NOTIFY_TRANSITION_STARTED("20");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_45.Adjust_HVAC");
                            NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_45.HVAC_Control");
                            pushNullTransition();
                            state_45_subState = HVAC_Control;
                            state_45_active = HVAC_Control;
                            //#[ state Control_SMR.state_45.HVAC_Control.(Entry) 
                                            HVAC_Status = "HVAC IS ON";
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("20");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void SMR_SYSTEM::state_44_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_44");
    NOTIFY_TRANSITION_STARTED("3");
    NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_44.Temperature_Control");
    pushNullTransition();
    state_44_subState = Temperature_Control;
    state_44_active = Temperature_Control;
    //#[ state Control_SMR.state_44.Temperature_Control.(Entry) 
            Room_Temperature = Temperature_Default; 
            
    //#]
    NOTIFY_TRANSITION_TERMINATED("3");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_44_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_44_active) {
        // State Temperature_Control
        case Temperature_Control:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_44.Temperature_Control");
                    NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_44.Adjust_Temperature");
                    pushNullTransition();
                    state_44_subState = Adjust_Temperature;
                    state_44_active = Adjust_Temperature;
                    //#[ state Control_SMR.state_44.Adjust_Temperature.(Entry) 
                                     temperature = Room_Temperature;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Adjust_Temperature
        case Adjust_Temperature:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("38");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_44.Adjust_Temperature");
                    NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_44.Adjust_Temperature");
                    pushNullTransition();
                    state_44_subState = Adjust_Temperature;
                    state_44_active = Adjust_Temperature;
                    //#[ state Control_SMR.state_44.Adjust_Temperature.(Entry) 
                                     temperature = Room_Temperature;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("38");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void SMR_SYSTEM::state_43_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_43");
    NOTIFY_TRANSITION_STARTED("2");
    NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_43.Light_Control");
    pushNullTransition();
    state_43_subState = Light_Control;
    state_43_active = Light_Control;
    //#[ state Control_SMR.state_43.Light_Control.(Entry) 
                Brightness = Light_Default;
                Default_Brightness = " Lights On ";
    //#]
    NOTIFY_TRANSITION_TERMINATED("2");
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::state_43_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_43_active) {
        // State Light_Control
        case Light_Control:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("39");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_43.Light_Control");
                    NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_43.Adjust_Lighting");
                    pushNullTransition();
                    state_43_subState = Adjust_Lighting;
                    state_43_active = Adjust_Lighting;
                    //#[ state Control_SMR.state_43.Adjust_Lighting.(Entry) 
                       intensity = Brightness;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("39");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Adjust_Lighting
        case Adjust_Lighting:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("37");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Control_SMR.state_43.Adjust_Lighting");
                    NOTIFY_STATE_ENTERED("ROOT.Control_SMR.state_43.Adjust_Lighting");
                    pushNullTransition();
                    state_43_subState = Adjust_Lighting;
                    state_43_active = Adjust_Lighting;
                    //#[ state Control_SMR.state_43.Adjust_Lighting.(Entry) 
                       intensity = Brightness;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("37");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::Access_GrantedTakeEnter_Room(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("36");
    popNullTransition();
    NOTIFY_STATE_EXITED("ROOT.Access_Granted");
    NOTIFY_STATE_ENTERED("ROOT.Control_SMR");
    rootState_subState = Control_SMR;
    rootState_active = Control_SMR;
    //#[ state Control_SMR.(Entry) 
    Room_Status = " Room Occupied"; 
    hvac_bool = 1; 
    Door_Bool = 1;
    test = 3;
    
    //#]
    state_43_entDef();
    state_44_entDef();
    state_45_entDef();
    state_48_entDef();
    state_51_entDef();
    NOTIFY_TRANSITION_TERMINATED("36");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::Access_Granted_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            //## transition 1 
            if(password == false)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Access_Granted");
                    NOTIFY_STATE_ENTERED("ROOT.Incorrect_Password");
                    pushNullTransition();
                    rootState_subState = Incorrect_Password;
                    rootState_active = Incorrect_Password;
                    //#[ state Incorrect_Password.(Entry) 
                     Display_msg = " Incorrect PIN ";
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
        }
    else {
        if(IS_EVENT_TYPE_OF(Enter_Room_Default_id) == 1)
            {
                res = Access_GrantedTakeEnter_Room();
            }
        }
        
    
    return res;
}

void SMR_SYSTEM::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("6");
        NOTIFY_STATE_ENTERED("ROOT.Default_State");
        rootState_subState = Default_State;
        rootState_active = Default_State;
        //#[ state Default_State.(Entry) 
                    Fire = 0; 
                    Door = 0;
                    System_LED_ON = 0;
                    System_LED_OFF = 1;
                    hvac_bool = 0; 
                    intensity = 0;
                    Display_msg = "";
                    Room_Status = "Room is Vacant";
                    Fire_Alert = " ";
                    Emergency_Alert = " ";
                    Default_Temperature = "" ;
                    Default_Brightness = "";
                    Brightness = 0;
                    Room_Temperature = 0;
                    HVAC_Status = " ";
                    window_status = " " ; 
                    test = 1;
                    
                    
        //#]
        NOTIFY_TRANSITION_TERMINATED("6");
    }
}

IOxfReactive::TakeEventStatus SMR_SYSTEM::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Default_State
        case Default_State:
        {
            res = Default_State_handleEvent();
        }
        break;
        // State SMR_Ready
        case SMR_Ready:
        {
            res = SMR_Ready_processEvent();
        }
        break;
        // State Access_Granted
        case Access_Granted:
        {
            res = Access_Granted_handleEvent();
        }
        break;
        // State Incorrect_Password
        case Incorrect_Password:
        {
            res = Incorrect_Password_handleEvent();
        }
        break;
        // State Control_SMR
        case Control_SMR:
        {
            res = Control_SMR_processEvent();
        }
        break;
        // State Meeting_mode
        case Meeting_mode:
        {
            res = Meeting_mode_processEvent();
        }
        break;
        // State state_56
        case state_56:
        {
            res = state_56_processEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSMR_SYSTEM::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("HVAC_ON", x2String(myReal->HVAC_ON));
    aomsAttributes->addAttribute("Light_Default", x2String(myReal->Light_Default));
    aomsAttributes->addAttribute("Temperature_Default", x2String(myReal->Temperature_Default));
    aomsAttributes->addAttribute("address_hvac", UNKNOWN2STRING(myReal->address_hvac));
    aomsAttributes->addAttribute("address_intensity", UNKNOWN2STRING(myReal->address_intensity));
    aomsAttributes->addAttribute("address_temperature", UNKNOWN2STRING(myReal->address_temperature));
    aomsAttributes->addAttribute("address_test", UNKNOWN2STRING(myReal->address_test));
    aomsAttributes->addAttribute("address_test1", UNKNOWN2STRING(myReal->address_test1));
    aomsAttributes->addAttribute("address_test2", UNKNOWN2STRING(myReal->address_test2));
    aomsAttributes->addAttribute("connectSocketForHVAC", UNKNOWN2STRING(myReal->connectSocketForHVAC));
    aomsAttributes->addAttribute("connectSocketForIntensity", UNKNOWN2STRING(myReal->connectSocketForIntensity));
    aomsAttributes->addAttribute("connectSocketForTemperature", UNKNOWN2STRING(myReal->connectSocketForTemperature));
    aomsAttributes->addAttribute("connectSocketForTest", UNKNOWN2STRING(myReal->connectSocketForTest));
    aomsAttributes->addAttribute("connectSocketForTest1", UNKNOWN2STRING(myReal->connectSocketForTest1));
    aomsAttributes->addAttribute("connectSocketForTest2", UNKNOWN2STRING(myReal->connectSocketForTest2));
    aomsAttributes->addAttribute("displayValue", x2String(myReal->displayValue));
    aomsAttributes->addAttribute("filename", x2String(myReal->filename));
    aomsAttributes->addAttribute("fval", x2String(myReal->fval));
    aomsAttributes->addAttribute("hvac", x2String(myReal->hvac));
    aomsAttributes->addAttribute("hvac_bool", x2String(myReal->hvac_bool));
    aomsAttributes->addAttribute("hvac_text", x2String(myReal->hvac_text));
    aomsAttributes->addAttribute("Int32", x2String(myReal->Int32));
    aomsAttributes->addAttribute("intensity", x2String(myReal->intensity));
    aomsAttributes->addAttribute("iResultHVAC", x2String(myReal->iResultHVAC));
    aomsAttributes->addAttribute("iResultIntensity", x2String(myReal->iResultIntensity));
    aomsAttributes->addAttribute("iResultTemperature", x2String(myReal->iResultTemperature));
    aomsAttributes->addAttribute("iResultTest", x2String(myReal->iResultTest));
    aomsAttributes->addAttribute("iResultTest1", x2String(myReal->iResultTest1));
    aomsAttributes->addAttribute("iResultTest2", x2String(myReal->iResultTest2));
    aomsAttributes->addAttribute("iSendResultHVAC", x2String(myReal->iSendResultHVAC));
    aomsAttributes->addAttribute("iSendResultIntensity", x2String(myReal->iSendResultIntensity));
    aomsAttributes->addAttribute("iSendResultTemperature", x2String(myReal->iSendResultTemperature));
    aomsAttributes->addAttribute("iSendResultTest", x2String(myReal->iSendResultTest));
    aomsAttributes->addAttribute("iSendResultTest1", x2String(myReal->iSendResultTest1));
    aomsAttributes->addAttribute("iSendResultTest2", x2String(myReal->iSendResultTest2));
    aomsAttributes->addAttribute("listenSocketForHVAC", UNKNOWN2STRING(myReal->listenSocketForHVAC));
    aomsAttributes->addAttribute("listenSocketForIntensity", UNKNOWN2STRING(myReal->listenSocketForIntensity));
    aomsAttributes->addAttribute("listenSocketForTemperature", UNKNOWN2STRING(myReal->listenSocketForTemperature));
    aomsAttributes->addAttribute("listenSocketForTest", UNKNOWN2STRING(myReal->listenSocketForTest));
    aomsAttributes->addAttribute("listenSocketForTest1", UNKNOWN2STRING(myReal->listenSocketForTest1));
    aomsAttributes->addAttribute("listenSocketForTest2", UNKNOWN2STRING(myReal->listenSocketForTest2));
    aomsAttributes->addAttribute("portHVAC", x2String(myReal->portHVAC));
    aomsAttributes->addAttribute("portIntensity", x2String(myReal->portIntensity));
    aomsAttributes->addAttribute("portTemperature", x2String(myReal->portTemperature));
    aomsAttributes->addAttribute("portTest", x2String(myReal->portTest));
    aomsAttributes->addAttribute("portTest1", x2String(myReal->portTest1));
    aomsAttributes->addAttribute("portTest2", x2String(myReal->portTest2));
    aomsAttributes->addAttribute("recvbuf", array2String(DEFAULT_BUFLEN, myReal->recvbuf, sizeof(char), &x2String));
    aomsAttributes->addAttribute("recvbuflen", x2String(myReal->recvbuflen));
    aomsAttributes->addAttribute("sendbuflen", x2String(myReal->sendbuflen));
    aomsAttributes->addAttribute("serverName", x2String(myReal->serverName));
    aomsAttributes->addAttribute("sndmsgbuf", array2String(DEFAULT_BUFLEN+3, myReal->sndmsgbuf, sizeof(char), &x2String));
    aomsAttributes->addAttribute("sockfd", x2String(myReal->sockfd));
    aomsAttributes->addAttribute("temp", x2String(myReal->temp));
    aomsAttributes->addAttribute("temperature", x2String(myReal->temperature));
    aomsAttributes->addAttribute("test", x2String(myReal->test));
    aomsAttributes->addAttribute("test1", x2String(myReal->test1));
    aomsAttributes->addAttribute("test2", x2String(myReal->test2));
    aomsAttributes->addAttribute("test2check", x2String(myReal->test2check));
    aomsAttributes->addAttribute("utof", x2String(myReal->utof));
    aomsAttributes->addAttribute("ws", UNKNOWN2STRING(myReal->ws));
    aomsAttributes->addAttribute("Display_msg", x2String(myReal->Display_msg));
    aomsAttributes->addAttribute("pin1", x2String(myReal->pin1));
    aomsAttributes->addAttribute("pin2", x2String(myReal->pin2));
    aomsAttributes->addAttribute("pin3", x2String(myReal->pin3));
    aomsAttributes->addAttribute("Security", x2String(myReal->Security));
    aomsAttributes->addAttribute("Room_Temperature", x2String(myReal->Room_Temperature));
    aomsAttributes->addAttribute("Brightness", x2String(myReal->Brightness));
    aomsAttributes->addAttribute("Light_settings", x2String(myReal->Light_settings));
    aomsAttributes->addAttribute("Default_Temperature", x2String(myReal->Default_Temperature));
    aomsAttributes->addAttribute("Default_Brightness", x2String(myReal->Default_Brightness));
    aomsAttributes->addAttribute("Room_Status", x2String(myReal->Room_Status));
    aomsAttributes->addAttribute("System_LED_ON", x2String(myReal->System_LED_ON));
    aomsAttributes->addAttribute("System_LED_OFF", x2String(myReal->System_LED_OFF));
    aomsAttributes->addAttribute("Fire_Alert", x2String(myReal->Fire_Alert));
    aomsAttributes->addAttribute("Emergency_Alert", x2String(myReal->Emergency_Alert));
    aomsAttributes->addAttribute("Fire", x2String(myReal->Fire));
    aomsAttributes->addAttribute("HVAC_Status", x2String(myReal->HVAC_Status));
    aomsAttributes->addAttribute("window_status", x2String(myReal->window_status));
    aomsAttributes->addAttribute("window_bool", x2String(myReal->window_bool));
    aomsAttributes->addAttribute("password", x2String(myReal->password));
    aomsAttributes->addAttribute("Meeting_Light", x2String(myReal->Meeting_Light));
    aomsAttributes->addAttribute("Meeting_Temperature", x2String(myReal->Meeting_Temperature));
    aomsAttributes->addAttribute("portDoor", x2String(myReal->portDoor));
    aomsAttributes->addAttribute("address_Door", UNKNOWN2STRING(myReal->address_Door));
    aomsAttributes->addAttribute("connectSocketForDoor", UNKNOWN2STRING(myReal->connectSocketForDoor));
    aomsAttributes->addAttribute("Door", x2String(myReal->Door));
    aomsAttributes->addAttribute("iResultDoor", x2String(myReal->iResultDoor));
    aomsAttributes->addAttribute("iSendResultDoor", x2String(myReal->iSendResultDoor));
    aomsAttributes->addAttribute("listenSocketForDoor", UNKNOWN2STRING(myReal->listenSocketForDoor));
    aomsAttributes->addAttribute("Door_Bool", x2String(myReal->Door_Bool));
}

void OMAnimatedSMR_SYSTEM::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMR_SYSTEM", false, true);
    if(myReal->itsSMR_SYSTEM)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMR_SYSTEM);
        }
    aomsRelations->addRelation("itsSMR_SYSTEM_1", false, true);
    if(myReal->itsSMR_SYSTEM_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMR_SYSTEM_1);
        }
}

void OMAnimatedSMR_SYSTEM::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case SMR_SYSTEM::Default_State:
        {
            Default_State_serializeStates(aomsState);
        }
        break;
        case SMR_SYSTEM::SMR_Ready:
        {
            SMR_Ready_serializeStates(aomsState);
        }
        break;
        case SMR_SYSTEM::Access_Granted:
        {
            Access_Granted_serializeStates(aomsState);
        }
        break;
        case SMR_SYSTEM::Incorrect_Password:
        {
            Incorrect_Password_serializeStates(aomsState);
        }
        break;
        case SMR_SYSTEM::Control_SMR:
        {
            Control_SMR_serializeStates(aomsState);
        }
        break;
        case SMR_SYSTEM::Meeting_mode:
        {
            Meeting_mode_serializeStates(aomsState);
        }
        break;
        case SMR_SYSTEM::state_56:
        {
            state_56_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSMR_SYSTEM::state_56_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_56");
    state_56_state_40_serializeStates(aomsState);
    state_56_state_41_serializeStates(aomsState);
    state_56_state_42_serializeStates(aomsState);
    state_56_state_46_serializeStates(aomsState);
}

void OMAnimatedSMR_SYSTEM::state_56_state_46_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_56.state_46");
    if(myReal->state_56_state_46_subState == SMR_SYSTEM::state_46_DispenseFuel)
        {
            state_46_DispenseFuel_serializeStates(aomsState);
        }
}

void OMAnimatedSMR_SYSTEM::state_46_DispenseFuel_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_56.state_46.DispenseFuel");
    DispenseFuel_DispenseFuel_DispenseFuel_state_10_serializeStates(aomsState);
    DispenseFuel_DispenseFuel_DispenseFuel_state_11_serializeStates(aomsState);
}

void OMAnimatedSMR_SYSTEM::DispenseFuel_DispenseFuel_DispenseFuel_state_11_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_11");
    if(myReal->DispenseFuel_DispenseFuel_DispenseFuel_state_11_subState == SMR_SYSTEM::state_11_state_11_state_11_SendAndRecieve)
        {
            state_11_state_11_state_11_SendAndRecieve_serializeStates(aomsState);
        }
}

void OMAnimatedSMR_SYSTEM::state_11_state_11_state_11_SendAndRecieve_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
}

void OMAnimatedSMR_SYSTEM::DispenseFuel_DispenseFuel_DispenseFuel_state_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_10");
    switch (myReal->DispenseFuel_DispenseFuel_DispenseFuel_state_10_subState) {
        case SMR_SYSTEM::state_10_state_10_state_10_UpdateVariable:
        {
            state_10_state_10_state_10_UpdateVariable_serializeStates(aomsState);
        }
        break;
        case SMR_SYSTEM::state_10_state_10_state_10_accepttimeevent_25:
        {
            state_10_state_10_state_10_accepttimeevent_25_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSMR_SYSTEM::state_10_state_10_state_10_UpdateVariable_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
}

void OMAnimatedSMR_SYSTEM::state_10_state_10_state_10_accepttimeevent_25_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_56.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.accepttimeevent_25");
}

void OMAnimatedSMR_SYSTEM::state_56_state_42_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_56.state_42");
    if(myReal->state_56_state_42_subState == SMR_SYSTEM::state_42_Ventilation_Ready)
        {
            state_42_Ventilation_Ready_serializeStates(aomsState);
        }
}

void OMAnimatedSMR_SYSTEM::state_42_Ventilation_Ready_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_56.state_42.Ventilation_Ready");
}

void OMAnimatedSMR_SYSTEM::state_56_state_41_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_56.state_41");
    if(myReal->state_56_state_41_subState == SMR_SYSTEM::state_41_Light_Ready)
        {
            state_41_Light_Ready_serializeStates(aomsState);
        }
}

void OMAnimatedSMR_SYSTEM::state_41_Light_Ready_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_56.state_41.Light_Ready");
}

void OMAnimatedSMR_SYSTEM::state_56_state_40_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_56.state_40");
    if(myReal->state_56_state_40_subState == SMR_SYSTEM::state_40_HVAC_Ready)
        {
            state_40_HVAC_Ready_serializeStates(aomsState);
        }
}

void OMAnimatedSMR_SYSTEM::state_40_HVAC_Ready_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_56.state_40.HVAC_Ready");
}

void OMAnimatedSMR_SYSTEM::SMR_Ready_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SMR_Ready");
    state_40_serializeStates(aomsState);
    state_41_serializeStates(aomsState);
    state_42_serializeStates(aomsState);
    state_46_serializeStates(aomsState);
}

void OMAnimatedSMR_SYSTEM::state_46_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SMR_Ready.state_46");
    if(myReal->state_46_subState == SMR_SYSTEM::DispenseFuel)
        {
            DispenseFuel_serializeStates(aomsState);
        }
}

void OMAnimatedSMR_SYSTEM::DispenseFuel_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SMR_Ready.state_46.DispenseFuel");
    state_10_serializeStates(aomsState);
    state_11_serializeStates(aomsState);
}

void OMAnimatedSMR_SYSTEM::state_11_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_11");
    if(myReal->state_11_subState == SMR_SYSTEM::SendAndRecieve)
        {
            SendAndRecieve_serializeStates(aomsState);
        }
}

void OMAnimatedSMR_SYSTEM::SendAndRecieve_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
}

void OMAnimatedSMR_SYSTEM::state_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_10");
    switch (myReal->state_10_subState) {
        case SMR_SYSTEM::UpdateVariable:
        {
            UpdateVariable_serializeStates(aomsState);
        }
        break;
        case SMR_SYSTEM::accepttimeevent_25:
        {
            accepttimeevent_25_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSMR_SYSTEM::UpdateVariable_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
}

void OMAnimatedSMR_SYSTEM::accepttimeevent_25_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SMR_Ready.state_46.DispenseFuel.ROOT.DispenseFuel.state_10.accepttimeevent_25");
}

void OMAnimatedSMR_SYSTEM::state_42_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SMR_Ready.state_42");
    if(myReal->state_42_subState == SMR_SYSTEM::Ventilation_Ready)
        {
            Ventilation_Ready_serializeStates(aomsState);
        }
}

void OMAnimatedSMR_SYSTEM::Ventilation_Ready_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SMR_Ready.state_42.Ventilation_Ready");
}

void OMAnimatedSMR_SYSTEM::state_41_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SMR_Ready.state_41");
    if(myReal->state_41_subState == SMR_SYSTEM::Light_Ready)
        {
            Light_Ready_serializeStates(aomsState);
        }
}

void OMAnimatedSMR_SYSTEM::Light_Ready_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SMR_Ready.state_41.Light_Ready");
}

void OMAnimatedSMR_SYSTEM::state_40_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SMR_Ready.state_40");
    if(myReal->state_40_subState == SMR_SYSTEM::HVAC_Ready)
        {
            HVAC_Ready_serializeStates(aomsState);
        }
}

void OMAnimatedSMR_SYSTEM::HVAC_Ready_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SMR_Ready.state_40.HVAC_Ready");
}

void OMAnimatedSMR_SYSTEM::Meeting_mode_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Meeting_mode");
    Meeting_mode_state_43_serializeStates(aomsState);
    Meeting_mode_state_44_serializeStates(aomsState);
    Meeting_mode_state_45_serializeStates(aomsState);
    Meeting_mode_state_48_serializeStates(aomsState);
    Meeting_mode_state_51_serializeStates(aomsState);
}

void OMAnimatedSMR_SYSTEM::Meeting_mode_state_51_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Meeting_mode.state_51");
    if(myReal->Meeting_mode_state_51_subState == SMR_SYSTEM::state_51_state_51_DispenseFuel)
        {
            state_51_state_51_DispenseFuel_serializeStates(aomsState);
        }
}

void OMAnimatedSMR_SYSTEM::state_51_state_51_DispenseFuel_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Meeting_mode.state_51.DispenseFuel");
    DispenseFuel_DispenseFuel_state_10_serializeStates(aomsState);
    DispenseFuel_DispenseFuel_state_11_serializeStates(aomsState);
}

void OMAnimatedSMR_SYSTEM::DispenseFuel_DispenseFuel_state_11_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_11");
    if(myReal->DispenseFuel_DispenseFuel_state_11_subState == SMR_SYSTEM::state_11_state_11_SendAndRecieve)
        {
            state_11_state_11_SendAndRecieve_serializeStates(aomsState);
        }
}

void OMAnimatedSMR_SYSTEM::state_11_state_11_SendAndRecieve_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
}

void OMAnimatedSMR_SYSTEM::DispenseFuel_DispenseFuel_state_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_10");
    switch (myReal->DispenseFuel_DispenseFuel_state_10_subState) {
        case SMR_SYSTEM::state_10_state_10_UpdateVariable:
        {
            state_10_state_10_UpdateVariable_serializeStates(aomsState);
        }
        break;
        case SMR_SYSTEM::state_10_state_10_accepttimeevent_25:
        {
            state_10_state_10_accepttimeevent_25_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSMR_SYSTEM::state_10_state_10_UpdateVariable_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
}

void OMAnimatedSMR_SYSTEM::state_10_state_10_accepttimeevent_25_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Meeting_mode.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.accepttimeevent_25");
}

void OMAnimatedSMR_SYSTEM::Meeting_mode_state_48_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Meeting_mode.state_48");
    switch (myReal->Meeting_mode_state_48_subState) {
        case SMR_SYSTEM::state_48_Ventilation_Control:
        {
            state_48_Ventilation_Control_serializeStates(aomsState);
        }
        break;
        case SMR_SYSTEM::state_48_Adjust_Ventilation:
        {
            state_48_Adjust_Ventilation_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSMR_SYSTEM::state_48_Ventilation_Control_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Meeting_mode.state_48.Ventilation_Control");
}

void OMAnimatedSMR_SYSTEM::state_48_Adjust_Ventilation_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Meeting_mode.state_48.Adjust_Ventilation");
}

void OMAnimatedSMR_SYSTEM::Meeting_mode_state_45_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Meeting_mode.state_45");
    switch (myReal->Meeting_mode_state_45_subState) {
        case SMR_SYSTEM::state_45_HVAC_Control:
        {
            state_45_HVAC_Control_serializeStates(aomsState);
        }
        break;
        case SMR_SYSTEM::state_45_Adjust_HVAC:
        {
            state_45_Adjust_HVAC_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSMR_SYSTEM::state_45_HVAC_Control_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Meeting_mode.state_45.HVAC_Control");
}

void OMAnimatedSMR_SYSTEM::state_45_Adjust_HVAC_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Meeting_mode.state_45.Adjust_HVAC");
}

void OMAnimatedSMR_SYSTEM::Meeting_mode_state_44_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Meeting_mode.state_44");
    switch (myReal->Meeting_mode_state_44_subState) {
        case SMR_SYSTEM::state_44_Temperature_Control:
        {
            state_44_Temperature_Control_serializeStates(aomsState);
        }
        break;
        case SMR_SYSTEM::state_44_Adjust_Temperature:
        {
            state_44_Adjust_Temperature_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSMR_SYSTEM::state_44_Temperature_Control_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Meeting_mode.state_44.Temperature_Control");
}

void OMAnimatedSMR_SYSTEM::state_44_Adjust_Temperature_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Meeting_mode.state_44.Adjust_Temperature");
}

void OMAnimatedSMR_SYSTEM::Meeting_mode_state_43_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Meeting_mode.state_43");
    switch (myReal->Meeting_mode_state_43_subState) {
        case SMR_SYSTEM::state_43_Light_Control:
        {
            state_43_Light_Control_serializeStates(aomsState);
        }
        break;
        case SMR_SYSTEM::state_43_Adjust_Lighting:
        {
            state_43_Adjust_Lighting_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSMR_SYSTEM::state_43_Light_Control_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Meeting_mode.state_43.Light_Control");
}

void OMAnimatedSMR_SYSTEM::state_43_Adjust_Lighting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Meeting_mode.state_43.Adjust_Lighting");
}

void OMAnimatedSMR_SYSTEM::Incorrect_Password_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Incorrect_Password");
}

void OMAnimatedSMR_SYSTEM::Default_State_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Default_State");
}

void OMAnimatedSMR_SYSTEM::Control_SMR_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Control_SMR");
    state_43_serializeStates(aomsState);
    state_44_serializeStates(aomsState);
    state_45_serializeStates(aomsState);
    state_48_serializeStates(aomsState);
    state_51_serializeStates(aomsState);
}

void OMAnimatedSMR_SYSTEM::state_51_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Control_SMR.state_51");
    if(myReal->state_51_subState == SMR_SYSTEM::state_51_DispenseFuel)
        {
            state_51_DispenseFuel_serializeStates(aomsState);
        }
}

void OMAnimatedSMR_SYSTEM::state_51_DispenseFuel_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Control_SMR.state_51.DispenseFuel");
    DispenseFuel_state_10_serializeStates(aomsState);
    DispenseFuel_state_11_serializeStates(aomsState);
}

void OMAnimatedSMR_SYSTEM::DispenseFuel_state_11_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_11");
    if(myReal->DispenseFuel_state_11_subState == SMR_SYSTEM::state_11_SendAndRecieve)
        {
            state_11_SendAndRecieve_serializeStates(aomsState);
        }
}

void OMAnimatedSMR_SYSTEM::state_11_SendAndRecieve_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_11.SendAndRecieve");
}

void OMAnimatedSMR_SYSTEM::DispenseFuel_state_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_10");
    switch (myReal->DispenseFuel_state_10_subState) {
        case SMR_SYSTEM::state_10_UpdateVariable:
        {
            state_10_UpdateVariable_serializeStates(aomsState);
        }
        break;
        case SMR_SYSTEM::state_10_accepttimeevent_25:
        {
            state_10_accepttimeevent_25_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSMR_SYSTEM::state_10_UpdateVariable_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.UpdateVariable");
}

void OMAnimatedSMR_SYSTEM::state_10_accepttimeevent_25_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Control_SMR.state_51.DispenseFuel.ROOT.DispenseFuel.state_10.accepttimeevent_25");
}

void OMAnimatedSMR_SYSTEM::state_48_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Control_SMR.state_48");
    switch (myReal->state_48_subState) {
        case SMR_SYSTEM::Ventilation_Control:
        {
            Ventilation_Control_serializeStates(aomsState);
        }
        break;
        case SMR_SYSTEM::Adjust_Ventilation:
        {
            Adjust_Ventilation_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSMR_SYSTEM::Ventilation_Control_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Control_SMR.state_48.Ventilation_Control");
}

void OMAnimatedSMR_SYSTEM::Adjust_Ventilation_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Control_SMR.state_48.Adjust_Ventilation");
}

void OMAnimatedSMR_SYSTEM::state_45_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Control_SMR.state_45");
    switch (myReal->state_45_subState) {
        case SMR_SYSTEM::HVAC_Control:
        {
            HVAC_Control_serializeStates(aomsState);
        }
        break;
        case SMR_SYSTEM::Adjust_HVAC:
        {
            Adjust_HVAC_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSMR_SYSTEM::HVAC_Control_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Control_SMR.state_45.HVAC_Control");
}

void OMAnimatedSMR_SYSTEM::Adjust_HVAC_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Control_SMR.state_45.Adjust_HVAC");
}

void OMAnimatedSMR_SYSTEM::state_44_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Control_SMR.state_44");
    switch (myReal->state_44_subState) {
        case SMR_SYSTEM::Temperature_Control:
        {
            Temperature_Control_serializeStates(aomsState);
        }
        break;
        case SMR_SYSTEM::Adjust_Temperature:
        {
            Adjust_Temperature_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSMR_SYSTEM::Temperature_Control_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Control_SMR.state_44.Temperature_Control");
}

void OMAnimatedSMR_SYSTEM::Adjust_Temperature_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Control_SMR.state_44.Adjust_Temperature");
}

void OMAnimatedSMR_SYSTEM::state_43_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Control_SMR.state_43");
    switch (myReal->state_43_subState) {
        case SMR_SYSTEM::Light_Control:
        {
            Light_Control_serializeStates(aomsState);
        }
        break;
        case SMR_SYSTEM::Adjust_Lighting:
        {
            Adjust_Lighting_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSMR_SYSTEM::Light_Control_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Control_SMR.state_43.Light_Control");
}

void OMAnimatedSMR_SYSTEM::Adjust_Lighting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Control_SMR.state_43.Adjust_Lighting");
}

void OMAnimatedSMR_SYSTEM::Access_Granted_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Access_Granted");
}
//#]

IMPLEMENT_REACTIVE_META_P(SMR_SYSTEM, Default, Default, false, OMAnimatedSMR_SYSTEM)

IMPLEMENT_META_OP(OMAnimatedSMR_SYSTEM, Default_SMR_SYSTEM_setBrightness_int, "setBrightness", FALSE, "setBrightness(int)", 1)

IMPLEMENT_OP_CALL(Default_SMR_SYSTEM_setBrightness_int, SMR_SYSTEM, setBrightness(p_Brightness), NO_OP())

IMPLEMENT_META_OP(OMAnimatedSMR_SYSTEM, Default_SMR_SYSTEM_setDoor_Bool_bool, "setDoor_Bool", FALSE, "setDoor_Bool(bool)", 1)

IMPLEMENT_OP_CALL(Default_SMR_SYSTEM_setDoor_Bool_bool, SMR_SYSTEM, setDoor_Bool(p_Door_Bool), NO_OP())

IMPLEMENT_META_OP(OMAnimatedSMR_SYSTEM, Default_SMR_SYSTEM_setRoom_Temperature_float, "setRoom_Temperature", TRUE, "setRoom_Temperature(float)", 1)

STATIC_IMPLEMENT_OP_CALL(Default_SMR_SYSTEM_setRoom_Temperature_float, SMR_SYSTEM, setRoom_Temperature(p_Room_Temperature), NO_OP())

IMPLEMENT_META_OP(OMAnimatedSMR_SYSTEM, Default_SMR_SYSTEM_setHvac_bool_bool, "setHvac_bool", FALSE, "setHvac_bool(bool)", 1)

IMPLEMENT_OP_CALL(Default_SMR_SYSTEM_setHvac_bool_bool, SMR_SYSTEM, setHvac_bool(p_hvac_bool), NO_OP())

IMPLEMENT_META_OP(OMAnimatedSMR_SYSTEM, Default_SMR_SYSTEM_setPin1_int, "setPin1", TRUE, "setPin1(int)", 1)

STATIC_IMPLEMENT_OP_CALL(Default_SMR_SYSTEM_setPin1_int, SMR_SYSTEM, setPin1(p_pin1), NO_OP())

IMPLEMENT_META_OP(OMAnimatedSMR_SYSTEM, Default_SMR_SYSTEM_setPin2_int, "setPin2", TRUE, "setPin2(int)", 1)

STATIC_IMPLEMENT_OP_CALL(Default_SMR_SYSTEM_setPin2_int, SMR_SYSTEM, setPin2(p_pin2), NO_OP())

IMPLEMENT_META_OP(OMAnimatedSMR_SYSTEM, Default_SMR_SYSTEM_setPin3_int, "setPin3", TRUE, "setPin3(int)", 1)

STATIC_IMPLEMENT_OP_CALL(Default_SMR_SYSTEM_setPin3_int, SMR_SYSTEM, setPin3(p_pin3), NO_OP())

IMPLEMENT_META_OP(OMAnimatedSMR_SYSTEM, Default_SMR_SYSTEM_setWindow_bool_bool, "setWindow_bool", FALSE, "setWindow_bool(bool)", 1)

IMPLEMENT_OP_CALL(Default_SMR_SYSTEM_setWindow_bool_bool, SMR_SYSTEM, setWindow_bool(p_window_bool), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMR_SYSTEM.cpp
*********************************************************************/
