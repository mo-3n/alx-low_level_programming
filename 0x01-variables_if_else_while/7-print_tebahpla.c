#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az[26] = "abcdefghijklmnopqrstuvwxyz";
	for (int i = 25; i >= 0; i--)
	{
		putchar(az[i]);
	}
	putchar('\n');
	return (0);
}