//
// Created by kirito on 2022/10/20.
// 程序清单11.21：该程序可以正常运行。
// strcmp()函数通过比较运算符来比较字符串，就像比较数字一样。如果两个字符串参数相同，该函数就返回0.否则返回非零值。
//
#include <stdio.h>
#include <string.h> // strcmp()函数的原型在该头文件中

#define ANSWER "Grant"
#define SIZE 40

char *s_gets(char *st, int n);

int main(void) {
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);

    while (strcmp(try, ANSWER) != 0) {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
    }

    puts("That's right!");

    return 0;
}

char *s_gets(char *st, int n) {
    char *ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);

    if (ret_val) {
        while (st[i] != '\n' && st[i] != '\0') {
            i++;
        }

        if (st[i] == '\n') {
            st[i] = '\0';
        } else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }

    return ret_val;
}