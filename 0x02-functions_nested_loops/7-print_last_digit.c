#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @n: to be use int he question
 * Return: values of n
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
