#include <LiquidCrystal.h>
#include <DHT.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
DHT dht(A0, DHT22);

void setup() {
    lcd.begin(16, 2);
     dht.begin();
}

void loop() {
  int i;

  float kelembaban = dht.readHumidity();
 float suhu = dht.readTemperature();
 
 /*Serial.print("kelembaban: ");
 Serial.print(kelembaban);
 Serial.print(" ");
 Serial.print("suhu: ");
 Serial.println(suhu);*/
 
 lcd.setCursor(0, 0);
 lcd.print("kelembaban:");
 lcd.setCursor(12,0);
 lcd.print(kelembaban);
 lcd.setCursor(0,1);
 lcd.print("suhu: ");
 lcd.setCursor(6,1);
 lcd.println(suhu );
 lcd.setCursor(11,1);
 lcd.println(" oC  ");
 
/*  lcd.setCursor(0, 0);
  lcd.print("satu");

  lcd.setCursor(6, 0);
  lcd.print("dua");

  lcd.setCursor(0, 1);
  lcd.print("tiga");

  lcd.setCursor(8, 1);
  lcd.print("empat");*/
}
