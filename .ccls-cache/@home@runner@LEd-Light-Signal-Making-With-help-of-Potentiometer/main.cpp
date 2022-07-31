int lol=A2;
int readlol;
float V2;
int dt=1000;
int pin=9;
int pin2=8;
int pin1=4;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(lol,INPUT);
pinMode(pin, OUTPUT);
pinMode(pin1, OUTPUT);
pinMode(pin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
readlol = analogRead(lol);
V2 = (5./1023.)*readlol;
Serial.print("Poentiometer reading is ");
Serial.println(V2);
if (V2 > 4 && V2 <= 5) {
    digitalWrite(pin2, HIGH);
}

  else {
  digitalWrite(pin2, LOW);
  
  
}
if (V2 > 3 && V2 <= 4) {
    digitalWrite(pin1, HIGH);
}

  else {
  digitalWrite(pin1, LOW);
  
  
}
if (V2 >= 0 && V2 <= 3) {
    digitalWrite(pin, HIGH);
}

  else {
  digitalWrite(pin, LOW);
  
  
}




delay(dt);
}