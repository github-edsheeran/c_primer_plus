//
// Created by kirito on 2022-10-11.
// 程序清单6.3：注意花括号的使用。
// 糟糕的代码创建了一个无限循环。
//
#include <stdio.h>

int main(void) {
    int n = 0;

    while (n < 3)
        printf("n is %d\n", n);
        n++;

    printf("That's all this program does\n");

    return 0;
}
