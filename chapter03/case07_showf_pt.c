/* showf_pt.c -- 显示float类型的值 */

# include <stdio.h>

int main(void){

  // 1.声明浮点型变量
  float noah, jonah;
  double trouble;
  float planck = 6.63e-34;
  long double gnp;
  

  // 2.浮点型常量
  float F1 = 3.14159;
  float F2 = .2;
  float F3 = 4e16;
  float F4 = .8E-5;
  float F5 = 100.;
  
  printf("F1 = %e\n", F1);
  printf("F2 = %e\n", F2);
  printf("F3 = %e\n", F3);
  printf("F4 = %e\n", F4);
  printf("F5 = %e\n", F5);

  // 不要在浮点型常量中间家空格：1.56 E+12（错误！）
  // 默认情况下，编译器嘉定浮点型常量是double类型的精度。
  // 在浮点数后面加上f或F后缀可覆盖默认设置，编译器会将浮点型常量看作float类型。
  // C99添加了16进制表示浮点数的新特性，但并非所有编译器都支持C11的这一特性。


  // 3.打印浮点值
  // printf()函数使用%f转换说明打印十进制计数法的float和double。
  // 使用%e打印指数计数法的浮点数。
  float aboat = 32000.0;
  double abet = 2.14e9;
  long double dip = 5.32e-5;

  printf("%f can be written %e\n", aboat, abet);

  // 下一行要求编译器支持C99或其中的相关特性
  printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
  printf("%f can be written %e\n", abet, abet);
  printf("%Lf can be written %Le\n", dip, dip);


  // 4. 浮点值的上溢和下溢
  float toobig = 3.4E38 * 100.0f;
  printf("%e\n", toobig);
  
  // 浮点数舍入错误
  float a, b;
  a = 2.0e20 + 1.0;
  b = a - 2.0e20;
  printf("%f \n", b);  // 奇怪的结果，计算机没有足够的小数位（2后面有20个0）来完成正确的计算

  float c, d;
  c = 2.0e4 + 1.0;
  d = c - 2.0e4;
  printf("%f \n", d);  // 正常的结果


  return 0;
}

