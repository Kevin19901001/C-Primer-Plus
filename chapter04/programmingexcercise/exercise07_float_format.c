/*
 * 练习 7
 * 
 * 编写一个程序，将一个double类型的变量设置为1.0/3.0，一个float类型的变量设置为1.0/3.0。
 * 分别显示两次计算的结果各3次：一次显示小数点后面6位数字；一次显示小数点后面12位数字；一次显示小数点后面16位数字。
 * 程序中要包含float.h头文件，并显示FLT_DIG和DBL_DIG的值。1.0/3.0的值与这些值一致吗？
 * 
 * Date: 2024-03-24
 * Author: FanHuanQing
 *
 */
#include <stdio.h>
#include <float.h>
int main(void)
{
	double dbl_vl = 1.0 / 3.0;
	float flt_vl = 1.0 / 3.0;
  
	printf("%1.3f\n", dbl_vl);
	printf("%1.6f\n", dbl_vl);

	printf("%1.12f\n", flt_vl);
	printf("%1.16f\n", flt_vl);

	printf("%f\n", FLT_DIG);
	printf("%f\n", DBL_DIG);

	return 0;
}

