/*
 * 练习 5
 * 编写一个程序，提示用户输入以兆位每秒（Mb/s）为单位的下载速度和以兆字节（MB）为单位的文件大小。程序中应计算文件的下载时间。注意，这里1字节等于8位。使用float类型，并用/作为除号。该程序要以下面的格式打印3个变量的值（下载速度、文件大小和下载时间），显示小数点后面两位数字
 * 
 * Date: 2024-03-20
 * Author: FanHuanQing
 *
 */
#include <stdio.h>
int main(void)
{
  float speed;
  float size;
  float download_time;

  printf("Please input speed and size:\n");
  scanf("%f %f", &speed, &size);

  download_time = size / speed;

  printf("At %f per second, a file of %f megabytes downloads in %f seconds.\n", speed, size, download_time);
  
  return 0;
}
