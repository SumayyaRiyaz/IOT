int sensorPin = A0;
int ledPin = 13;
int sensorValue = 0;
int threshold = 500;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.print("Soil Moisture Value: ");
  Serial.println(sensorValue);

  if (sensorValue > threshold) {
    Serial.println("Status: DRY");
    digitalWrite(ledPin, HIGH);
  } else {
    Serial.println("Status: WET");
    digitalWrite(ledPin, LOW);
  }

  delay(1000);
}
