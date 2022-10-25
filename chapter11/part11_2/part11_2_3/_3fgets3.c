//
// Created by kirito on 2022/10/19.
// 程序清单11.9：使用fgets()。
//
#include <stdio.h>

#define STLEN 10

int main(void) {
    setbuf(stdout, NULL);
    char words[STLEN];
    int i;

    puts("Enter strings (empty line to quit):");

    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n') {
        i = 0;

        while (words[i] != '\n' && words[i] != '\0') {
            i++;
        }

        if (words[i] == '\n') {
            words[i] = '\0';
        } else {    // 如果words[i] == '\0'则执行这部分代码
            while (getchar() != '\n') {
                continue;
            }
        }

        puts(words);
    }

    puts("Done.");

    return 0;
}
