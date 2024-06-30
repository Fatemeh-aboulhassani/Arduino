/*Temperature Sensor LM35
1. Celsius
2.0.5 accuracy
3. -55 to +150
4. 4 bis 30 V
analogReference(DEFAULT) 5 volts (on 5V Arduino boards) or 3.3 volts (on 3.3V Arduino boards)
analogReference(INTERNAL)  built-in 1.1V reference (Arduino Mega only)...Analog to Digital

*/

float temp, tempC;
void setup() {
 Serial.begin(9600);
 analogReference(DEFAULT); // V Reference 5 V

}

void loop() {
temp=analogRead(A0);
tempC=4.8*temp/10;
Serial.print("Temp= ");
Serial.println(tempC);
 delay(500);


}
