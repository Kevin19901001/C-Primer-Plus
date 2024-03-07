/*
 * input.c — 何时使用&
 * 
 * Date: 2024-03-06
 * Author: FanHuanQing
 *
 */
#include <stdio.h>
int main(void)
{
	int age;
	float assets;
	char pet[30];

	printf("Enter your age, assets and favorate pet:\n");
        scanf("%d %f", &age, &assets);
        scanf("%s", pet);
        printf("%d %f %s\n", age, assets, pet);
	
	// 把输入解释成有符号十进制整数
	int num1;
	int num2;
	printf("Please enter integer values:\n");
	scanf("%d %i", &num1, &num2);
	printf("num1:%d, num2:%i\n", num1, num2);

        // %e、%f、%g、%a 把输入解释称浮点数
        float fltvale;
        float fltvalf;
        float fltvalg;
        float flrvala;
        printf(“Please enter float values:\n”);
        scanf(“%e %f %g %a”, &fltvale, &fltvalf, &fltvalg, &fltvala);

	// %c 把输入解释成字符串
	char chrval;
	printf("Please enter a char value:\n");
	scanf("%c", &chrval);
	printf("The char value is %c\n", chrval);

	return 0;
}