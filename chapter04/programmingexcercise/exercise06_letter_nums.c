/*
 * 练习 6
 * 编写一个程序，先提示用户输入名，然后提示用户输入姓。
 * 在一行打印用户输入的名和姓，下一行分别打印名和姓的字母数。
 * 字母数要与相应名和姓的结尾对齐。
 * 
 * Date: 2024-03-23
 * Author: FanHuanQing
 * 
 */
#include <stdio.h>
int main(void)
{
  char first_name;
  char last_name;

  printf("Please enter your first name:\n");
  scanf("%s", &first_name);

  printf("Please enter your last name:\n");
  scanf("%s", &last_name);
  
  return 0;
}
