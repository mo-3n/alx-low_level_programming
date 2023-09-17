#include "main.h"

/**
 * This file is about print_alphabet function
 */

void print_alphabet(void)
{
	char az[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		_putchar(az[i]);
		i++;
	}
	_putchar('\n');
}
