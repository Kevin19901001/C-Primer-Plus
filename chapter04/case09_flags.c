/*
 * flags.c --演示一些格式标记
 *
 */
#include <stdio.h>

int main(void)
{

	// 
	printf("%x\n", 31);		// 1f 1F 0x1f
	printf("%x\n", 31);
	printf("%X\n", 31);
	printf("%#x\n", 31);

	// 
	printf("*%d*\n", 42);
	printf("*% d*\n", 42);
	printf("*% d*\n", -42);

	// 
	printf("*%5d*\n", 6);
	printf("*%5.3d*\n", 6);
	printf("*%05d*\n", 6);
	printf("*%05.3d*\n", 6);

	return 0;
}
