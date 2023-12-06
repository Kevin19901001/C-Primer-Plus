// 2.7 调试程序
// nogood.c -- 有错误的程序
#include <stdio.h>
int main(void)
{
    //int n, int n2, int n3; -- 错误地定义变量
    int n, n2, n3; //-- 正确地定义变量

    /* 该程序有多处错误 */
    n = 5;
    n2 = n * n;
    n3 = n2 * n2;
    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);
    
    return 0;
}
