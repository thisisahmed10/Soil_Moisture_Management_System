#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

int sensor_pin = A0;
int relay_pin = 7;

int red = 13;
int yellow = 12;
int blue = 11;

int min_hum = 50;
int max_hum = 60;

void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.backlight();
  lcd.setBacklight(HIGH);
  pinMode(sensor_pin, INPUT);
  pinMode(relay_pin, OUTPUT);
}

void loop()
{
  int sensor_data =   100 - analogRead(sensor_pin) / 10.23;
  Serial.print("Sensor_data:");
  Serial.print(sensor_data);
  Serial.print("\t | ");
  if( sensor_data < min_hum  )
  {
    digitalWrite(red,HIGH);
    Serial.println("Soil is dry.");
    digitalWrite(relay_pin, LOW);
    lcd.setCursor(0,0); 
    lcd.print("Soil is dry.");
    lcd.setCursor(0,1);
    lcd.print("humidity: ");
    lcd.print(sensor_data);
    lcd.print("%");
  }
  else if (sensor_data >= min_hum && sensor_data <= max_hum)
  {
    digitalWrite(yellow,HIGH);
    Serial.println("There is some moisture.");
    lcd.setCursor(0,0); 
    lcd.print("Soil is damp.");
    lcd.setCursor(0,1);
    lcd.print("humidity: ");
    lcd.print(sensor_data);
      lcd.print("%");
  }
  else if (sensor_data > max_hum )
  {
    digitalWrite(blue,HIGH);
    Serial.println("Soil is wet.");
    digitalWrite(relay_pin, HIGH);
    lcd.setCursor(0,0); 
    lcd.print("Soil is wet");
    lcd.setCursor(0,1);
    lcd.print("humidity: ");
    lcd.print(sensor_data);
    lcd.print("%");
  }
  else  {
    Serial.println("Something went wrong!");
    }
      
  delay(1000);
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(yellow,LOW);
  lcd.clear();
}