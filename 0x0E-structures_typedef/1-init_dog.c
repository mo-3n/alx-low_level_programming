#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - This function do something.
 *
 * @d: Argument description.
 * @name: Argument description.
 * @age: Argument description.
 * @owner: Argument description.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
