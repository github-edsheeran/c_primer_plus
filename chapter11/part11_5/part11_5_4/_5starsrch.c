//
// Created by kirito on 2022/10/20.
// 程序清单11.24：使用strncmp()。
// strcmp()函数比较字符串中的字符，直到发现不同的字符为止，这一过程可能会持续到字符串的末尾。而strncmp()函数在比较两个字符串
// 时，可以比较到字符不同的地方，也可以只比较第3个参数指定的字符数。
//
#include <stdio.h>
#include <string.h>

#define LISTSIZE 5

int main() {
    const char *list[LISTSIZE] = {
            "astronomy",
            "astounding",
            "astrophysics",
            "ostracize",
            "asterism"};
    int count = 0;
    int i;

    for (i = 0; i < LISTSIZE; i++) {
        if (strncmp(list[i], "astro", 5) == 0) {
            printf("Found: %s\n", list[i]);
            count++;
        }
    }

    printf("The list contained %d words beginning"
           " with astro.\n", count);

    return 0;
}
