#include "main.h"

/**
 * This file is about print_line function
 */

void print_line(int n)
{
	if (n > 0)
	{
		int j;
		
		for (j = 0; j < n; j++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
