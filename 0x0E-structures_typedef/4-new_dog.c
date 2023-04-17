#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog struct, NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *n, *o;
	int i, namelen, ownerlen;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	for (namelen = 0; name[namelen]; namelen++)
		;
	for (ownerlen = 0; owner[ownerlen]; ownerlen++)
		;

	n = malloc(namelen + 1);
	if (n == NULL)
	{
		free(newdog);
		return (NULL);
	}

	o = malloc(ownerlen + 1);
	if (o == NULL)
	{
		free(n);
		free(newdog);
		return (NULL);
	}

	for (i = 0; i <= namelen; i++)
		n[i] = name[i];
	for (i = 0; i <= ownerlen; i++)
		o[i] = owner[i];

	newdog->name = n;
	newdog->age = age;
	newdog->owner = o;

	return (newdog);
}
