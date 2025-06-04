# 🏠🔒 HomeSecureTech

**HomeSecureTech** é um sistema de alarme residencial inteligente que utiliza um **ESP32** e um **sensor infravermelho (PIR)** para detectar movimentos e acionar um alarme em caso de intrusão. A proposta é oferecer uma solução eficiente, acessível e personalizável para aumentar a segurança de residências e pequenos estabelecimentos.

## ⚙️ Tecnologias Utilizadas

- **ESP32** – Microcontrolador com conectividade Wi-Fi/Bluetooth
- **Sensor PIR** – Detecta movimentos baseados em calor corporal
- **Buzzer** – Ativado quando uma presença indevida é detectada
- Protoboard, jumpers e fonte de alimentação
- **Wokwi** para desenvolvimento

## 🚨 Funcionalidades

- Monitoramento de ambiente com detecção de movimento
- Disparo automático de alarme sonoro
- Projeto modular e expansível
- Base para futura integração com IoT, notificações remotas ou aplicativos móveis

## 🔌 Esquema de Conexão

PIR VCC -> 3.3V
PIR GND -> GND
PIR OUT -> GPIO 13

Buzzer + -> GPIO 12
Buzzer - -> GND

## 🧪 Simulação Online

Você pode visualizar e testar o projeto diretamente na simulação Wokwi:

🔗 **Simular no Wokwi:**  
[https://wokwi.com/projects/432836621079473153](https://wokwi.com/projects/432836621079473153)
