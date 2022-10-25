//
// Created by kirito on 2022/10/20.
// 程序清单11.23：某程序的开始部分。
//
#include <stdio.h>
#include <string.h>

#define SIZE 81
#define LIM 100
#define STOP "quit"

char *gets(char *str);

int main(void) {
    char input[LIM][SIZE];
    int ct = 0;

    printf("Enter up to %d lines (type quit to quit):\n", LIM);

    while (ct < LIM && gets(input[ct]) != NULL &&
           strcmp(input[ct], STOP) != 0) {
        ct++;
    }

    printf("%d strings entered\n", ct);

    return 0;
}
