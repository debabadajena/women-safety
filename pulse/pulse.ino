#include "Arduino.h"
#include <ESP8266WiFi.h>        //USE NODE MCU 1.0

#include "UbidotsMicroESP8266.h"
#define TOKEN "A1E-dvfAmReuZ15io4qWo8Ry0Fas25p3XX" //Get it from the UBIDOTS site

// Set these to connect to ESP8266
#define WIFI_SSID "INNOBUZZ R4"
#define WIFI_PASSWORD "71098vssut"


#define Apin A0           // Analog PIN
Ubidots client(TOKEN);    

void setup() 
{
  Serial.begin(115200);
  pinMode(Apin,INPUT);
  
  // connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  client.wifiConnection(WIFI_SSID,WIFI_PASSWORD);

  delay(1000);
  
}
void loop() 
{
  float pulse = analogRead(Apin);
  client.add("Pulse Rate",pulse);
  
  client.sendAll(true);
  delay(1000);
  Serial.println(pulse);
}
