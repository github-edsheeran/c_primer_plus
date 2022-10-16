//
// Created by kirito on 2022/10/9.
// 程序清单3.3：以十进制、八进制、十六进制打印十进制数100。
//
#include <stdio.h>

int main(void) {
    int x = 100;

    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    // 显示八进制和十六进制的0和0x前缀
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

    return 0;
}
