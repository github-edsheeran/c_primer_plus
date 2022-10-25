//
// Created by kirito on 2022/10/19.
// 程序清单11.7：使用fgets()和fputs()。
// fgets()和gets()的区别：
// 1.fgets()函数的第2个参数指明了读入字符的最大数量。如果该参数的值是n，那么fgets()将读入n - 1个字符，或者读到遇到的第一个
// 换行符为止。
// 2.如果fgets()读到一个换行符，会把它储存在字符串中。这点与gets()不同，gets()会丢弃换行符。
// 3.fgets()函数的第3个参数指明要读入的文件。如果读入从键盘输入的数据，则以stdin作为参数，该标识符定义在stdio.h中。
//
#include <stdio.h>

#define STLEN 14

int main(void) {
    char words[STLEN];

    puts("Enter a string, please.");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Enter another string, please.");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Done.");

    return 0;
}
