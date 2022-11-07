//
// Created by kirito on 2022/11/4.
// 程序清单14.4：使用指向结构的指针。
//
#include <stdio.h>

#define LEN 20

struct names {
    char first[LEN];
    char last[LEN];
};

struct guy {
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void) {
    struct guy fellow[2] = {
            {
                    {"Ewen",   "Villard"},
                    "grilled salmon",
                    "personality coach",
                    68112.00
            },
            {
                    {"Rodney", "Swillbelly"},
                    "tripe",
                    "tabloid editor",
                    432400.00
            }
    };

    struct guy *him;    /* 这是一个指向结构的指针 */

    printf("address #1: %p #2: %p\n", &fellow[0], &fellow[1]);

    him = &fellow[0];   /* 告诉编译器该指针指向何处 */

    printf("pointer #1: %p #2: %p\n", him, him + 1);
    printf("him->income is $%.2f: (*him).income is $%.2f\n", him->income, (*him).income);

    him++;  /* 指向下一个结构 */

    printf("him->favfood is %s: him->handle.last is %s\n", him->favfood, him->handle.last);

    return 0;
}
