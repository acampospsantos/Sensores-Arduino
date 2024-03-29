//FUNÇÃO DO SENSOR DE DISTÂNCIA
long readUltrasonicDistance(int triggerPin, int echoPin){
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup(){
  Serial.begin(9600);
}

void loop(){
  Serial.print(0.01723 * readUltrasonicDistance(4, 2));
  Serial.println(" cm");
  delay(10); // Delay a little bit to improve simulation performance
}