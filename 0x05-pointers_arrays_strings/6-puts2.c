#include "main.h"

/**
 * puts2 - This function do something.
 *
 * @str: Argument description.
 *
 * Return: value description.
 */
char _putchar(char s);

void puts2(char *str)
{
	int s = 0;

	if (s % 2 == 0 && s != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
