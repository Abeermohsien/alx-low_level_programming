#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free dogs strings
 * @dog: pointer to string
 * Return: void
 */
void free_dog(dog_t *dog)
{
	if (dog)
	{
		if (dog->name)
			free(dog->name);
		if (dog->owner)
			free(dog->owner);
		free(dog);
	}
}
