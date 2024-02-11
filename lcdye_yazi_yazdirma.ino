#include <LiquidCrystal.h>

// LCD ekran pim bağlantıları
const int rs = 12;
const int en = 11;
const int d4 = 5;
const int d5 = 4;
const int d6 = 3;
const int d7 = 2;

// LCD ekranı oluştur
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // LCD ekranı başlat
  lcd.begin(16, 2);  // 16 sütun, 2 satır
  lcd.print("Merhaba, Arduino!");
}

void loop() {
  // İstediğiniz yazıyı yazdırabilirsiniz
  lcd.setCursor(0, 1);  // İkinci satıra geç
  lcd.print("Derslerden Selam");
  delay(2000);  // 2 saniye bekle
  lcd.clear();  // Ekranı temizle
  delay(1000);  // 1 saniye bekle
}
