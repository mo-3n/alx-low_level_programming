#include "main.h"

/**
 * This file is about _abs function
 */

int _abs(int)
{
	int n , absvalue;
	
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
