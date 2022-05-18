#include <Arduino.h>
#include <CrcLib.h>
using namespace Crc;

// PWM outputs, all should be included in pwmPins array
// Drive 
const int driveFL = CRC_PWM_1;
const int driveFR = CRC_PWM_2;
const int driveBL = CRC_PWM_3;
const int driveBR = CRC_PWM_4;

const int pwmPins[] = {driveFL, driveFR, driveBL, driveBR};

// 

void setup() {
  CrcLib::Initialize();
  
  for (int i = 0; i < sizeof(pwmPins)/sizeof(int); i++){
    CrcLib::InitializePwmOutput(pwmPins[i]);
  }
}

void loop() {
  CrcLib::Update();


}