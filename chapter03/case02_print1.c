// print1.c  -- 演示printf()的一些特性
// 编译器会警告，但可以编译通过
#include<stdio.h>
int main(void)
{
    int ten = 10;
    int two = 2;

    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, two, ten - two);		// 10 minus 2 is 8

    printf("Doing it wrong: ");
    printf("%d minus %d is %d\n", ten);				// 10 minus 1 is 0

    return 0;
}

