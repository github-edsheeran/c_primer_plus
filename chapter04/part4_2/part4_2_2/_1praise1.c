//
// Created by kirito on 2022/10/9.
// 程序清单4.2：使用不同类型的字符串。
//
#include <stdio.h>
#define PRAISE "You are an extraordinary being."

int main(void) {
    char name[40];

    printf("What's your name?");
    // scanf()在遇到第1个空白(空格、制表符或换行符)时就不再读取输入。
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);

    return 0;
}
