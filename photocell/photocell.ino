int photocell=A0;
int photocellreading;

void setup() {
Serial.begin(9600);

}

void loop() {
photocellreading=analogRead(photocell);
Serial.print("photocell reading= ");
Serial.println(photocellreading);
}
