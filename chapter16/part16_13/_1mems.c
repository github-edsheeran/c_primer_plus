//
// Created by kirito on 2022/11/16.
// 程序清单16.20：使用memcpy()和memmove()。
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 10

void show_array(const int ar[], int n);
// 如果编译器不支持C11的_Static_assert，可以注释掉下面这行。
_Static_assert(sizeof(double) == 2 * sizeof(int), "double not twice int size");

int main() {
    int values[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target[SIZE];
    double curious[SIZE / 2] = {2.0, 2.0e5, 2.0e10, 2e20, 5.0e30};

    puts("memcpy() used:");
    puts("values (original data): ");
    memcpy(target, values, SIZE * sizeof(int));
    puts("target (copy of values):");
    show_array(target, SIZE);

    puts("\nUsing memmove() with overlapping ranges:");
    memmove(values + 2, values, 5 * sizeof(int));
    puts("values -- elements 0-5 copied to 2-7:");
    show_array(values, SIZE);

    puts("\nUsing memcpy() to copy double to int:");
    memcpy(target, curious, (SIZE / 2) * sizeof(double));
    show_array(target, SIZE / 2);
    show_array(target + 5, SIZE / 2);

    return 0;
}

void show_array(const int ar[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }
    putchar('\n');
}
