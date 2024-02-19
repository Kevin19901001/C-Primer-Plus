/*
 * 使用limit.h和float中定义的明示常量
 *
 * limit.h 整型限制
 *
 * float.h 浮点型限制
 */
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
    printf("Some number limits for this system:\n");
    printf("Biggest int: %d\n", INT_MAX);
    printf("Smallest long long: %lld\n", LLONG_MIN);
    printf("One byte = %d bits on this system.\n", CHAR_BIT);
    printf("Largest double: %e\n", DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN);
    printf("Float precision = %d digits\n", FLT_DIG);
    printf("Float epsilon = %e\n", FLT_EPSILON);

    return 0;
}
