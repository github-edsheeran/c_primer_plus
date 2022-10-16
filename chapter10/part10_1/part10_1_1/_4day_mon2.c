//
// Created by kirito on 2022-10-13.
// 程序清单10.4：让编译器计算元素个数。
//
#include <stdio.h>

int main(void) {
    const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};
    int index;

    for (index = 0; index < sizeof days / sizeof days[0]; index++) {
        printf("Month %2d has %d days.\n", index + 1,
               days[index]);
    }

    return 0;
}
