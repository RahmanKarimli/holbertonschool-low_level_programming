#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - entry point.
 * @name: string
 * @age: float
 * @owner: string
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *own, *nm;
	int i;

	new_dog = malloc(sizeof(dog_t));
	own = malloc(sizeof(owner) + 1);
	nm = malloc(sizeof(name) + 1);
	if (new_dog == NULL)
	{
		return (NULL);
	}
	if (nm == NULL || own == NULL)
	{
		free(new_dog);
		if (nm != NULL)
		{
			free(nm);
		}
		if (own != NULL)
		{
			free(own);
		}
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
	{
		own[i] = owner[i];
	}
	own[i] = owner[i];

	for (i = 0; name[i] != '\0'; i++)
	{
		nm[i] = name[i];
	}
	nm[i] = name[i];
	new_dog->name = nm;
	new_dog->age = age;
	new_dog->owner = own;
	return (new_dog);
}
