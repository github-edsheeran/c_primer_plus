//
// Created by kirito on 2022/10/29.
// 程序清单12.4：使用外部变量。
//
#include <stdio.h>

int units = 0;  /* 外部变量 */

void critic(void);

int main(void) {
    // 为了指出该函数使用了外部变量，可以在函数中用关键字extern再次声明。如果一个源代码文件使用的外部变量
    // 定义在另一个源代码文件中，则必须用extern在该文件中声明该变量。
    extern int units;   /* 可选的重复声明 */

    printf("How many pounds to firkin of butter?\n");
    scanf("%d", &units);

    while (units != 56) {
        critic();
    }

    printf("You must have looked it up!\n");

    return 0;
}

void critic(void) {
    /* 删除了可选的重复声明 */
    printf("No luck, my friend. Try again.\n");
    scanf("%d", &units);
}
