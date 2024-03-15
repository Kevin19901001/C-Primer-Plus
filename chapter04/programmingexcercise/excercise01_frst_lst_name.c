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

	printf("请输入您的名和姓：\n");
	scanf("%s %s", &frst_name, &lst_name);
	printf("您的名：%s，您的姓：%s\n", frst_name, lst_name);

	return 0;
}
