//
// Created by kirito on 2022/11/3.
// 程序清单13.1：使用标准I/O。
//
#include <stdio.h>
#include <stdlib.h> // 提供exit()的原型

int main(int argc, char *argv[]) {
    int ch; // 读取文件时，储存每个字符的地方。
    FILE *fp;   // 文件指针
    unsigned long count = 0;

    if (argc != 2) {
        printf("Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp)) != EOF) {
        putc(ch, stdout);   // 与putchar(ch)相同
        count++;
    }

    if (fclose(fp) != 0) {
        printf("Error in closing file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    printf("File %s has %lu characters\n", argv[1], count);

    return 0;
}
