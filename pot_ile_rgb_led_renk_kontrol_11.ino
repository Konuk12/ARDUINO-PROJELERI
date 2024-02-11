// Potansiyometre ile Renk Değiştirme - Belirli Aralıklarda

int redPin = 9;    // Kırmızı LED pin numarası
int greenPin = 10; // Yeşil LED pin numarası
int bluePin = 11;  // Mavi LED pin numarası

int potPin = A0;   // Potansiyometre pin numarası

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin); // Potansiyometre değeri

  // Potansiyometre değerine bağlı olarak renk değiştirme
  if (potValue < 341) { // 0-341 arasında (0-1/3) yeşil renk
    setColor(0, 255, 0); // Yeşil
  } else if (potValue < 682) { // 341-682 arasında (1/3-2/3) kırmızı renk
    setColor(255, 0, 0); // Kırmızı
  } else { // 682-1023 arasında (2/3-1) mavi renk
    setColor(0, 0, 255); // Mavi
  }
}

// RGB LED rengini ayarlamak için yardımcı fonksiyon
void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
  delay(100); // Renk değişimini belirginleştirmek için kısa bir bekleme
}
