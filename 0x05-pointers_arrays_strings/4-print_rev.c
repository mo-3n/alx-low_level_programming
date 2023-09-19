#include "main.h"

/**
 * print_rev - This function do something.
 *
 * @s: Argument description.
 *
 * Return: value description.
 */
char _putchar(char s);
int _strlen(char s);

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

void print_rev(char *s)
{
	int b;
//	int n = 0;

	for (b = _strlen[s]; b >= 0; b--)
	{
		_putchar(s[b]);
	}
/*	
	while (s[n] != '\0')
	{
		b = n;
		n++;
	}

	while (s[b] > -1)
	{
		_putchar(s[b]);
		b--;
	}
*/
	_putchar('\n');
}
