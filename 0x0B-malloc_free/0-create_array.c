#include "main.h"

/**
 * create_array - This function do something.
 *
 * @size: Argument description.
 * @c: Arg desc description.
 *
 * Return: return value description.
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *arr;

	if (size <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (int)size; i++)
	{
		*(arr + i) = c;
	}
	*(arr + i) = '\0';
	return (arr);
}
