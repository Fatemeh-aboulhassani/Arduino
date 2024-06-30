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
 while(digitalRead(button)== LOW ){  // when we push button then V=0 
 digitalWrite(red,HIGH); // when pushbutton Low then red LED on
  
  
 }
 for(int i=13; i>=11 ; i--){
if(i==13){
digitalWrite(red,LOW);
digitalWrite(green, HIGH);
delay(5000);
digitalWrite(green, LOW);
}
else if(i==12){
  digitalWrite(red,LOW);
digitalWrite(yellow, HIGH);
delay(1000);
digitalWrite(yellow, LOW);
}
else 
digitalWrite(red, HIGH);
delay(2000);
digitalWrite(red, LOW);
 }

 }
 