//
// Created by lenovo on 2022/10/9.
// 程序清单2.1：一个简单的c程序。
//
// 预处理器指令，其中函数的实际代码在一个预编译代码的库文件中。
#include <stdio.h>

int main(void) {
    int num;    /* 声明一个名为num的变量，此时会在内存中预留空间 */
    num = 1;    /* 为num赋一个值，把值储存在之前预留的位置 */

    printf("I am a simple ");   /* 使用printf()函数 */
    printf("computer.\n");
    printf("My favorite number is %d because it is first.\n", num);

    return 0;
}
