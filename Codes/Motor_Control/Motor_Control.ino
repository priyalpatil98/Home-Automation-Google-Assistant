#define M1 D1 
//#define M2 D3
void setup() {
pinMode(M1, OUTPUT);
//pinMode(M2, OUTPUT);  // set the digital pin as output.
}
void loop() {
digitalWrite(M1, HIGH);// clockwise rotation on.                
//digitalWrite(M2, LOW); 
delay(5000);         // wait for 3 second.

digitalWrite(M1, LOW);// motor off.                
//digitalWrite(M2, LOW); 
delay(5fff000);         // wait for 3 second.

}
