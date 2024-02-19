/*
 * floats.c --一些浮点型修饰符的组合
 *
 *
 *
 *
 *
 */
#include <stdio.h>


int main(void)
{
    const double RENT = 3852.99;	// const变量，限定变量为只读。

    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);

    return 0;
}
