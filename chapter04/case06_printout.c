/*
 * 使用转换说明
 *
 *
 *
 *
 *
 */
#include <stdio.h>
#define PI 3.141593
int main(void)
{
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    printf("The %d contestants ate %f pies.\n", number, pies);
    printf("The value of pi is %f.\n", PI);
    printf("Farewell! thou art too dear for my prossessing!\n");
    printf("%c%d.\n", '$', 2 * cost);

    // 用%%来打印%
    int pc = 2 * 6;
    printf("Only %d%% of Sally's gribbles were edible.\n", pc);

    return 0;
}
