#include "main.h"

/**
 * This file is about print_numbers function
 */

void more_numbers(void)
{
	int j;
	
	for (j = 0; j < 10; j++)
	{
		int i;
		
		for (i = 0; i < 15; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
