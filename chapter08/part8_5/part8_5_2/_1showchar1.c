//
// Created by kirito on 2022-10-12.
// 程序清单8.5：有较大I/O问题的程序。
//
#include <stdio.h>

void display(char cr, int lines, int width);

int main(void) {
    int ch; /* 待打印字符 */
    int rows, cols; /* 行数和列数 */

    printf("Enter a character and two integers;\n");

    // 只能正常运行一次，原因在于scanf()函数把换行符留在输入队列中。
    while ((ch = getchar()) != '\n') {
        scanf("%d %d", &rows, &cols);
        display(ch, rows, cols);
        printf("Enter another character and two integers;\n");
        printf("Enter a newline to quit.\n");
    }

    printf("Bye.\n");

    return 0;
}

void display(char cr, int lines, int width) {
    int row, col;

    for (row = 1; row <= lines; row++) {
        for (col = 1; col <= width; col++) {
            putchar(cr);
        }

        putchar('\n');  /* 结束一行并开始新的一行 */
    }
}