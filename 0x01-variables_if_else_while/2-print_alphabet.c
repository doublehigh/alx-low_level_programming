#include <stdio.h>

/**
 * main - Print the Alphabet
 * Return: always (0) success
 */

int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int h;

	for (h = 0; h < 26; h++)
	{
		putchar(alph[h]);
	}
	putchar('\n');
	return (0);
}
