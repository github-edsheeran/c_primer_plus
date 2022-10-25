//
// Created by kirito on 2022/10/20.
// 程序清单11.18：拼接两个字符串。
// strcat()函数接受两个字符串作为参数。该函数把第2个字符串的备份附加在第1个字符串末尾，并把拼接后形成的新字符串作为第1个
// 字符串，第2个字符串不变。strcat()函数的类型是char *(即，指向char的指针)。该函数返回第1个参数，即拼接第2个字符串后的
// 第1个字符串的地址。
//
#include <stdio.h>
#include <string.h> /* strcat()函数的原型在该头文件中 */

#define SIZE 80

char *s_gets(char *st, int n);

int main(void) {
    setbuf(stdout, NULL);
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";

    puts("What is your favorite flower?");

    if (s_gets(flower, SIZE)) {
        strcat(flower, addon);
        puts(flower);
        puts(addon);
    } else {
        puts("End of file encountered!");
    }

    puts("bye");

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