#include "main.h"

/**
 * _strncpy - This function do something.
 *
 * @dest: Argument description.
 * @src: Argument description.
 * @n: Argument description.
 *
 * Return: return value description.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = n - 1;
	char *refdest = dest;

	while (*dest)
	{
		dest++;
	}
	for (; i < n && src[i] != '\0'; i++)
	{
		*dest = *src;
		dest++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (refdest);
}


