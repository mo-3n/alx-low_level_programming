#include "main.h"
#include <stdio.h>

/**
 * This file is about fizz_buzz test
 */
int main(int i)
{
	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
		printf("\n");
	}
	printf("\n");
	return (0);
}