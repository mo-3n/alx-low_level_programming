#include "main.h"

/**
 * _strcmp - This function do something.
 *
 * @s1: Argument description*
 * @s2: Argument description*
 *
 * Return: return value description.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}


