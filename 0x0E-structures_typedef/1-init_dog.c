#include "dog.h"

/**
 * init_dog - initializes struct type dog
 * @d: structure pointer
 * @name: dog name to initailize
 * @age: dog age to initialize
 * @owner: owner name to initialize
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
