//
// Created by kirito on 2022/10/18.
// 程序清单11.6：使用gets()和puts()。
//
#include <stdio.h>

#define STLEN 81

// 由于C11删除了gets()函数，因此使用之前需要先声明。
char *gets(char *str);

int main(void) {
    char words[STLEN];

    puts("Enter a string, please.");
    gets(words);
    printf("Your string twice:\n");
    printf("%s\n", words);
    puts(words);
    puts("Done.");

    return 0;
}
