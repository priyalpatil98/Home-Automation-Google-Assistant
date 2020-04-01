#define BLYNK_PRINT Serial
int outputpin = A0;

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
BlynkTimer timer;

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = " ";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "  ";
char pass[] = "  ";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
    timer.setInterval(1000L, sendUptime);
}

void loop()
{
  Blynk.run();
  timer.run();
  
}

void sendUptime()
{
int analogValue = analogRead(outputpin);
float millivolts = (analogValue/1024.0) * 3300; //3300 is the voltage provided by NodeMCU
float celsius = millivolts/10;
Blynk.virtualWrite(V1, celsius);
}
