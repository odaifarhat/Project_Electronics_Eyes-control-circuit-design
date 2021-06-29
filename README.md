# Project_Electronics_Eyes-control-circuit-design

Eyes control circuit design using (p n p) transistor.

The transistor will work like a switch and we disconnect the LED and turn it back on in less than 20 milliseconds and so the LED is on and off at the same time.

#  Component:

Arduino Uno R3.

Breadboard.

Wires.

PNP Transistor (BJT).

Resistor 50 ohm.

LED.

# Circuit connection steps:

Step_1, Connect from arduino ground and power (3.3v) Breadboard.

Step_2, Connect power Anod in LED.

Step_3, Connect cathode to resistor.

Step_4, Connect resistor to PNP(Emitter).

Step_5, Connect base to arduino digital(pwm) pin 12 & 13.

Step_6, Connect collector ground.

See the picture:

![Eye control circuit design using pnp transistor](https://user-images.githubusercontent.com/56201060/123802405-f1c7fc80-d8f3-11eb-9fd1-ca4d874db8ee.png)

# Code:

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
  delay(20); // Wait for 20 millisecond(s)
  digitalWrite(13, LOW);
  delay(20); // Wait for 20 millisecond(s)
   digitalWrite(12, HIGH);
  delay(20); // Wait for 20 millisecond(s)
  digitalWrite(12, LOW);
  delay(20); // Wait for 20 millisecond(s)
}


# Simulation:

https://www.tinkercad.com/things/2AmW9SLRcKm


                                              /* END */

