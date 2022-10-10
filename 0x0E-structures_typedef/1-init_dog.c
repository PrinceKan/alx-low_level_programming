#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type
 * @d: pointer to the structure
 * @name: dog's
 * @age: dogs age
 * @owner: dog's owner
 *
 * Return: Always 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
