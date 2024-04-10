/*
 * 使用循环将摄氏度转换为对应的华氏度
 *
 * Date: 2024-04-09
 * Author: FanHuanQing
 *
 */
#include <stdio.h>
#define ADJUST 32.0

int main(void)
{

	const double SCALE = 1.8;
	double celsius, fahrenheit;

	printf("Celsius equal to Fahrenheit:\n");
	celsius = 0.0;
	while(celsius <= 100.0){
		fahrenheit = SCALE * celsius + ADJUST;
		printf("%8.2f    %8.2f fahrenheit.\n", celsius, fahrenheit);
		celsius = celsius + 1.0;
	
	}

	return 0;

}
