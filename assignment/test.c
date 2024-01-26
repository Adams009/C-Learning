#include "main.h"
#include <stdio.h>
int main()
{
	int a = 9;
	int b = 5;
	int c = 3;

	int d = is_square(c);
	int e = is_square(b);
	printf("square of %d is %d\n", c, d);
	printf("square of %d id %d\n", b, e);

	is_prime(a);
	is_prime(b);
	is_prime(c);

	return 0;
}
