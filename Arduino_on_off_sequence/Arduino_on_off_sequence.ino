int green=13;
int yellow=12;
int red=11;
int button=7; //pushbutton

void setup() {
pinMode(green, OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(red, OUTPUT);
pinMode(button, INPUT);
}

void loop() {
  //only green on
digitalWrite(green,HIGH);
digitalWrite(yellow,LOW);
digitalWrite(red,LOW);
delay(1000);
//only yellow on
digitalWrite(green,LOW);
digitalWrite(yellow,HIGH);
delay(1000);
//only red on
digitalWrite(red, HIGH);
digitalWrite(yellow,HIGH);
delay(1000);

}