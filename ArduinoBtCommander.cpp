// Do not remove the include below
#include "ArduinoBtCommander.h"

ArduinoBtCommander::ArduinoBtCommander(int rxPin,int txPin) {
	swSerial = new SoftwareSerial(rxPin,txPin);
}

void ArduinoBtCommander::start(long int baudRate) {
	swSerial->begin(baudRate);
}
