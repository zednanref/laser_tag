#ifndef HardwareController_h
#define HardwareController_h

#define TRIGGER 11
#define SHOOT_LIGHT 13
#define MODE_SWITCH 2
#define RELOAD_SWITCH 7
#define RELOAD_LIGHT 8
#define FIRE_DURATION 1000

#include <Arduino.h>

class HardwareController
{
private:
    unsigned long _timeCounter;
    bool _ledStatus;
    bool _changeLedStatus;
    bool aux;   
    int _loopCounter;
public:
    HardwareController(bool ledStatus);
    void checkShoot(bool ShootConfirmationValue); // Checks if WeaponAction::shoot() was activated & puts on the fire light 

};




#endif