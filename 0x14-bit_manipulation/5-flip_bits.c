#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function description.
 *
 * @n: Argument description.
 * @m: Argument description.
 *
 * Return: return value description.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
