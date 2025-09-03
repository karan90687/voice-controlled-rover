// At top, add sensor pins
const int trigPin = A0;
const int echoPin = A1;
const int irPin = A2;

// In setup():
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(irPin, INPUT);

// In loop(), before processing voice commands:
long dist = getDistance();
bool obstacle = (digitalRead(irPin) == LOW) || (dist > 0 && dist < 15);

if (obstacle) {
  stopMotors();
} else {
  // existing BT command read and handle
}

// Helper:
long getDistance(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  long duration = pulseIn(echoPin, HIGH, 30000);
  if (!duration) return -1;
  return duration * 0.034 / 2;
}
