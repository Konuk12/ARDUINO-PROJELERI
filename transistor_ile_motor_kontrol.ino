const int motorPin = 9;  // TIP120'nin Base (B) pinine bağlanan pin
const int motorSpeed = 255;  // Motorun hızı (0-255 arasında değer)

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  analogWrite(motorPin, motorSpeed);  // Motoru hareket ettir
  delay(5000);  // 5 saniye boyunca beklet
  analogWrite(motorPin, 0);  // Motoru durdur
  delay(5000);  // 5 saniye boyunca beklet
}
