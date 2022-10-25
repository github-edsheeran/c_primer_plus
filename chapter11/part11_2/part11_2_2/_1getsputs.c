//
// Created by kirito on 2022/10/18.
// 程序清单11.6：使用gets()和puts()。
//
#include <stdio.h>

#define STLEN 81

// 由于C11删除了gets()函数，因此使用之前需要先声明。
char *gets(char *str);

int main(void) {
    char words[STLEN];

    puts("Enter a string, please.");
    // gets()唯一的参数是words，只知道数组的开始处，它无法检查数组是否装得下输入行。如果输入的字符串过长，会导致缓冲区溢出，
    // 即多余的字符超出了指定的目标空间。如果这些多余的字符只是占用了尚未使用的内存，就不会立即出现问题；如果它们擦写掉程序中
    // 的其他数据，会导致程序异常终止；或者还有其他情况。
    gets(words);
    printf("Your string twice:\n");
    printf("%s\n", words);
    puts(words);
    puts("Done.");

    return 0;
}
