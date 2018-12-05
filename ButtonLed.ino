int ledRed = 5;
int button = 9;
int ledOn = 0;

byte leds = 0;

void setup() 
{
  pinMode(ledRed, OUTPUT);
  pinMode(button, INPUT_PULLUP);  
}

void loop() 
{
  if (digitalRead(button) == LOW && ledOn == 0)
  {
    ledOn = 1;
    digitalWrite(ledRed, HIGH);
    delay(500);
  }
   
    if (digitalRead(button) == LOW && ledOn == 1)
    {
      ledOn = 0;
      digitalWrite(ledRed, LOW);
      delay(500);
  }
}
