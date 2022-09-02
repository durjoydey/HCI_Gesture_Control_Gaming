#include "Keyboard.h"

void setup() {
Serial.begin (9600);

// initialize control over the keyboard:
Keyboard.begin();
}

void loop() {

int accelerator = analogRead(A0); //Flex Sensor 1
int brake = analogRead(A1); //Flex Sensor 2
int x = analogRead(A4); // ADXL335 x
int y = analogRead(A5); // ADXL335 y

if (accelerator > 440 ){
Keyboard.write('W');
delay(10);
}
if (brake > 340 ){
Keyboard.write('S');
delay(10);
}

}
