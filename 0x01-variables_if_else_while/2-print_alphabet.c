#include <stdio.h>

/**
 * main - Print the Alphabet
 * Return: always (0) success
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		printf("%c\n", alph);
	}
	return (0);
}
