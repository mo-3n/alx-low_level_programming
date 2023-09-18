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
		while (n >= z)
		{
			int b = n;
/*
			for (b = n; b < n && b >= z; b--)
*/
			while (b < n && b >= z)
			{
				printf(", ");
				b--;
			}
			printf("%d", n);
			n--;
		}
		printf("\n");
	}
	else
	{
		while (n <= z)
		{
			int c = n;
/*			
			for (c = n; c > n && c <= z; c++)
*/
			while (c > n && c <= z)
			{
				printf(", ");
				c++;
			}
			printf("%d", n);
			n++;
		}
		printf("\n");
	}
}
