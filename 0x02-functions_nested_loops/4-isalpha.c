#include "main.h"

/**
 * _isalpha - This function do something.
 *
 * @c: Argument description.
 *
 * Return: return value description.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
