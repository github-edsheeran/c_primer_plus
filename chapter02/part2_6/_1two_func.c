//
// Created by kirito on 2022/10/9.
// 程序清单2.3：一个文件中包含两个函数。
//
#include <stdio.h>

void butler(void);  /* ANSI/ISO C函数原型，也被称为函数声明 */

int main(void) {
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");

    return 0;
}

void butler(void) { /* 函数定义开始 */
    printf("You rang, sir?\n");
}