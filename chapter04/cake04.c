/*
 * 这个程序尝试：
 * 定义一个字符串，然后接受大于字符串定义长度的字符串，看看最终的字符串是什么。
 *
 * Date: 2024-03-28
 * Author: FanHuanQing
 *
 */
#include <stdio.h>
#include <string.h>
int main(void)
{
	// 定义字符串
	char s[5];

	printf("Please enter a string:\n");
	scanf("%s", s);				// 输入5个字符和输入6个字符，编译不会报错，但执行结果会不一样

	int len = strlen(s);
	int size = sizeof(s);
	printf("最终的字符串是：%s\n", s);
	printf("字符串的长度是：%d\n", len);
	printf("字符串所占的字节量是：%d\n", size);

	return 0;
}

