#include "main.h"

/**
 * This file is about _islower function
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
