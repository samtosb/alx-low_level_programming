#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function to generate a random number
 *
 * Reture: Always 0 (suceess)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if  (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
