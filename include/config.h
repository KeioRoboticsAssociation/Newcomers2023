#include <mbed.h>
// ここで変数を宣言すると、config.h をインクルード
// すれば他のファイルからも参照できる。

extern AnalogIn stick_x;
extern AnalogIn stick_y;
extern PwmOut pwm_l;
extern PwmOut pwm_r;
extern DigitalOut dir_l;
extern DigitalOut dir_r;

#define PWM_1 D3
#define PWM_2 D7
#define DIR_1 D4  // 不具合につきD5 to D4
#define DIR_2 D2
#define An_1 A3
#define An_2 A6
// #define A  B
// とは、プログラムのコンパイル前に、自ら定義した文字式Aを定数Bに置き換える処理です。
// ピン配置など、基本変わらないものを定義しておくと、後々の変更が楽になる。