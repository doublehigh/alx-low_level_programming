#include "main.h"

/**
 * swap_int - swap two values.
 * @a: first value.
 * @b: Second value.
 * Return: No return.
 */

void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
