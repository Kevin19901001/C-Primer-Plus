/* 显示字符的代码编号 */

# include <stdio.h>

int main(void){
  char ch;

  printf("Please enter a character.\n");

  // &符号表示把输入的字符赋给变量ch
  scanf("%c", &ch);

  // 2次ch，第一次打印一个字符（对应代码中的%c），第2次打印一个十进制整数值（对应代码中的%d）
  // 注意：printf()函数中的转换说明，决定了数据的显示方式，而不是数据的存储方式
  // 有些C编译器把char实现为有符号类型，这意味着char可表示的范围是-128~127
  // 而有些C编译器把char实现为无符号类型，那么char可表示的范围是0～255                                                                                          
  printf("The code for %c is %d.\n", ch, ch);

  return 0;
}

