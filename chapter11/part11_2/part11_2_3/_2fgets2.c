//
// Created by kirito on 2022/10/19.
// 程序清单11.8：使用gets()和fputs()。
// fgets()函数返回指向char的指针。正常情况下，该函数返回的地址与传入的第1个参数相同。但是，如果函数读到文件结尾，它将返回
// 一个特殊的指针：空指针。
//
#include <stdio.h>

#define STLEN 10

int main(void) {
    char words[STLEN];

    puts("Enter strings (empty line to quit):");

    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n') {
        fputs(words, stdout);
    }

    puts("Done.");

    return 0;
}
