// Definição dos pinos
const int pirPin = 13;    // Pino conectado ao OUT do sensor PIR
const int buzzerPin = 12; // Pino conectado ao positivo do buzzer

// Variável para contar os eventos de movimento
unsigned long eventID = 0;

void setup() {
  pinMode(pirPin, INPUT);      // PIR como entrada
  pinMode(buzzerPin, OUTPUT);  // Buzzer como saída
  digitalWrite(buzzerPin, LOW);// Buzzer desligado inicialmente
  Serial.begin(115200);
  Serial.println("HomeSecureTech iniciado");
}

void loop() {
  int pirState = digitalRead(pirPin);

  if (pirState == HIGH) {
    eventID++;
    Serial.print("Evento ID ");
    Serial.print(eventID);
    Serial.println(": Movimento detectado!");
    digitalWrite(buzzerPin, HIGH); // Liga o buzzer
  } else {
    digitalWrite(buzzerPin, LOW);  // Desliga o buzzer
  }

  delay(100); // Pequena pausa para estabilidade
}
