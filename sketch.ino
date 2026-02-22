#include <Wire.h>
#include <Adafruit_BMP085.h>
#include <LiquidCrystal_I2C.h>

Adafruit_BMP085 bmp;
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);

  // Initialize BMP180
  if (!bmp.begin()) {
    Serial.println("BMP180 not detected!");
    while (1);
  }

  // Initialize LCD
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("Weather Station");
  delay(2000);
  lcd.clear();
}

void loop() {
  float temperature = bmp.readTemperature();
  float pressure = bmp.readPressure() / 100.0; // convert to hPa
  float altitude = bmp.readAltitude();

  // Serial Output
  Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.print(" C | ");

  Serial.print("Pressure: ");
  Serial.print(pressure);
  Serial.print(" hPa | ");

  Serial.print("Altitude: ");
  Serial.print(altitude);
  Serial.println(" m");

  // LCD Line 1
  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(temperature);
  lcd.print("C ");

  lcd.print("P:");
  lcd.print(pressure);

  // LCD Line 2
  lcd.setCursor(0, 1);
  lcd.print("Alt:");
  lcd.print(altitude);
  lcd.print("m   ");

  delay(2000);
}