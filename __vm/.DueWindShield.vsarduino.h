/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Due (Programming Port), Platform=sam, Package=arduino
*/

#define ARDUINO 166
#define ARDUINO_MAIN
#define F_CPU 84000000L
#define printf iprintf
#define __SAM__
#define printf iprintf
#define F_CPU 84000000L
#define ARDUINO 166
#define ARDUINO_SAM_DUE
#define ARDUINO_ARCH_SAM
#define __SAM3X8E__
#define USB_VID 0x2341
#define USB_PID 0x003e
#define USBCON
extern "C" void __cxa_pure_virtual() {;}

double readVcc();
long readVoltage(double Vcc_bit);
double corrCurrent(double Current);
long readCurrent(double Vcc_bit);
void L_setLoad(uint16_t value);
uint16_t L_perMille2bit(int16_t _perMille);
void P_resetPitchPosition(void);
int32_t P_Distance_to_go();
void P_Enable(uint8_t activate);
void P_Step();
float sind(float _Angle);
float tand(float _Angle);
int32_t long P_Angle2Step(int32_t _gamma);
void P_setMSteps(uint8_t _msteps);
void Fan(int Speed);
void M_Brake_active();
void M_Brake_deactive();
void M_forward();
void M_backward();
void M_Brake();
void M_Brake_release();
void M_SleepMode(int _Mode);
void M_SwitchMotorModeOff();
void M_SwitchMotorModeOn();
void M_SetMotorSpeed(long _speed);
long M_Percent2bit(int _percent);
void printHelp();
int SetCommand(String _msg);
void TurnOffWindLab(void);
void PinSetup();
void G_revProtect(uint8_t protPin);
//
//

#include "C:\Users\install\AppData\Local\arduino15\packages\arduino\hardware\sam\1.6.6\variants\arduino_due_x\pins_arduino.h" 
#include "C:\Users\install\AppData\Local\arduino15\packages\arduino\hardware\sam\1.6.6\variants\arduino_due_x\variant.h" 
#include "C:\Users\install\AppData\Local\arduino15\packages\arduino\hardware\sam\1.6.6\cores\arduino\arduino.h"
#include <..\DueWindShield\DueWindShield.ino>
#include <..\DueWindShield\MCP4726.cpp>
#include <..\DueWindShield\MCP4726.h>
#include <..\DueWindShield\MCP4726_SETUP_VREF.h>
#include <..\DueWindShield\constString.cpp>
#include <..\DueWindShield\constString.h>
#include <..\DueWindShield\speed_enc.cpp>
#include <..\DueWindShield\speed_enc.h>
