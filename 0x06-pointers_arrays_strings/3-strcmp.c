#include "main.h"

/**
 * _strcmp - This function do something.
 *
 * @s1: Argument description.
 * @s2: Argument description.
 *
 * Return: return value description.
 */
int *_strcmp(char *s1, char *s2)
{
	int valdiff;

	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	valdiff = *s1 - *s2;
	return (valdiff);
}


