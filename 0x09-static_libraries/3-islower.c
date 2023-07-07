#include "main.h"

/**
 * _islower - check for small letters.
 * @c: is the char to be checked
 * Return: 1 if c is lower and 0 other wise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
