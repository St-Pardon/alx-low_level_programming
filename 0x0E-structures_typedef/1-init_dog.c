#include "dog.h"
#include <stdio.h>

/**
 * init_dog - int dog obj
 * @d: poiter param
 * @name: pointer param
 * @age: param
 * @owner: pointer param
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		return;
	else
	{
		(*d).name = name;
		(*d).age = age;
		d->owner = owner;
	}
}
