#include "main.h"

/**
 * This file is about print_sign function
 */

int print_sign(int n)
{
	int n;
	
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if else (n == 0)
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
