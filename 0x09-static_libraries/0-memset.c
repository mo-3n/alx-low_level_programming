#include "main.h"

/**
 * *_memset - This function do something.
 *
 * @s: Argument description.
 * @b: Argument description.
 * @n: Argument description.
 *
 * Return: return value description.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

