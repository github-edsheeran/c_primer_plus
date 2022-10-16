//
// Created by kirito on 2022-10-12.
// 程序清单9.4：错误地使用函数。
//
#include <stdio.h>

int imax(); /* 旧式函数声明 */

int main(void) {
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3));
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));

    return 0;
}

int imax(n, m)
int n, m;
{
    return (n > m ? n : m);
}