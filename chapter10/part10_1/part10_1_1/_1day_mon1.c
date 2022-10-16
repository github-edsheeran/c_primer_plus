//
// Created by kirito on 2022-10-13.
// 程序清单10.1：打印每个月的天数。
//
#include <stdio.h>

#define MONTHS 12

int main(void) {
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < MONTHS; index++) {
        printf("Month %d has %2d days.\n", index + 1,
               days[index]);
    }

    return 0;
}
