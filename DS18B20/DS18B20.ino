#include <OneWire.h>
#include <DallasTemperature.h>
 
#define ONE_WIRE_PIN D2
 
OneWire oneWire(ONE_WIRE_PIN);
DallasTemperature sensors(&oneWire);
 
void setup() {
  Serial.begin(115200);
}
 
void loop() {
  sensors.requestTemperatures();
  Serial.println(sensors.getTempCByIndex(0));
  delay(1000);
}
