/*
 * stringf.c -- 字符串格式
 * 
 * Date: 2024-03-04
 * Author: FanHuanQing
 */
#include <stdio.h>
#define BLURB "Authentic imitation"

int main()
{
	//
	printf("[%2s]\n", BLURB);	// [Authentic imitation]
	printf("[%24s]\n", BLURB);	// [     Authentic imitation]
	printf("[%24.5s]\n", BLURB);	// [                   Authe]
	printf("[%-24.5s]\n", BLURB);	// [Authe                   ]
   
	return 0;
}
