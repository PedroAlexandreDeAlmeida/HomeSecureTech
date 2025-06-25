const int pirPin = 19;

void setup() {
  pinMode(pirPin, INPUT);
  Serial.begin(115200);
  Serial.println("Teste do Sensor PIR iniciado.");
}

void loop() {
  int movimento = digitalRead(pirPin);
  
  if (movimento == HIGH) {
    Serial.println("⚠️ Movimento detectado!");
  } else {
    Serial.println("✅ Nenhum movimento.");
  }

  delay(500);
}
