#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i != 4 && i != 16)
		{
		putchar(az[i]);
		}
	}
	putchar('\n');
	return (0);
}
