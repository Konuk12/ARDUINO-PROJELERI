// Potansiyometre ile LED parlaklık kontrolü
const int potPin = A0;  // Potansiyometrenin bağlı olduğu analog pin
const int ledPin = 9;   // LED'in bağlı olduğu dijital pin
void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);  // Potansiyometre değerini oku (0-1023 arası)
  int brightness = map(potValue, 0, 1023, 0, 255);  // 0-1023 arasındaki değeri 0-255 arasına çevir

  analogWrite(ledPin, brightness);  // LED'in parlaklığını ayarla
  delay(10);  // Gecikme ekleyerek okuma stabilitesini artırabilirsiniz
}
