#include "main.h"
#include <stdlib.h>

/**
 * _strlen - This function do something.
 *
 * @s: Argument description.
 *
 * Return: return value description.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * str_concat - This function do something.
 *
 * @s1: Argument description.
 * @s2: Argument description.
 *
 * Return: return value description.
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i = 0, j = 0;

	s1 = s1 == NULL ? "" : s1;
	s2 = s2 == NULL ? "" : s2;
	new_str = malloc(_strlen(s1) + _strlen(s2) + 1);
	if (!new_str)
	{
		return (NULL);
	}
	while (i < _strlen(s1)) /* concatenate */
	{
		*(new_str + i) = *(s1 + i);
		i++;
	}
	while (j < _strlen(s2))
	{
		*(new_str + i) = *(s2 + j);
		i++, j++;
	}
	return (new_str);
}
