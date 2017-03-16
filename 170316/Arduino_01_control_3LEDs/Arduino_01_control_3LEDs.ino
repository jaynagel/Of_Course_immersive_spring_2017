int switchstate = 0;

void setup() {
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  switchstate = digitalRead(2);

  if(switchstate == LOW) {
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
  }

  else {
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    delay(100);
    
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);  
    delay(100);
    
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);  
    delay(100);

    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);  
    delay(100);
  }

}
