const int buzzerPin = 18; // GPIO ligada no resistor que vai para a base do BC547

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  digitalWrite(buzzerPin, HIGH); // Liga o buzzer
  delay(1000);                   // 1 segundo ligado
  digitalWrite(buzzerPin, LOW);  // Desliga
  delay(1000);                   // 1 segundo desligado
}
