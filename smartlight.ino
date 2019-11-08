int relay = 8; //relay switch connected to pin no 8
volatile byte relayState = LOW; //initial relay state LOW(off)
int PIRInterrupt = 2; //PIR sensor connected to pin no 2(for interrupt)
long lastDebounceTime = 0;
long debounceDelay = 10000; // minimum time to wait before switiching lights off

void setup() {
pinMode(relay, OUTPUT);
digitalWrite(relay, HIGH);
pinMode(PIRInterrupt, INPUT);
attachInterrupt(digitalPinToInterrupt(PIRInterrupt), detectMotion, RISING); //setting up
interrupt
Serial.begin(9600);
}

void loop() {
if((millis() - lastDebounceTime) > debounceDelay && relayState == HIGH){
//turn off lights if no motion detected for a long while
digitalWrite(relay, HIGH);
relayState = LOW;
Serial.println("OFF");
}
 delay(50);
}

 //interrupt for motion detection
 void detectMotion() {
 Serial.println("Motion");
 if(relayState == LOW){

 digitalWrite(relay, LOW);//turn on relay
 }
 relayState = HIGH;
 Serial.println("ON");
 lastDebounceTime = millis();
 }