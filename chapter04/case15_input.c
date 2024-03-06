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

	// %c 把输入解释成字符串
	char chrval;
	printf("Please enter a char value:\n");
	scanf("%c", &chrval);
	printf("The char value is %c\n", chrval);

        return 0;
}
