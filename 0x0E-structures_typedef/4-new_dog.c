#include <stdlib.h>
#include "dog.h"


/**
 * new_dog - function creates a new dog.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner
 *
 * Return: struct dog or return NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p_dog;
	int d, dname, downer;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (dname = 0; name[dname]; dname++)
		;

	for (downer = 0; owner[downer]; downer++)
		;

	p_dog->name = malloc(dname + 1);
	p_dog->owner = malloc(downer + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (d = 0; d < dname; d++)
		p_dog->name[d] = name[d];
	p_dog->name[d] = '\0';

	p_dog->age = age;

	for (d = 0; d < downer; d++)
		p_dog->owner[d] = owner[d];
	p_dog->owner[d] = '\0';

	return (p_dog);
}

