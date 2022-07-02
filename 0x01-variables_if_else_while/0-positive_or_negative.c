#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - print if nuberis positive, zero or negetive
 *
 * return: Always (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive/n", n);
	}
	if (n == 0)
	{
		printf("%d is zero/n", n);
	}
	if (n < 0)
	{
		printf("%d is negetive/n", n);
	}

	return (0);
}
