#include <config.h>
#include <mbed.h>

int main() {
  // put your setup code here, to run once:
  DigitalOut led(LED);  // 型名　変数名(ピン名)
  while (1) {
    led = 1;       // 1を代入すると、LEDが点灯するs
    wait_us(100);  // wait_us(x) --> x[us]待つそして次の行へ進む
    // put your main code here, to run repeatedly:
  }
}