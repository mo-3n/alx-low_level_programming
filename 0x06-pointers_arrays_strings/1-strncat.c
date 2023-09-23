#include "main.h"

/**
 * _strncat - This function do something.
 *
 * @dest: Argument description.
 * @src: Argument description.
 * @n: Argument description.
 *
 * Return: return value description.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *refdest = dest;
	int b = n - 1;

	while (*dest)
	{
		dest++;
	}
	while (*src && src[b] >= 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (refdest);
}


