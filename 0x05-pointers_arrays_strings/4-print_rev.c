#include "main.h"

/**
 * print_rev - This function do something.
 *
 * @s: Argument description.
 *
 * Return: value description.
 */
char _putchar(char s);

void print_rev(char *s)
{
	int b;
	int n = 0;

	while (s[n] != '\0')
	{
		b = n;
		n++;
	}

	while (s[b] > -1)
	{
		_putchar(s[b]);
		b--;
	}
	_putchar('\n');
}
