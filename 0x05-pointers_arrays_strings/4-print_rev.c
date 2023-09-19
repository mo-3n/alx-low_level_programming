#include "main.h"

/**
 * print_rev - This function do something.
 *
 * @str: Argument description.
 *
 * Return: value description.
 */
char _putchar(char s);

void print_rev(char *s)
{
	int n = 0;
	int b;

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
