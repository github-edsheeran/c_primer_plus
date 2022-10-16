//
// Created by kirito on 2022-10-12.
// 程序清单8.4：一个拖沓且错误的猜数字程序。
//
#include <stdio.h>

int main(void) {
    int guess = 1;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);

    // 此时输入n会打印两条消息，这是由于程序读取了n和一个换行符。
    while (getchar() != 'y') {  /* 获取响应，与y作对比 */
        printf("Well, then, is it %d?\n", ++guess);
    }

    printf("I knew I could do it!\n");

    return 0;
}
