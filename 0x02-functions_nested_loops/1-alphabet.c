#include "main.h"

/**
 * print_alphabet function
 *
 * Description of the function
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
