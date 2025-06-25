#define SENSOR_DIGITAL_PIN 19  // Pino onde a saída digital do sensor está conectada

void setup() {
  Serial.begin(115200);
  pinMode(SENSOR_DIGITAL_PIN, INPUT);
  Serial.println("Iniciando leitura digital do sensor TCRT5000...");
}

void loop() {
  int estado = digitalRead(SENSOR_DIGITAL_PIN);
  Serial.println(estado == HIGH ? "HIGH - Nada detectado" : "LOW - Objeto detectado");
  delay(200);
}
