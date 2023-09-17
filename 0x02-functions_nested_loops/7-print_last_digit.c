#include "main.h"

/**
 * print_last_digit - This function do something.
 *
 * @n: Argument description.
 *
 * Return: return value description.
 */
int print_last_digit(int n)
{
	int d = n % 10;
	if (d >= 0)
	{
		_putchar(d + '0');
	}
	else
	{
		_putchar(-d + '0');
	}
}
