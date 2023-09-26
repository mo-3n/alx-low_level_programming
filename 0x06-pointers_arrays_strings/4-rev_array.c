#include "main.h"

/**
 * reverse_array - This function do something.
 *
 * @a: Argument description*
 * @n: Argument description*
 *
 * Return: return value description.
 */
void reverse_array(int *a, int n)
{
	int i;
	int b = n - 1;
	int m;

	for (i = 0; i < n / 2; i++)
	{
		m = a[i];
		a[i] = a[b];
		a[b--] = m;
	}
}


