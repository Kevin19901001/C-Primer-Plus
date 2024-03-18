/*
 * Excercise 2
 *
 * Date: 2024-03-15
 * Author: FanHuanQing
 *
 */
#include <stdio.h>
int main(void)
{
	char name[40];

	printf("Please enter your name:\n");
	scanf("%s", name);
	printf("%s\n", name);
	printf("%+20s\n", name);
	printf("%-20s\n", name);
	printf("%+3s\n", name);

	return 0;
}

