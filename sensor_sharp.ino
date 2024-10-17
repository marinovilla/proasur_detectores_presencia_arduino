const int sensorPin = A0;
const int ledPin = 13;
const int umbral = 300;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int valorSensor = analogRead(sensorPin);
  Serial.println(valorSensor);

  if (valorSensor < umbral) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(100);
}

