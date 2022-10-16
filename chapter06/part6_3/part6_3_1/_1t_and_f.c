//
// Created by kirito on 2022-10-11.
// 程序清单6.6：C中的真和假的值。
//
#include <stdio.h>

int main(void) {
    int true_val, false_val;

    true_val = (10 > 2);    // 关系为真的值
    false_val = (10 == 2);  // 关系为假的值

    printf("true = %d; false = %d \n", true_val, false_val);

    return 0;
}
