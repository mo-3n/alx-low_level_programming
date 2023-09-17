#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet ten times in lowercase.
 *
 * Description: This function prints the English alphabet in lowercase ten times,
 * with each set of alphabets separated by a newline character.
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
