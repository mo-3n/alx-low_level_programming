#include "main.h"

/**
 * _puts_recursion - This function do something.
 *
 * @s: Argument description.
 * @c: Arg desc
 *
 * Return: return value description.
 */
int _putchar(char *c);

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
