// Karaşimşek Gösterisi

int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9}; // Renkli LED'lerin pin numaraları

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(ledPins[i], OUTPUT); // LED pinleri çıkış olarak ayarlanır
  }
}

void loop() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], HIGH); // Bir LED'i yak
    delay(100); // 0.1 saniye bekle
    digitalWrite(ledPins[i], LOW); // LED'i söndür
  }

  for (int i = 7; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH); // Bir LED'i yak
    delay(100); // 0.1 saniye bekle
    digitalWrite(ledPins[i], LOW); // LED'i söndür
  }
}
