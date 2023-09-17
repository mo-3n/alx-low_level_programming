#include "main.h"

/**
 * function - This function do something.
 *
 * This function perform an action,
 * end of description.
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
