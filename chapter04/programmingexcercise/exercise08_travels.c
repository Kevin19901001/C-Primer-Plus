/*
 * 练习 8
 * 
 * 编写一个程序，提示用户输入旅行的里程和消耗的汽油量。
 * 然后计算并显示消耗每加仑汽油行驶的英里数，显示小数点后面一位数字。
 * 接下来，使用1加仑大约3.785升，1英里大约为1.609千米，把单位是英里/加仑的值转换为升/100公里（欧洲通用的燃料消耗表示法），并显示结果，显示小数点后面1位数字。
 * 注意，美国采用的方案测量消耗单位燃料的行程（值越大越好），而欧洲则采用单位距离消耗的燃料测量方案（值越低越好）。
 * 使用#define创建符号常量或使用const限定符创建变量来表示两个转换系数。
 *
 * Date: 2024-03-25
 * Author:FanHuanQing
 *
 */
#include <stdio.h>
#define OIL_TRANS 3.785
int main(void)
{

	const float MILE_TRANS = 1.609;
	float mileage;
	float oil_wear;

	printf("Please input mileage and oil wear:\n");
	scanf("%f %f", &mileage, &oil_wear);

	printf("里程：%4.3f\n", mileage);
	printf("油耗：%4.3f\n", oil_wear);

	float miles_per_gallon = mileage / oil_wear;
	printf("每加仑油耗行驶%4.1f英里.", miles_per_gallon);

	return 0;
}

