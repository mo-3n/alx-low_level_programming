#include "main.h"

/**
 * string_toupper - This function do something.
 *
 * @str: Argument description*
 *
 * Return: return value description.
 */
char *string_toupper(char *str)
{
	int i;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
