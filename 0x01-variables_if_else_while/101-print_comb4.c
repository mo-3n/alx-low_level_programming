#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 0, n = 1, z = 2; i < 8 && n < 9 && z < 10; i++, n++, z++)
	{
		putchar(i);
		putchar(n);
		putchar(z);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
