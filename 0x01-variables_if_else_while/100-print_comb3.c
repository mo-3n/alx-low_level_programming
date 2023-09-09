#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int n;

	for (i = 0, n = 1; i < 9 && n < 10; i++, n++)
	{
		putchar('0' + i);
		putchar('0' + n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
