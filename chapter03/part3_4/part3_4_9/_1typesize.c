//
// Created by kirito on 2022/10/9.
// 程序清单3.8：打印类型大小。
//
#include <stdio.h>

int main(void) {
    /* C99为类型大小提供%zd转换说明。一些不支持C99和C11的编译器可用%u或%lu代替 */
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
    printf("Type float has a size of %zd bytes.\n", sizeof(float));
    printf("Type double has a size of %zd bytes.\n", sizeof(double));
    printf("Type long double has a size of %zd bytes.\n", sizeof(long double));

    return 0;
}
