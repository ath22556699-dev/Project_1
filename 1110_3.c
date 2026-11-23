#include <stdio.h>

#define BUDGET 20000

int expense;
int main() 
{
    extern int expense;
    printf("請輸入目前的旅行花費：");
    scanf("%d", &expense);

    int remaining= BUDGET - expense;

    printf("旅行總預算：%d 元\n", BUDGET);
    printf("目前旅行花費：%d 元\n", expense);
    printf("剩餘預算：%d 元\n", remaining);

    return 0;
}