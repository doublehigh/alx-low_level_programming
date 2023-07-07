#include "main.h"

/**
 * _isalpha - check for char alphabet
 * @c: the char to be checked
 * Return: 1 for alphabet 0 for else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
