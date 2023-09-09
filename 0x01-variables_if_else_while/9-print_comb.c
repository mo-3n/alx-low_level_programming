#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	for (;i == 9;)
	{
		putchar('0' + i);
	}
	/*putchar('\n');*/
	return (0);
}
