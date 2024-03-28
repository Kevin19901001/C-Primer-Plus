/*
 * 这个程序尝试定义一个字符串，并打印字符串的字节量。
 *
 * Date: 2024-03-28
 * Author: FanHuanQing
 *
 */
#include <stdio.h>
int main(void)
{
	// 定义一个字符串
	char name[40];

	// 打印这个字符串的字节量
	int size = sizeof(name);
	printf("这个字符串总共占%d个字节。\n", size);	// 40 char型1个字节

	return 0;
}

