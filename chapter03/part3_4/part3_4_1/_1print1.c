//
// Created by kirito on 2022/10/9.
// 程序清单3.2：演示printf()的一些特性。
//
#include <stdio.h>

int main(void) {
    int ten = 10;
    int two = 2;

    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, 2, ten - two);
    printf("Doing it wrong: ");
    printf("%d minus %d is %d\n", ten); // 遗漏2个参数

    return 0;
}
