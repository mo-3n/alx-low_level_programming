#include "main.h"

/**
 * This file is about print_square function
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i;
		for (i = 0; i < size; i++)
		{
			int j;
			
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
