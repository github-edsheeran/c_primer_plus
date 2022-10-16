//
// Created by kirito on 2022/10/9.
// 程序清单3.4：更多printf()的特性。
// 打印unsigned int类型的值，使用%u转换说明；打印long类型的值，使用%ld转换说明。在x和o前面可以使用l前缀，%lx表示以十六进制
// 格式打印long类型整数，%lo表示以八进制格式打印long类型整数。对于short类型，可以使用h前缀。
//
#include <stdio.h>

int main(void) {
    unsigned int un = 3000000000;   /* int为32位和short为16位的系统 */
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig = %lld and not %ld\n", verybig, verybig);

    return 0;
}