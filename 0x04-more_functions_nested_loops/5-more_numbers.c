#include "main.h"

/**
 * This file is about more_numbers function
 */

void more_numbers(void)
{
/*
	int j;
	
	for (j = 0; j < 10; j++)
	{
		int i;
		
		for (i = 0; i < 16; i++)
		{
			if 
			_putchar(i + '0');
		}
		_putchar('\n');
	}
*/

	char seq[20] = "01234567891011121314";
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;
		
		for (j = 0; j < 21; j++)
		{
			_putchar(seq[j]);
		}
		_putchar('\n');
	}
}
