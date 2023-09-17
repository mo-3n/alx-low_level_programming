#include "main.h"

/**
 * print_sign - This function do something.
 *
 * @n: Argument description.
 *
 * Return: return value description.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
