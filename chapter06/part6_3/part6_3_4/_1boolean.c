//
// Created by kirito on 2022-10-11.
// 程序清单6.9：使用_Bool类型的变量variable。
//
#include <stdio.h>

int main(void) {
    long num;
    long sum = 0L;
    _Bool input_is_good;

    printf("Please enter an integer to be summed ");
    printf("(q to quit):");
    input_is_good = (scanf("%ld", &num) == 1);

    while (input_is_good) {
        sum = sum + num;
        printf("Please enter next integer (q to quit):");
        input_is_good = (scanf("%ld", &num) == 1);
    }

    printf("Those integers sum to %ld.\n", sum);

    return 0;
}
