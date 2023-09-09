#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char az[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 25; i >= 0; i--)
	{
		putchar(az[i]);
	}
	putchar('\n');
	return (0);
}
