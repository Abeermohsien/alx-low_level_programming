#include "dog.h"
/**
 * init_dog - dog structer
 * @name: name of the structure
 * @age: age of the dog
 * @owner: dog's owner
 * @d: struct type
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner
	}
}
