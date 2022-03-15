#include "dog.h"

/**
 * free_dog - free of data of dog
 * @d: data
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
