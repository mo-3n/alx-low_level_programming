#include "main.h"

/**
 * *_strchr - This function do something.
 *
 * @s: Argument description.
 * @c: Argument description.
 *
 * Return: return value description.
 */
char *_strchr(char *s, char c)
{
	int k;

	while (1)
	{
		k = *s++;
		if (k == c)
		{
			return (s - 1);
		}
		if (k == 0)
		{
			return (NULL);
		}
	}
}
