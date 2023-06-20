#include <stdio.h>

/**
 * main - print natural below 1024 that are multiple of 3 and 5
 * Return: 0 success
 */

int main(void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);
	return (0);
}
