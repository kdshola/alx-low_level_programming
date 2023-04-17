#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new structure dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int namelen, ownlen, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	namelen = 0;
	while (name[namelen] != '\0')
		namelen++;
	namelen++;
	dog->name = malloc(sizeof(char) * namelen);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
		dog->name[i] = name[i];
	dog->age = age;
	ownlen = 0;
	while (owner[ownlen] != '\0')
		ownlen++;
	ownlen++;
	dog->owner = malloc(sizeof(char) * ownlen);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ownlen; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
