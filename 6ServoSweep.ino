#include <Servo.h>

Servo servos[6];
const int servoPins[6] = {2, 3, 4, 5, 6, 7};

void setup() {
  for (int i = 0; i < 6; i++) {
    servos[i].attach(servoPins[i]);
  }

  for (int angle = 0; angle <= 180; angle += 5) {
    for (int i = 0; i < 6; i++) {
      servos[i].write(angle);
    }
    delay(50);
  }

  for (int i = 0; i < 6; i++) {
    servos[i].write(90);
  }
}

void loop() {
}
