#ifndef _DOG_
#define _DOG_

/**
 * struct dog - makes dog obj
 * @age: prop
 * @name: pointer prop
 * @owner: pointer prop
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
