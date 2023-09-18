#include "main.h"

/**
 * times_table - This function do something.
 *
 * Argument description.
 * Return value description.
 */
void print_times_table(int n)
{
	int x = 0;
	int y = 0;
	int m;

	if (n >= 0 && n <= 15)
	{
		for (y = 0; y <= n; y++)
		{
			if (y > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			_putchar('0' + x * y);
		}
		_putchar('\n');

		for (x = 1; x <= n; x++)
		{
			for (y = 0; y < n; y++)
			{
				m = x * y;

				if (m >= 10 && m < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + m / 10);
					_putchar('0' + m % 10);
				}
				else if (m >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + m / 100);
					_putchar('0' + m % 100 / 10);
					_putchar('0' + m % 10);
				}
				else
				{
					if (m > 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + m);
				}
			}
			_putchar('\n');
		}
	}
}
