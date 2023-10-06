#include "min.h"
/**
 * malloc_checked - check the malloc status
 * @b: unsigned int
 * Return: void.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
		exit(98);
	return (ptr);
}
