#include <stdlib.h>
#include "dog.h"
/**
 * _strlen: count the length
 * @str: string
 * Return: int
 */
int _strlen(char *str)
{
	int i = 0;
	while (*str++)
		i++;
	return (i);
}
/**
 * _strcpy - copy the string
 * @s: string
 * @d: string
 * Return: @dest
 */
char *_strcpy(char *s, char *d)
{
	int i = 0;
	while (d[i])
	{
		s[i] = d[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
/**
 * new_dog - copy function
 * @name: string
 * @age: float
 * @owner: char
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	if (!name || age < 0 || !owner)
		return(NULL);
	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}
