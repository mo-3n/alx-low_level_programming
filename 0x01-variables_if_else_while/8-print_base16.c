#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b16[16] = "0123456789abcdef";
	for (int i = 0; i < 16; i++)
	{
		putchar(b16[i]);
	}
	putchar('\n');
	return (0);
}
