#include "main.h"

int is_prime(int i)
{
	int a;

	if (i <= 1)
	{
		printf("Not Prime\n");
		return 0;
	}

	for (a = 2; is_square(a) <= i; a++)
	{
		if (i % a == 0)
		{
			printf("Not Prime\n");
			return 0;
		}
	}

	printf("Is Prime\n");
	return 1;
}

