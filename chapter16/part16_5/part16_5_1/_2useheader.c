//
// Created by kirito on 2022/11/15.
// 程序清单16.8：使用names_st结构。
//
#include <stdio.h>
#include "_1names_st.h"
// 记住要链接_1names_st.c

int main(void) {
    names candidate;

    get_names(&candidate);
    printf("Let's welcome ");
    show_names(&candidate);
    printf(" to this program!\n");

    return 0;
}
