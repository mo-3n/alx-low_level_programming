#include "main.h"

/**
 * times_table - This function do something.
 *
 * Argument description.
 * Return value description.
 */
void times_table(void)
{
	int x = 0;
	int y = 0;
	int m;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			m = x * y;

			if (m >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + m / 10);
				_putchar('0' + m % 10);
			}
			else
			{
				if (m > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + m);
			}
		}
		_putchar('\n');
	}
}
