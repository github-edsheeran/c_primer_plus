//
// Created by kirito on 2022/11/16.
// 程序清单16.18：使用assert()。
//
#include <stdio.h>
#include <math.h>
#include <assert.h>

int main() {
    double x, y, z;

    puts("Enter a pair of numbers (0 0 to quit): ");

    while (scanf("%lf%lf", &x, &y) == 2
           && (x != 0 || y != 0)) {
        z = x * x - y * y;    /* 应该用+ */
        assert(z >= 0);
        printf("answer is %f\n", sqrt(z));
        puts("Next pair of numbers: ");
    }
    puts("Done");

    return 0;
}
