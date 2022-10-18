//
// Created by kirito on 2022/10/17.
// 程序清单11.2：把字符串看作指针。
//
#include <stdio.h>

int main(void) {
    printf("%s, %p, %c\n", "We", "are", *"space farers");

    return 0;
}
