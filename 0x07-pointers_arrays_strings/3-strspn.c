#include "main.h"

/**
 * _strspn - This function do something.
 *
 * @s: Argument description.
 * @accept: Argument description.
 *
 * Return: return value description.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, a, x;

	a = 0;

	for (i = 0, s[i] != '\0'; i++)
	{
		x = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				a++;
				x = 1;
			}
		}
		if (x == 0)
		{
			return (a);
		}
	}

	return (0);
}
