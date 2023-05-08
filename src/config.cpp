#include "config.h"

#include <mbed.h>

AnalogIn stick_x(An_1);
AnalogIn stick_y(An_2);
PwmOut pwm_l(PWM_1);
PwmOut pwm_r(PWM_2);
DigitalOut dir_l(DIR_1);
DigitalOut dir_r(DIR_2);
