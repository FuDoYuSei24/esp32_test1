#include <Arduino.h>

#define TRIG 32
#define ECHO 33


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);

  double delta_time = pulseIn(ECHO,HIGH);
  float detect_distance = delta_time * 0.0343/2;
  Serial.printf("distande = %f cm\n",detect_distance);
  Serial.printf("HelloWorld");
  delay(100);

}



