#include <stdio.h>

/**
 * This C source file don't use printf or puts
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	for (int i = 0; quote[i] != '\0'; i++)
	{
		putchar(quote[i]);
	}
	return (1);
}
