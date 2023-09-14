#include "main.h"

/**
 * This file is about _isalpha function
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
