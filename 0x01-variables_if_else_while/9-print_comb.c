#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	putchar('0');
	for (i = 1; i < 10; i++)
	{
		putchar(',');
		putchar(' ');
		putchar('0' + i);
	}
	/*for (; i == 9; i++)
	{
		putchar('0' + i + '\n');
	}
	putchar('\n');*/
	return (0);
}
