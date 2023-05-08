#include <mbed.h>

#define PWM_1 PA_12
#define PWM_2 PB_5
#define DIR_1 PB_0
#define DIR_2 PB_1
#define LED LED1

// #define A  B
// とは、プログラムのコンパイル前に、自ら定義した文字式Aを定数Bに置き換える処理です。
// ピン配置など、基本変わらないものを定義しておくと、後々の変更が楽になる。