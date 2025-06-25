// Definição dos pinos
const int pirPin = 19;    // Pino do sensor PIR
const int buzzerPin = 18; // Pino do buzzer

unsigned long eventID = 0;
bool alarmeAtivo = false;
String comandoSerial = "";

void setup() {
  Serial.begin(115200);
  pinMode(pirPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW);
}

void loop() {
  int pirState = digitalRead(pirPin);

  if (pirState == HIGH && !alarmeAtivo) {
    eventID++;
    alarmeAtivo = true;
    Serial.print("⚠️ Evento ID ");
    Serial.print(eventID);
    Serial.println(": Movimento detectado!");
    Serial.println("🛑 Alarme ativado! Digite a senha para desligar.");
    digitalWrite(buzzerPin, HIGH);
  }

  // Verifica entrada via serial
  if (Serial.available() > 0) {
    comandoSerial = Serial.readStringUntil('\n');
    comandoSerial.trim();

    if (comandoSerial.equalsIgnoreCase("senha") && alarmeAtivo) {
      alarmeAtivo = false;
      digitalWrite(buzzerPin, LOW);
      Serial.println("✅ Alarme desligado. Aguardando novo movimento...");
    }
  }
}
