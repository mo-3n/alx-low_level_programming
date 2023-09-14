#include "main.h"

/**
 * This file is about jack_bauer function
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
