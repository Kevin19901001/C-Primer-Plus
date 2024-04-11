/*
 * 使用循环，将公里数转换为对应的英里数
 * 
 * Date: 2024-04-11
 * Author: FanHuanQing
 *
 */
#include <stdio.h>
#define ADJUST 0
int main(void)
{

	const double SCALE = 0.6214;
	double km, mile;

	printf("km equals to mils\n");
	km = 0.0;
	while (km <= 100)
	{
		mile = SCALE * km + ADJUST;
		printf("%10.4f %15.4f miles\n", km, mile);
		km = km + 1.0;
	}

	return 0;

}

