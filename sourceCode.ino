#include <LiquidCrystal.h>
#include<Servo.h>

LiquidCrystal lcd(10, 8, 5, 4, 3, 2);

int pinTemp = A0;   
int led =  7;
int servoPin = 13;
Servo servo; //object creation

void setup() {
  lcd.begin(16, 2);
  lcd.print("Temperature: ");    
  pinMode(led, OUTPUT);
  servo.attach(servoPin);
}
void loop() {
  float temp = analogRead(pinTemp);    
  temp = temp * 0.4887585;  //((5*100)/1023) = 0.4887585
  lcd.setCursor(0, 1);
  lcd.print(temp);

  if(temp > 0 && temp <5)
  {
    digitalWrite(led, HIGH);
    servo.write(90);
  }else{
    digitalWrite(led, LOW); 
    servo.write(0);
  }
}
