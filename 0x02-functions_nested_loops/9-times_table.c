#include "main.h"

/**
 * times_table - This function do something.
 *
 * Argument description.
 * Return value description.
 */
void times_table(void)
{
	int x, y, m;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			m = x * y;
			_putchar('m');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
