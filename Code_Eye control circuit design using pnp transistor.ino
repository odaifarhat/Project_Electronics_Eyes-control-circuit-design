/* june 28/6/2021
By Eng.Odai Farhat.
Eye control circuit design using pnp transistor.
*/

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(20); // Wait for 15 millisecond(s)
  digitalWrite(13, LOW);
  delay(20); // Wait for 15 millisecond(s)
   digitalWrite(12, HIGH);
  delay(20); // Wait for 15 millisecond(s)
  digitalWrite(12, LOW);
  delay(20); // Wait for 15 millisecond(s)
}

/* END */