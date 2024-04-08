/*
 * golf.c -- 高尔夫锦标赛记分卡
 * C的基本赋值运算符有些与众不同
 *
 * Date: 2024-04-08
 * Author: FanHuanQing
 *
 */
#include <stdio.h>

int main(void)
{
	int jane, tarzan, cheeta;

	cheeta = tarzan = jane = 68;
	printf("	          cheeta    tarzan    jane\n");
	printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);

	return 0;

}

