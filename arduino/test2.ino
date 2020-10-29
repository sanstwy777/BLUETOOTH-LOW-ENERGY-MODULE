// https://makersportal.com/blog/2017/9/20/hm-10-bluetooth-module

#include <SoftwareSerial.h>

SoftwareSerial ble(2, 3); // RX, TX

void setup() {
  // Open serial port
  Serial.begin(9600);
  // begin bluetooth serial port communication
  ble.begin(9600);
}

// Now for the loop

void loop() {
  Serial.println("Sending Bluetooth Message...");
  ble.write("Testing...");
  delay(500);
  
}
