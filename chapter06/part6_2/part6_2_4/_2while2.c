//
// Created by kirito on 2022-10-11.
// 程序清单6.4：注意分号的位置。
//
#include <stdio.h>

int main(void) {
    int n = 0;

    while (n++ < 3);
        printf("n is %d\n", n);

    printf("That's all this program does.\n");

    return 0;
}
