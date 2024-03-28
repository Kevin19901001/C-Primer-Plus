/*
 * 这个程序尝试打印由#define与处理命令创建的常量所占的字节量。
 *
 * Date: 2024-03-28
 * Author: FanHuanQing
 *
 */
#include <stdio.h>
#define HELLO "Hi, Good night!"
int main(void)
{
	// 打印常量HELLO所占的字节量
	int size = sizeof(HELLO);
	printf("常量HELLO总共占%d个字节。\n", size);

	return 0;
}

