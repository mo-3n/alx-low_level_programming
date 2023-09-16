#include "main.h"
#include <stdio.h>

/**
 * This file is about fizz_buzz test
 */
int main(void)
{
	for (int i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("FizzBuzz ");
			}
			else
			{
				printf("Fizz ");
			}
		}
		else if (i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				printf("FizzBuzz ");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
