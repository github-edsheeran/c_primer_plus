//
// Created by kirito on 2022/10/29.
// 程序清单12.3：使用局部静态变量。
//
#include <stdio.h>

void trystat(void);

int main(void) {
    int count;

    for (count = 1; count <= 3; count++) {
        printf("Here comes iteration %d:\n", count);
        trystat();
    }

    return 0;
}

void trystat(void) {
    int fade = 1;
    // 实际上并不是函数的一部分。因为静态变量和外部变量在程序被载入内存时已执行完毕。把这条声明放在函数中是为了
    // 告诉编译器只有该函数才能看到该变量。
    static int stay = 1;

    printf("fade = %d and stay = %d\n", fade++, stay++);
}
