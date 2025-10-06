#include <Arduino.h>

// put function declarations here:
// int myFunction(int, int);

// void setup() {
//   // put your setup code here, to run once:
//   int result = myFunction(2, 3);
// }

// void loop() {
//   // put your main code here, to run repeatedly:
// }

// // put function definitions here:
// int myFunction(int x, int y) {
//   return x + y;
// }


int i = 1;


void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  analogWrite(3, int((255 / 10) * i));
  analogWrite(5, int((255 / 10) * i));
  analogWrite(6, int((255 / 10) * i));

  if (i <= 10)
    i += 1;
  else
    i = 1;

  delay(50);
}