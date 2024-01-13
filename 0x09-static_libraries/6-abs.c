#include "main.h"

/**
 * _abs - This function do something.
 *
 * @n: Argument description.
 *
 * Return: return value description.
 */
int _abs(int n)
{
	int absvalue;

	if (n >= 0)
	{
		absvalue = n;
		return (absvalue);
	}
	else
	{
		absvalue = n * -1;
		return (absvalue);
	}
}
