#include "dog.h"
#include <stddef.h>
/**
 * init_dog - entry point.
 * @d: struct
 * @name: string
 * @age: float
 * @owner: string
 * Return: 
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
