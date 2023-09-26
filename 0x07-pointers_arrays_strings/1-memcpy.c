#include "main.h"

/**
 * *_memcpy - This function do something.
 *
 * @dest: Argument description.
 * @src: Argument description.
 * @n: Argument description.
 *
 * Return: return value description.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_pointer = (char *)dest;
	char *src_pointer = (char *)src;
	unsigned int i;

	for (i = 0, i < n; i++)
	{
		dest_pointer[i] = src_pointer[i];
	}

	return (dest);
}
