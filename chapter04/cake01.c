/*
 * 这个程序尝试定义int型的数组，程序不报错即可。
 *
 * Date: 2024-03-28
 * Author: FanHuanQing
 *
 */
#include <stdio.h>
int main(void)
{
	// 定义一个整数型数组
	int nums[22];

	// 打印数组的字节数
	int size = sizeof(nums);
	printf("这个数组一共占%d个字节。\n", size);	// 88 int型4个字节

	return 0;
}
