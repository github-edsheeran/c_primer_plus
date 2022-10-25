//
// Created by kirito on 2022/10/20.
// 程序清单11.19：拼接两个字符串，检查第1个数组的大小。
// strcat()函数无法检查第1个数组是否能容纳第2个字符串。如果分配给第1个数组的空间不够大，多出来的字符溢出到相邻存储单元时就会
// 出问题。注意，要给拼接后的字符串长度加1才够空间存放末尾的空字符。或者，用strncat()，该函数的第3个参数指定了最大添加字符数。
// 例如，strncat(bugs, addon, 13)将把addon字符串的内如附加给bugs，在加到第13个字符或遇到空字符时停止。因此，算上空字符
// (无论哪种情况都要添加空字符)，bugs数组应该足够大，以容纳原始字符串(不包含空字符)、添加原始字符串在后面的13个字符和末尾的
// 空字符。
//
#include <stdio.h>
#include <string.h>

#define SIZE 30
#define BUGSIZE 13

char *s_gets(char *st, int n);

int main(void) {
    setbuf(stdout, NULL);
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    char bug[BUGSIZE];
    int available;

    puts("What is your favorite flower?");
    s_gets(flower, SIZE);

    if ((strlen(addon) + strlen(flower) + 1) <= SIZE) {
        strcat(flower, addon);
    }

    puts(flower);
    puts("What is your favorite bug?");
    s_gets(bug, BUGSIZE);
    available = BUGSIZE - strlen(bug) - 1;
    strncat(bug, addon, available);
    puts(bug);

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
