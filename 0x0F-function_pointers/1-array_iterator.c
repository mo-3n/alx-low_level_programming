#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - This function do something.
 *
 * @array: Argument description.
 * @size: Argument description.
 * @action: Argument description.
 *
 * Return: return value description.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
