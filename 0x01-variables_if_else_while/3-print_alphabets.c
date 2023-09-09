#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az[26] = "abcdefghijklmnopqrstuvwxyz";
	char AZ[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int n;

	for (i = 0; i < 26; i++)
	{
		putchar(az[i]);
	}
	for (n = 0; n < 26; n++)
	{
		putchar(AZ[n]);
	}
	putchar('\n');
	return (0);
}
