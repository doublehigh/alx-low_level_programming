#include <stdio.h>
/**
 * main - print allpossible of 2 digit numbers.
 * Return: 0 success.
 */
int main(void)
{
	int i, j;
	int u, q, c, d;

	for (i = 0; i < 100; i++)
	{
		u = i / 10;
		q = i % 10;

		for (j = 0; j < 100; j++)
		{
			c = j / 10;
			d = j % 10;

			if (u < c || (u == c && q < d))
			{
				putchar(u + '0');
				putchar(q + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');
				if (!(u == 9 && q == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
