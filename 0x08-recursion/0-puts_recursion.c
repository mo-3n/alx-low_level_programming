#include "main.h"

/**
 * _puts_recursion - This function do something.
 *
 * @s: Argument description.
 *
 * Return: return value description.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar('s');
	s++;
	_puts_recursion(s);
}
