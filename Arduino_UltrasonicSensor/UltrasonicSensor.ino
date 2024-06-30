

//global
 int PingPin=13; //TRIG pin is used to trigger the ultrasonic sound pulses
 int EchoPin=12;
void setup() {

pinMode(PingPin, OUTPUT);
pinMode(EchoPin, INPUT);
Serial.begin(9600);
}

void loop() {
  //local
unsigned long duration, cm;
digitalWrite(PingPin, LOW);
delayMicroseconds(2);
digitalWrite(PingPin,HIGH);
delayMicroseconds(5);
digitalWrite(PingPin, LOW);



// When the signal changes from LOW to HIGH, pulseIn() will start measuring the duration of the pulse.
duration= pulseIn(EchoPin, HIGH); 

cm=MicroStoCm( duration);
Serial.print(cm);
Serial.println("cm");
delay(100);

}
/* Sound travels in air at 340 m/s
duration from unltrasonic Sensor ~ 29 microsecond/cm
*/
unsigned long MicroStoCm(unsigned long MicroS){

return(MicroS/29)/2;


}



