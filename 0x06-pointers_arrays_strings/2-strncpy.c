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
	char *refdest = dest;
	*dest = dest [i];

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (refdest);
}


