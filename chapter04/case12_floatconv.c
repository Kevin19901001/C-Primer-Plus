/*
 * floatconv.c -- 不匹配的浮点型转换
 *
 * Date: 2024-03-04
 * Author: FanHuanQing
 *
 */

#include <stdio.h>

int main(void)
{
	float n1 = 3.0;
	double n2 = 3.0;
	long n3 = 2000000000;
	long n4 = 1234567890;
	
	printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
	
	return 0;
}
