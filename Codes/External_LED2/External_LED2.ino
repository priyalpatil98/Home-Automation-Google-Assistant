#define LED1 D1  // Led in Nano at digital pin (D1).
#define LED2 D2  // Led in Nano at digital pin (D2).
void setup() {
pinMode(LED1, OUTPUT);  // set the digital pin as output.
pinMode(LED2, OUTPUT);  // set the digital pin as output.
}
void loop() {
digitalWrite(LED1, HIGH); // turn the LED on.                
delay(1000);              // wait for 1 second.
digitalWrite(LED1, LOW);  // turn the LED off.
delay(1000);              // wait for 1 second.

digitalWrite(LED2, HIGH); // turn the LED on.                
delay(1000);              // wait for 1 second.
digitalWrite(LED2, LOW);  // turn the LED off.
delay(1000);              // wait for 1 second.
}
