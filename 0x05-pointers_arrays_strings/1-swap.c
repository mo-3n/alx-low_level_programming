#include "main.h"

/**
 * swap_int - This function do something.
 *
 * @a: Argument description.
 *
 * Return value description.
 */
void swap_int(int *a, int *b)
{
	int tempvar;

	tempvar = *a;
	*a = *b;
	*b = tempvar;
}
