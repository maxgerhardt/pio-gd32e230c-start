#include <Arduino.h>

// LED1 to LED4 are available on board
// LED{1,2,3,4} = {PA7, PA8, PA11, PA12}
#define LED LED1

static int i = 0;
void setup()
{
  //SERIAL0_TX = PA9 (="D1 - TX")
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

void loop()
{
  digitalWrite(LED, LOW);
  delay(500);
  digitalWrite(LED, HIGH);
  delay(500);
  Serial.println("Blinky nr. " + String(i++));
}