// Potansiyometre ile DC motor hız kontrolü

const int potPin = A0;   // Potansiyometrenin bağlı olduğu analog pin
const int motorPin = 9;  // Motorun bağlı olduğu PWM (Pulse Width Modulation) pin

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);  // Potansiyometre değerini oku (0-1023 arası)
  int motorSpeed = map(potValue, 0, 1023, 0, 255);  // 0-1023 arasındaki değeri 0-255 arasına çevir

  analogWrite(motorPin, motorSpeed);  // Motor hızını ayarla

  delay(10);  // Gecikme ekleyerek okuma stabilitesini artırabilirsiniz
}
