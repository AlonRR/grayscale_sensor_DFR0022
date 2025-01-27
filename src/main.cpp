#include <Arduino.h>

#define GRAYSCALE_PIN 25

void setup()
{
    Serial.begin(115200);
    pinMode(GRAYSCALE_PIN, INPUT);
}

void loop()
{
    int val;
    val = analogRead(GRAYSCALE_PIN); // connect grayscale sensor to Analog 0
    Serial.println(val, DEC);        // print the value to serial
    delay(100);
}
