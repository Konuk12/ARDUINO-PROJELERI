void setup()
{ 
  Serial.begin(9600);
  pinMode(12, OUTPUT); //kırmızı pin
  pinMode(11, OUTPUT); //mavi pin
  pinMode(10, OUTPUT); //yeşil pin
}

void loop()
{
  Serial.print("Kirmizi rengi ac");
  Serial.print("\n");
  digitalWrite(12, HIGH);
  delay(1000); // bir saniye bekle
  Serial.print("Kirmizi rengi kapat");
  Serial.print("\n");
  Serial.print("\n");
  digitalWrite(12, LOW);
  delay(1000); // Kirmizi rengi kapat
  Serial.print("Mavi rengi ac");
  Serial.print("\n");
  digitalWrite(11, HIGH);
  delay(1000); // Bir saniye bekle
  Serial.print("Mavi rengi kapat");
  Serial.print("\n");
  Serial.print("\n");
  digitalWrite(11, LOW);
  delay(1000); // Bir saniye bekle
  Serial.print("Yesil rengi ac");
  Serial.print("\n");
  digitalWrite(10, HIGH);
  delay(1000); // Bir saniye bekle
  Serial.print("Yesil rengi kapat");
  Serial.print("\n");
  Serial.print("\n");
  digitalWrite(10, LOW);
  delay(1000); // Bir saniye bekle
}