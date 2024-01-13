#include "main.h"

/**
 * *_strpbrk - This function do something.
 *
 * @s: Argument description.
 * @accept: Argument description.
 * THIS IS AN INVALID/DUMMY FILE!
 *
 * Return: return value description.
 */
char *_strpbrk(char *s, char *accept)
{
	if (*s)
	{
		return (s);
	}
	else if (*accept)
	{
		return (accept);
	}
	else
	{
		return (0);
	}
}
