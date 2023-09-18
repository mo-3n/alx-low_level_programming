#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - This function do something.
 *
 * @n: Argument description.
 *
 * Return: return value description.
 */
void print_to_98(int n)
{
	int z = 98;
	
	if (n == z)
	{
		printf("%d\n", n);
	}
	else if (n > z)
	{
		while (n <= z)
		{
			int b;

			for (b = z; b > z && b <= n; b++)
			{
				printf(", ");
			}
			printf("%d\n", n);
			n++;
		}
	}
	else
	{
		while (n <= z)
		{
			int c;
			
			for (c = n; c > n && c <= z; c++)
			{
				printf(", ");
			}
			printf("%d", n);
			n++;
		}
	}
}
