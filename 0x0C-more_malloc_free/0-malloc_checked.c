#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - This function do something.
 *
 * @b: Argument description.
 *
 * Return: return value description.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
