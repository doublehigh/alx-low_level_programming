#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - Determines either greater than 5, is less than 6, or is 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	n = n % 10;

	if (n > 5)
	{
		printf("%d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("%d and is 0\n", n);
	}
	else
	{
		printf("%d and is less than 6 not 0\n", n);
	}
	return (0);
}
