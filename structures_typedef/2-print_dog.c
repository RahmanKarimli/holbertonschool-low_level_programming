#include <stdio.h>
#include "dog.h"
/**
 * print_dog - entry point.
 * @d: struct
 * Return:
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: ");
	if (d->name)
	{
		printf("%s\n", d->name);
	}
	else
	{
		printf("(nil)");
	}
	printf("Age: ");
	if (d->age)
	{
		printf("%.6f\n", d->age);
	}
	else
	{
		printf("(nil)");
	}
	printf("Owner: ");
	if (d->owner)
	{
		printf("%s\n", d->owner);
	}
	else
	{
		printf("(nil)");
	}
}
