#include <stdio.h>

void 解鎖金字塔(int level) 
{
    if (level <= 0) 
    {
        printf("所有樓層解鎖完成！\n");
        return; 
    }
    printf("解鎖第 %d 層魔法能量\n", level);
    解鎖金字塔(level - 1);
}
int main() 
{
    int n;
    printf("請輸入魔法金字塔層數：");
    scanf("%d", &n);
    解鎖金字塔(n);

    return 0;
}