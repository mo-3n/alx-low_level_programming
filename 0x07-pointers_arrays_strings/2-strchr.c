#include <stdio.h>
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
	int i;

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
		return (NULL);
	}
}
