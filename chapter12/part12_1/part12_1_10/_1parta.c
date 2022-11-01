//
// Created by kirito on 2022/10/31.
// 程序清单12.5：不同的存储类别。
// 与_2partb.c一起编译。
//
#include <stdio.h>

void report_count(void);

// 由于调用了该函数，所以必须包含函数的原型。
void accumulate(int k);

int count = 0;  // 文件作用域，外部链接。

int main(void) {
    setbuf(stdout, NULL);
    int value;  // 自动变量
    register int i; // 寄存器变量

    printf("Enter a positive integer (0 to quit):");

    while (scanf("%d", &value) == 1 && value > 0) {
        ++count;    // 使用文件作用域变量

        for (i = value; i >= 0; i--) {
            accumulate(i);
        }

        printf("Enter a positive integer (0 to quit):");
    }

    report_count();

    return 0;
}

void report_count() {
    printf("Loop executed %d times\n", count);
}
