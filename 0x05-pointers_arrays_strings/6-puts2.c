#include "main.h"

/**
 * puts2 - This function do something.
 *
 * @s: Argument description.
 *
 * Return: value description.
 */
char _putchar(char s);

void puts2(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s += 2;
	}
	_putchar('\n');
}
