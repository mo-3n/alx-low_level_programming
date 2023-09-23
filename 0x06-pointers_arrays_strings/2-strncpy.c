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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}


