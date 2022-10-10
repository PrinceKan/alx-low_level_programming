#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type
 * @d: pointer to the structure
 * @name: dog's mame
 * @age: dog's age
 * @owner: dog  owner's
 *
 * Return: Always 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
