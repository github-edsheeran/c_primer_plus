//
// Created by kirito on 2022/10/20.
// 程序清单11.25：演示strcpy()。
//
#include <stdio.h>
#include <string.h> // strcpy()的原型在该头文件中

#define SIZE 40
#define LIM 5

char *gets(char *str);

int main(void) {
    char qwords[LIM][SIZE];
    char temp[SIZE];
    int i = 0;

    printf("Enter %d words beginning with q:\n", LIM);

    while (i < LIM && gets(temp)) {
        if (temp[0] != 'q') {
            printf("%s doesn't begin with q!\n", temp);
        } else {
            strcpy(qwords[i], temp);
            i++;
        }
    }

    puts("Here are the words accepted:");

    for (i = 0; i < LIM; i++) {
        puts(qwords[i]);
    }

    return 0;
}
