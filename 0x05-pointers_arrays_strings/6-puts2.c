#include "main.h"

/**
 * puts2 - This function do something.
 *
 * @str: Argument description.
 *
 * Return: value description.
 */
void puts2(char *str)
{
	int n = 0;

	while (n % 2 == 0 && n != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
