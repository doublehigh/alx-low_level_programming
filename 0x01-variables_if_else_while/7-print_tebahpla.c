#include <stdio.h>
/**
 * main - Print alphabe in reverse order.
 * Return: success.
 */
int main(void)
{
	char alph[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
