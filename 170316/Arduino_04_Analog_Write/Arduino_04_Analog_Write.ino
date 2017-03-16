void setup() {
pinMode(5, OUTPUT);  
pinMode(6, OUTPUT);

}

void loop() {
  analogWrite(5, 5);
  analogWrite(6, 255);

}
