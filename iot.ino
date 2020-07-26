
void setup()
{
  serial.begin(900)
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(2000);                     // wait for a second
