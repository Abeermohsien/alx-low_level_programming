#include "main.h"
#include <stdlib.h>
/**
 * *array_range - pints array from min to max
 * @min: integer
 * @max: integer
 * Return: int
 */
int *array_range(int min, int max)
{
int i, l;
l = max - min + 1;
if (min > max)
	return (NULL);
int *ptr = malloc(sizeof(int) * l);
if (ptr == 0)
	return (NULL);
for (i = 0; i < l; i++)
	ptr[i] = min++;
return (ptr);
}
