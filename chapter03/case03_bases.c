// bases.c  -- 以十进制、八进制、十六进制，打印十进制数100
// 不同的进制数使用不同的转换说明
#include<stdio.h>
int main(void)
{
    int x = 100;

    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);	// 十进制数字显示使用%d， 八进制显示数字用%o，十六进制显示数字用%x
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);	// 显示前缀用%#o, %#x或%#X

    return 0;
}

