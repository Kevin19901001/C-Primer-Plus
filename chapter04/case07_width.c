/*
 * width.c -- 字段宽度
 *
 *
 *
 */

#include <stdio.h>
#define PAGES 959
#define SHORTINT 2
#define SIGNEDCHAR 'X'

int main(void)
{
	printf("*%010d*\n", PAGES);
	printf("*%#10d*\n", PAGES);
	printf("*% 10d*\n", PAGES);
   	printf("*%+10d*\n", PAGES);
	
	// short int
	printf("%6.4hd\n", SHORTINT);
	printf("%3hd\n", SHORTINT);
	
	// signed char
	printf("%6.4hhd\n", SIGNEDCHAR);
	printf("%6hhd\n", SIGNEDCHAR);
	printf("%hhd\n", SIGNEDCHAR);
	printf("%4hhu\n", SIGNEDCHAR);
	printf("%3hhx\n", SIGNEDCHAR);
	
	// intmax_t
	//printf("%jd\n", intmax_t);

	return 0;
}
