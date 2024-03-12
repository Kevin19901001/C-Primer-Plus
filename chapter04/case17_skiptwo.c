/*
 * skiptwo.c —- 跳过输入中的前2个整数
 *
 * Date: 2023-03-11
 * Author: FanHuanQing
 *
 */
#include <stdio.h>
int main(void)
{
        int n;
        printf("Please enter three integers:\n");
        scanf("%*d %*d %*d", &n);
        printf("The last integer is:\n", n);
        return 0;
}
