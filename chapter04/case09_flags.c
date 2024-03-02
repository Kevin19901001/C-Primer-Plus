/*
 * flags.c --演示一些格式标记
 *
 */
#include <stdio.h>

int main(void)
{

	printf("%x %X %#x\n", 31, 31, 31);    // 1f 1F 0x1f
	printf("**%d**% d**% d**\n", 42, 42, -42);

	return 0;
}
