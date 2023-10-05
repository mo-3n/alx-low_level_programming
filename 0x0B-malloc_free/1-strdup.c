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
 * _strcpy - This function do something.
 *
 * @dest: Argument description.
 * @src: Argument description.
 *
 * Return: return value description.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup - This function do something.
 *
 * @str: Argument description.
 *
 * Return: return value description.
 */

char *_strdup(char *str)
{
	char *new_str;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	new_str = malloc(size);
	if (new_str == NULL)
	{
		return (NULL);
	}
	return (_strcpy(new_str, str));
}
