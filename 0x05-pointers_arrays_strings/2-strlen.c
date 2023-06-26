#include "main.h"

/**
 * _strlen - function to return the length of string
 * @s: input string
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
