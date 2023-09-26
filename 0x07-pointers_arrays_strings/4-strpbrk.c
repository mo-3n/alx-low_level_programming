#include "main.h"

/**
 * *_strpbrk - This function do something.
 *
 * @s: Argument description.
 * @accept: Argument description.
 *
 * Return: return value description.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
