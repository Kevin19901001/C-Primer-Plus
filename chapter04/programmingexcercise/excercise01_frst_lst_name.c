/*
 * 练习1
 *
 * Date: 2024-03-15
 * Author: FanHuanQing
 *
 */
#include <stdio.h>
int main(void)
{

	char frst_name[40];
	char lst_name[40];

	printf("Please enter your first name and last name:\n");
	scanf("%s %s", frst_name, lst_name);
	printf("%s,%s\n", frst_name, lst_name);

	return 0;
}
