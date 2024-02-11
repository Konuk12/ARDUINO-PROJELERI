const int pirPin = 2;
const int ledPin = 10;

void setup() {
  Serial.begin(9600);     // Seri iletişimi başlat
  pinMode(pirPin, INPUT);  // PIR pinini giriş olarak ayarla
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int pirValue = digitalRead(pirPin); // PIR sensöründen okuma yap

  if (pirValue == HIGH) {
    Serial.println("Hareket Algılandı!"); // Serial Monitor'a mesaj gönder
    digitalWrite(ledPin, HIGH); // Ledi çalıştır
    delay(10000); // Ledi 10 saniye boyunca yak
  }
  
  if (pirValue == LOW) {
    Serial.println("Hareket Yok!"); // Serial Monitor'a mesaj gönder
    digitalWrite(ledPin, LOW); // Ledi kapat
    delay(500); // Kapatıldıktan sonra 0.5 saniye beklet
  }
}
