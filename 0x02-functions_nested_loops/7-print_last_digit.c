#include "main.h"

/**
 * print_last_digit - This function do something.
 *
 * @n: Argument description.
 *
 * Return: return value description.
 */
int print_last_digit(int n)
{
	int d = n % 10;
	
	if (d < 0)
	{
		d = -d;
	}
	return (d);
}
