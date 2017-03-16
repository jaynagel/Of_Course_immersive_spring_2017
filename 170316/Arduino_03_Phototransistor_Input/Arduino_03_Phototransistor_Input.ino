const int sensorPin = A0;

void setup() {
  Serial.begin(9600);

  for(int pinNumber = 5; pinNumber<8; pinNumber++){
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
  }
}

void loop() {
  
  int sensorVal = analogRead(sensorPin);
  Serial.print("Sensor Value: ");
  Serial.print(sensorVal);

  int brightness = map(sensorVal, 2, 50, 100, 0);
  Serial.print(" Brightness: ");
  Serial.println(brightness);

if(brightness < 25){
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
}else if(brightness >= 25 && brightness < 50){
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
}else if(brightness >= 50 && brightness < 75){
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
}else if(brightness >= 75){
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
}
delay(100);
}
