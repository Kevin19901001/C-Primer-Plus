/*
 * Exercise 4
 * 
 * Date: 2024-03-19
 * Author:FanHuanQing
 *
 */
#include <stdio.h>
int main(void)
{
	int height;
	char name[40];

	printf("Please enter your height in centimeter and name:\n");
	scanf("%d %s", &height, &name);

	float height_in_feet = height / 100.0;
	
	printf("%s, you are %1.2f meter tall\n", name, height_in_feet);

	return 0;
}
