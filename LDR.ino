void setup() {
  pinMode(A1,INPUT_PULLUP);
  pinMode(5,OUTPUT);

}

void loop() {
  int val=analogRead(A1);
  if(val<400){
    digitalWrite(5,LOW);
  }
    digitalWrite(5,HIGH);
  }

