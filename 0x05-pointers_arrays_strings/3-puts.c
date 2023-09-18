#include "main.h"

/**
 * _puts - This function do something.
 *
 * @str: Argument description.
 *
 * Return: value description.
 */
char _putchar(char n);

void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
