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
 for(int i=13; i>=11 ; i--){
digitalWrite(i, HIGH);
delay(2000);
digitalWrite(i, LOW);
delay(2000);


 }
 
 
 }