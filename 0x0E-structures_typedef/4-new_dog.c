#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

char *_copy(char *src);

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

	n_name = _copy(name);
	if (n_name == NULL)
	{
		free(bingo);
		return (NULL);
	}
	(*bingo).name = n_name;

	(*bingo).age = age;

	n_owner = _copy(owner);
	if (n_owner == NULL)
	{
		free((*bingo).name);
		free(bingo);
		return (NULL);
	}
	(*bingo).owner = n_owner;

	return (bingo);
}

/**
 * _copy - copy obj
 * @src: param
 * Return: Pointer
 */

char *_copy(char *src)
{
	char *ptr;
	int i, len;

	if (src == NULL)
	{
		return (NULL);
	}

	for (len = 0; src[len] != '\0'; len++)
		;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}

	ptr[i] = '\0';
	return (ptr);
}
