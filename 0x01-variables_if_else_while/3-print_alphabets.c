#include <stdio.h>
/**
 * main - Print all alphabets.
 * Return: Always return (0) success.
 */
int main(void)
{
	char aph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(aph[i]);
	}
	putchar('\n');
	return (0);
}
