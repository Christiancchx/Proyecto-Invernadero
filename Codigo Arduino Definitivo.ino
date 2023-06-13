#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>
#include "LedControlMS.h"
#define NumeroMatrices 1

const int triggerPin = 3;
const int echoPin = 4;
const int servoPin = 5;
const int humidityPin = A1;
int pinLed1 = 7;
int pinLed2 = 8;
int pinLed3 = 9;
int pinLDR = A0;
int valorLDR = 0;  

LedControl lc=LedControl(12,11,10, NumeroMatrices);

LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo servo;

void setup() {
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
 
  lcd.begin(16, 2); 
  lcd.backlight();
 
  lcd.print("Dist: Seq: temp:"); 
 
  servo.attach(servoPin); 
 
  Serial.begin(9600);

  lc.shutdown(0,false);   
  lc.setIntensity(0,3);  
  lc.clearDisplay(0);  

  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
}

void loop() {
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  valorLDR= analogRead(pinLDR);
  long duration = pulseIn(echoPin, HIGH);
 
  int distance = duration * 0.0343 / 2.0;
 
  int humedad = analogRead(A1);
 
  lcd.setCursor(0, 1);
  lcd.print("                ");
 
  lcd.setCursor(0, 1);
  lcd.print(distance);
  lcd.setCursor(8, 1);
  lcd.print(humedad);
  lcd.print(" ");
 
  if (distance < 10) {
    servo.write(180);
    }
  else if (distance > 10) {
    servo.write(0);
    }
  if (humedad > 100) {
    lc.setColumn(0, 6, 0xff);
    lc.setColumn(0, 7, 0xff);  
    lc.setColumn(0, 5, 0xff);
    lc.setColumn(0, 4, 0xff);
    lc.setColumn(0, 3, 0xff);
    lc.setColumn(0, 2, 0xff);
    lc.setColumn(0, 1, 0xff);
    lc.setColumn(0, 0, 0xff);
}
} else {
    lc.setColumn(0, 6, 0x00);
    lc.setColumn(0, 7, 0x00);  
    lc.setColumn(0, 5, 0x00);
    lc.setColumn(0, 4, 0x00);
    lc.setColumn(0, 3, 0x00);
    lc.setColumn(0, 2, 0x00);
    lc.setColumn(0, 1, 0x00);
    lc.setColumn(0, 0, 0x00);
}
if (humedad > 400) {
    lc.setColumn(0, 6, 0x00);
    lc.setColumn(0, 7, 0x00);  
    lc.setColumn(0, 5, 0xff);
    lc.setColumn(0, 4, 0xff);
    lc.setColumn(0, 3, 0xff);
    lc.setColumn(0, 2, 0xff);
    lc.setColumn(0, 1, 0xff);
    lc.setColumn(0, 0, 0xff);
} else {
    lc.setColumn(0, 6, 0x00);
    lc.setColumn(0, 7, 0x00);  
    lc.setColumn(0, 5, 0x00);
    lc.setColumn(0, 4, 0x00);
    lc.setColumn(0, 3, 0x00);
    lc.setColumn(0, 2, 0x00);
    lc.setColumn(0, 1, 0x00);
    lc.setColumn(0, 0, 0x00);
}
if (humedad > 1000) {
    lc.setColumn(0, 6, 0x00);
    lc.setColumn(0, 7, 0x00);  
    lc.setColumn(0, 5, 0x00);
    lc.setColumn(0, 4, 0x00);
    lc.setColumn(0, 3, 0xff);
    lc.setColumn(0, 2, 0xff);
    lc.setColumn(0, 1, 0xff);
    lc.setColumn(0, 0, 0xff);
} else {
    lc.setColumn(0, 6, 0x00);
    lc.setColumn(0, 7, 0x00);  
    lc.setColumn(0, 5, 0x00);
    lc.setColumn(0, 4, 0x00);
    lc.setColumn(0, 3, 0x00);
    lc.setColumn(0, 2, 0x00);
    lc.setColumn(0, 1, 0x00);
    lc.setColumn(0, 0, 0x00);
}
if (humedad > 1200) {
    lc.setColumn(0, 6, 0xff);
    lc.setColumn(0, 7, 0xff);  
    lc.setColumn(0, 5, 0xff);
    lc.setColumn(0, 4, 0xff);
    lc.setColumn(0, 3, 0xff);
    lc.setColumn(0, 2, 0xff);
    lc.setColumn(0, 1, 0xff);
    lc.setColumn(0, 0, 0xff);
} else {
    lc.setColumn(0, 6, 0x00);
    lc.setColumn(0, 7, 0x00);  
    lc.setColumn(0, 5, 0x00);
    lc.setColumn(0, 4, 0x00);
    lc.setColumn(0, 3, 0x00);
    lc.setColumn(0, 2, 0x00);
    lc.setColumn(0, 1, 0x00);
    lc.setColumn(0, 0, 0x00);
}
if(valorLDR >20)
  {
    digitalWrite(pinLed1, HIGH);
    digitalWrite(pinLed2, LOW);
    digitalWrite(pinLed3, LOW);
  }
  if(valorLDR > 512)
  {
    digitalWrite(pinLed1, HIGH);
    digitalWrite(pinLed2, HIGH);
    digitalWrite(pinLed3, LOW);
  }
  if(valorLDR > 768)
  {
    digitalWrite(pinLed1, HIGH);
    digitalWrite(pinLed2, HIGH);
    digitalWrite(pinLed3, HIGH);
  }
  delay(200);
}




