#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "mY0RAnD0mT0k3N1234567890";
char ssid[] = "nothing phone 2a";
char pass[] = "idontknow";

int ledPin = D1;

void setup() {
  pinMode(ledPin, OUTPUT);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}

BLYNK_WRITE(V1) {
  int state = param.asInt();
  digitalWrite(ledPin, state);
}
