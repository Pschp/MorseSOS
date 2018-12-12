#include <Arduino.h>
#define LED_1 5
#define LED_2 6
#define LED_3 7

#define kurzesSignal 200
#define langesSignal 600
#define kurz 1
#define lang 2

void setup() {
 pinMode(LED_1, OUTPUT);
 pinMode(LED_2, OUTPUT);
 pinMode(LED_3, OUTPUT);
}

int signal[] 
{
  kurz, kurz, kurz, 
  lang, lang, lang, 
  kurz, kurz, kurz
};

void loop()
{
  for (int i=0; i<9; i++ )
  {
    int impuls = signal[i];
    if (impuls == kurz)
      {
        digitalWrite(LED_1, HIGH);
        delay(kurzesSignal);
        digitalWrite(LED_1, LOW);
        delay(kurzesSignal);
      }
      else if (impuls == lang)
      {
        digitalWrite(LED_2, HIGH);
        delay(langesSignal);
        digitalWrite(LED_2, LOW);
        delay(langesSignal);
      }
    
  }
  digitalWrite(LED_3, HIGH);
  delay(langesSignal);
  digitalWrite(LED_3, -LOW);
}