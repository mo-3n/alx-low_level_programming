#include "main.h"

/**
 * _isalpha - This function do something.
 *
 * @c: This function perform an action,
 *
 * Return: end of description.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
