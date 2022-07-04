#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a text according number
 *
 * return:Always (success)
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lasted = n % 10;

	if (lasted > 5)
	{
		printf("last digit of %d is %d and is greater tha		n 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, la		std);
	}
	else if (lastdd < 6 && lastd ! = 0)
	{
		printf("last digit of %d is %d and is less than 6		and not 0\n", n, lastd);
	}

	return (0);
}
