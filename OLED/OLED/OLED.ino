#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
 
#define OLED_RESET 0
Adafruit_SSD1306 display(OLED_RESET);
 
void setup()   {
  Serial.begin(115200);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.display();
  delay(2000);
  display.clearDisplay(); 
}
void loop() {
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(32,8);
  display.println("Hello World!");
  display.display();
  delay(2000);
}
