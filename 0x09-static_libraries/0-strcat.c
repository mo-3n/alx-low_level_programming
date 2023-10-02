#include "main.h"

/**
 * _strcat - This function do something.
 *
 * @dest: Argument description.
 * @src: Argument description.
 *
 * Return: return value description.
 */
char *_strcat(char *dest, char *src)
{
	char *refdest = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (refdest);
}


