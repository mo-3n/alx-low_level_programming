#include "main.h"

/**
 * This file is about print_alphabet function
 */

void print_alphabet(void)
{
	char az[26] = abcdefghijklmnopqrstuvwxyz;
	int j = 0 , i;

	while(j < 1)
	{
		i = 0;
		
		while(i < 25)
		{
			_putchar(az[i]);
			i++;
		}
		_putchar('\n');
	}
}
