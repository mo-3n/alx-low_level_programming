#include "main.h"

/**
 * Print function.
 *
 * Print something
 */
void print_alphabet_x10(void)
{
	char az[26] = "abcdefghijklmnopqrstuvwxyz";
	int j = 0, i;

	while (j < 10)
	{
		i = 0;

		while (i < 26)
		{
		_putchar(az[i]);
		i++;
		}
	_putchar('\n');
	j++;
	}
}
