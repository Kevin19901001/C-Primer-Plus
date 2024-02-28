/*
 * 使用修饰符和标记
 *
 * width.c 字段宽度
 *
 */
#include <stdio.h>
#define PAGES 959

int main(void)
{
    printf("% d\n", PAGES);
	printf("%#d\n", PAGES);
    printf("%+d\n", PAGES);
	printf("%-d\n", PAGES);
	printf("%0d\n", PAGES);
	
	printf("\n");
	printf("*%d*\n", PAGES);	// *959*
    printf("*%2d*\n", PAGES);	// *959*
    printf("*%10d*\n", PAGES);	// *       959*
    printf("*%-10d*\n", PAGES);	// *959       *

	printf("%\n", PAGES);
    printf("*%010d*\n", PAGES);
    printf("*%#10d*\n", PAGES);
	printf("*% 10d*\n", PAGES);
	printf("*%+10d*\n", PAGES);

    return 0;
}
