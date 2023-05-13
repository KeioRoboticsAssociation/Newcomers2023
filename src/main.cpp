#include <config.h>
#include <mbed.h>
const float deadzone = 0.05f;

int main() {
  float x;
  float y;
  const float coef = 0.7f;  // coefが並進に使われるパワー

  while (1) {
    x = (stick_x - 0.5f) * 2.0f;
    y = (stick_y - 0.5f) * 2.0f;

    if (y < deadzone && y > -deadzone) {
      pwm_l = 0.0f;
      pwm_r = 0.0f;
    } else {
      if (y > 0.0f) {
        dir_l = 1;
        dir_r = 1;
        pwm_l = y * coef;
        pwm_r = y * coef;
      } else {
        dir_l = 0;
        dir_r = 0;
        pwm_l = -y * coef;
        pwm_r = -y * coef;
      }
    }

    if (x > deadzone && x < -deadzone) {
      if (y > 0) {
        if (x > 0) {
          pwm_r = y * coef + x * (1.0f - coef);
        } else {
          pwm_l = y * coef - x * (1.0f - coef);
        }
      } else {
        if (x > 0) {
          pwm_l = -y * coef - x * (1.0f - coef);
        } else {
          pwm_r = -y * coef + x * (1.0f - coef);
        }
      }
    }
  }
}