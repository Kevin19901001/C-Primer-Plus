#include <stdio.h>
int main(void)
{
	float a = 3.14;

	printf("%%e: PI = %e\n", a);

	printf("%%E: PI = %E\n", a);

	printf("%%f: PI = %f\n", a);

	printf("%%F: PI = %F\n", a);

	printf("%%g: PI = %g\n", a);

	printf("%%G: PI = %g\n", a);

	return 0;
}

