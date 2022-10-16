//
// Created by kirito on 2022-10-12.
// 程序清单9.11：符号常量和hotel.c中所有函数的原型。
//
#define QUIT       5
#define HOTEL1    80.00
#define HOTEL2   125.00
#define HOTEL3   155.00
#define HOTEL4   200.00
#define DISCOUNT   0.95
#define STARS "**********************************"

// 显示选择列表
int menu(void);

// 返回预订天数
int getnights(void);

// 根据费率、入住天数计算费用并显示结果
void showprice(double rate, int nights);


