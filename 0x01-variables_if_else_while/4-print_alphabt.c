#include <stdio.h>
/**
 * main - Print all alphabet in lower case except q and e
 * Return: (0) Success.
 */
int main(void)
{
	char q_e[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(q_e[i]);
	}
	putchar('\n');
	return (0);
}
