#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 0, n = 0, z = 0, d = 1; i < 10 && n < 9 && z < 10 && d < 10; i++, n++, z++, d++)
	{
		putchar(i);
		putchar(n);
		putchar(' ');
		putchar(z);
		putchar(d);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
