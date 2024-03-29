/*
 * 练习 6
 * 编写一个程序，先提示用户输入名，然后提示用户输入姓。
 * 在一行打印用户输入的名和姓，下一行分别打印名和姓的字母数。
 * 字母数要与相应名和姓的结尾对齐。
 * 接下来，再打印相同的信息，但是字母个数与相应名和姓的开头对齐。
 * 
 * Date: 2024-03-23
 * Author: FanHuanQing
 * 
 */
#include <stdio.h>
#include <string.h>
int main(void)
{
  char first_name[20];
  char last_name[20];

  printf("Please enter your first name:\n");
  scanf("%s", first_name);

  int first_name_letters = strlen(first_name);
  printf("名字的字母数：%d\n", first_name_letters);

  printf("Please enter your last name:\n");
  scanf("%s", last_name);

  int last_name_letters = strlen(last_name);
  printf("姓氏的字母数：%d\n", last_name_letters);

  printf("first name: %s, last name: %s\n", first_name, last_name);
  
  return 0;
}

