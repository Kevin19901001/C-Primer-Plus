/*
 * Excercise 3
 * scanf and printf float values
 *
 * Date: 2023-03-16
 * Author: FanHuanQing
 *
 */
#include <stdio.h>
int main(void)
{
	float a;

	printf("Please enter a float value:\n");
	scanf("%f", &a);
	printf("The input is %.2f or %2.e.\n", a, a);

	return 0;
}
