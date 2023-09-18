#include "main.h"

/**
 * _puts - This function do something.
 *
 * @str: Argument description.
 *
 * Return: value description.
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		write(str[n]);
		n++;
	}
}
