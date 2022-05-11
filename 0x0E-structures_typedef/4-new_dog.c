#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Create dog obj
 * @name: param
 * @age: param
 * @owner: param
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;
	char *n_name, *n_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	bingo = malloc(sizeof(dog_t));
	if (bingo == NULL)
	{
		return (NULL);
	}

	n_name = name;
	if (n_name == NULL)
	{
		free(bingo);
		return (NULL);
	}
	(*bingo).name = n_name;

	(*bingo).age = age;

	n_owner = owner;
	if (n_owner == NULL)
	{
		free((*bingo).name);
		free(bingo);
		return (NULL);
	}
	(*bingo).owner = n_owner;

	return (bingo);
}
