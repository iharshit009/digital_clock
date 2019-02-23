int h,k,m,s;
  int swh=8;
  int swm=9;
#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
void setup() {
  lcd.begin(16,2);
  lcd.print("DIGITAL CLOCK");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.write("HOUR");
    lcd.setCursor(6,0);
  lcd.write("MIN");
    lcd.setCursor(11,0);
  lcd.write("SEC");
  delay(2000);

}

void loop() {
  for(h=00;h<=23;h++)
  {
    lcd.clear();
    lcd.setCursor(0,0);
  lcd.write("HOUR");
    lcd.setCursor(6,0);
  lcd.write("MIN");
    lcd.setCursor(11,0);
  lcd.write("SEC");
  for(m=0;m<=59;m++)
  {
    lcd.clear();
    lcd.setCursor(0,0);
  lcd.write("HOUR");
    lcd.setCursor(6,0);
  lcd.write("MIN");
    lcd.setCursor(11,0);
  lcd.write("SEC");
for(s=0;s<=59;s++)
{
  if(digitalRead(swh))
  {
    h++;
    delay(500);
    if(h>23)
    {
      lcd.clear();
      lcd.setCursor(0,0);
  lcd.write("HOUR");
    lcd.setCursor(6,0);
  lcd.write("MIN");
    lcd.setCursor(11,0);
  lcd.write("SEC");
  h=0;
  

    }
  }
  if(digitalRead(swm))
  {
    m++;
    delay(500);
    if(m>59)
    {
      lcd.clear();
      lcd.setCursor(0,0);
  lcd.write("HOUR");
    lcd.setCursor(6,0);
  lcd.write("MIN");
    lcd.setCursor(11,0);
  lcd.write("SEC");
m=0;


    }
    
  }
  lcd.setCursor(1,1);
  lcd.print(h);
  lcd.setCursor(8,1);
  lcd.print(m);
  lcd.setCursor(13,1);
  lcd.print(s);
  delay(1000);
}
  }

    
  }

}
