#define LED D1 // Led in Nano at digital pin D1.
void setup() {
pinMode(LED, OUTPUT); // set the digital pin as output.
}
void loop() {
digitalWrite(LED, HIGH);// turn the LED on.                
delay(1000);          // wait for 1 second.
digitalWrite(LED, LOW); // turn the LED off.
delay(1000);         // wait for 1 second.
}
