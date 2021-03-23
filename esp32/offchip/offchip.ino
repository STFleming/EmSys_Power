// get temp data from the off chip pin
// author: stf

#include <OneWire.h>
#include <DallasTemperature.h>

const unsigned int pin = 26;

OneWire oneWire(pin);
DallasTemperature sensors(&oneWire);

void setup(){

}

float temp;

void loop() {
        sensors.requestTemperatures();
        temp = sensors.getTempCByIndex(0);
        delay(500);
}
