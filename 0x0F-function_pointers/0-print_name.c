#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - This function do something.
 *
 * @name: Argument description.
 * @f: Argument description.
 *
 * Return: return value description.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
