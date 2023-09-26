#include "main.h"

/**
 * print_diagsums - This function do something.
 *
 * @a: Argument description.
 * @size: Argument descripton.
 *
 * Return: return value description.
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + 1];
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
