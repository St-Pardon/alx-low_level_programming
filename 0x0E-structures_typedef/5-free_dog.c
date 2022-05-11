#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free mem
 * @d: param
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
