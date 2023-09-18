#include "main.h"

/**
 * _strlen - This function do something.
 *
 * @s: Argument description.
 *
 * Return value description.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
