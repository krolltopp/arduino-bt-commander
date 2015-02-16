// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section

#ifndef ArduinoBtCommander_H
#define ArduinoBtBommander_H

#include "Arduino.h"
#include <SoftwareSerial.h>

class ArduinoBtCommander {
public:
	ArduinoBtCommander(int rxPin,int txPin);
	void start(long int baudRate);

private:
	SoftwareSerial* swSerial;
};

#endif /* _arduino_bt_commander_H_ */
