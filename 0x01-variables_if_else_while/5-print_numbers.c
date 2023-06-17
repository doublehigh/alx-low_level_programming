#include <stdio.h>
/**
 * main - Print all numbers in base (10).
 * Return: (0) success.
 */
int main(void)
{
	int b = 10;
	int a;

	for (a = 0; a < b; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
