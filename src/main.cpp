#include <config.h>
#include <mbed.h>
const float deadzone = 0.01f;

int main() {
  asm(".global _printf_float");
  pwm_l.period_ms(20);
  pwm_r.period_ms(20);
  pwm_l = 0;
  pwm_r = 0;
  // float x;
  // float y;
  const float coef = 0.8f;  // coefが並進に使われるパワー

  while (1) {
    float x = (stick_x.read() - 0.5f) * 4.0f;
    float y = (stick_y.read() - 0.5f) * 4.0f;
    // float x = stick_x;
    // float y = stick_y;

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

    // if (x > deadzone && x < -deadzone) {
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
    //}
    // printf("x:%d, ", (int)(x * 100));
    // printf("y:%d\n", (int)(y * 100));
    // printf("stick x:%.2f, stick y:%.2f\n", x, y);
    // printf("left:%.2f,%d ", (pwm_l.read()), dir_l.read());
    //printf("right:%.2f,%d\n", (pwm_r.read()), dir_r.read());
    printf("x,y:%.2f, %.2f\n", x, y);

   
  }
}