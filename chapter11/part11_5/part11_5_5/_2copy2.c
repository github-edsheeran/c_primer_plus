//
// Created by kirito on 2022/10/20.
// 程序清单11.26：使用strcpy()。
//
#include <stdio.h>
#include <string.h> // 提供strcpy()的函数原型

#define WORDS "beast"
#define SIZE 40

int main(void) {
    const char *orig = WORDS;
    char copy[SIZE] = "Be the best that you can be.";
    char *ps;

    puts(orig);
    puts(copy);
    ps = strcpy(copy + 7, orig);
    puts(copy);
    puts(ps);

    return 0;
}