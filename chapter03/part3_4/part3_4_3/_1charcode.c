//
// Created by kirito on 2022/10/9.
// 程序清单3.5：显示字符的代码编号。
//
#include <stdio.h>

int main(void) {
    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch);   /* 用户输入字符 */
    printf("The code for %c is %d.\n", ch, ch);

    return 0;
}
