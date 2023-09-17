#include "main.h"

/**
 * jack_bauer - This function do something.
 *
 * Argument description.
 * Return value description.
 */
void jack_bauer(void)
{
	for (int h = 0; h < 24; h++)
	{
		for (int m = 0; m < 60; m++)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');
		}
	}
}
