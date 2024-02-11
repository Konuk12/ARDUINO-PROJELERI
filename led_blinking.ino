void setup() { //ana kurulumlar
 pinMode(13, OUTPUT); //13. dijital pin cıkıs
}
void loop() { // sonsuz dongu
 digitalWrite(13, HIGH); // led 5v seviyesinde
 delay(1000); // 1 saniye bekle
 digitalWrite(13, LOW); // led 0v seviyesinde
 delay(1000); // 1 saniye bekle
}
