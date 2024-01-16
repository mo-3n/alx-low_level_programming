#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
 * argstostr - This function do something.
 *
 * @ac: Argument description.
 * @av: Argument description.
 *
 * Return: return value description.
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j, indx = 0, len = 0;
	char *new_str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		len += _strlen(av[i]);
		i++;
	}
	len += (ac + 1);
	new_str = malloc(len);
	if (new_str == NULL)
	{
		free(new_str);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			new_str[indx++] = av[i][j];
		}
		new_str[indx++] = '\n';
	}
	new_str[indx] = '\0';
	return (new_str);
}
