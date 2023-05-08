#include <config.h>
#include <mbed.h>

int main() {
  // put your setup code here, to run once:
  const float deadzone = 0.05f;  // deadzone
  // const float distance = 0.5f;   // m
  float l = 0.0f;
  float r = 0.0f;
  // float v = 0.0f;
  // float omega = 0.0f;

  while (1) {
    l = stick_x - 0.5f;  // -0.5<l<0.5
    r = stick_y - 0.5f;
    // v = sqrt(x * x + y * y);
    // omega = atan2(y, x);
    if (l > deadzone || l < -deadzone) {
      if (l > 0.0f) {
        dir_l = 1;
        pwm_l = l;
      } else {
        dir_l = 0;
        pwm_l = -l;
      }
    } else {
      pwm_l = 0.0f;
    }
  }
}