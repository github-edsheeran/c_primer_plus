//
// Created by kirito on 2022-10-10.
// 程序清单4.10：字符串格式。
//
#include <stdio.h>

#define BLURB "Authentic imitation!"

int main(void) {
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    // .5告诉printf()只打印5个字符
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);

    return 0;
}
