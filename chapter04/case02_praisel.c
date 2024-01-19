/* 
 * 重要知识点：
 * 1.
 * char类型数组和null字符串。
 * C语言，没有专门用于存储字符串的变量类型，字符串都被存储在char类型的数组中。
 * C语言底层，在字符数组的末尾，用'\0'来标记字符串的结束。
 * 空字符不是0，它是非打印字符，其ASCII码等价于0。
 * C中的字符串一定以空字符结束，数组的容量必须至少比待存储字符串中的字符数多1。
 *
 * 2.
 * 什么是数组：可以把数组看成是一行连续的多个存储单元。更正式地说，数组是同类型数据元素的有序序列。
 * 
 * 3.
 * 一般而言，根据%s转换说明，scanf()只会读取字符串中的一个单词，而不是一整句。
 *
 * 4.
 * 字符串常量"x"和字符常量'x'不同：
 * 区别一：'x'是基本类型（char），而"x"是派生类型（char数组）；
 * 区别二："x"实际上由2个字符组成->'x'和'\0'
 * 
 */

//praisel.c 使用不同类型的字符串。
# include <stdio.h>
# define PRAISE "You are an extraordinary being."
int main(void){

  char name[40];

  printf("What's you name?\n");
  scanf("%s", name);
  printf("Hello, %s, %s\n", name, PRAISE);

  return 0;
}
