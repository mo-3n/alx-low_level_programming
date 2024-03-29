#include "main.h"
#include <stdio.h>

/**
 * get_bit - function description.
 *
 * @n: Argument description.
 * @index: Argument description.
 *
 * Return: return value description.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
