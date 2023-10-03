#include "main.h"
#include <stdlib.h>
/**
 * create_array - print array of certin size
 * @c: char
 * @size: the size of the memory to print
 *
 * Return: char.
 */
char *create_array(unsigned int size, char c)
{
char *ptr = malloc(size * sizeof(char));
if (size == 0 || ptr == 0)
	return (0);
while (size != 0)
{
*ptr = c;
size--;
ptr--;
}
return (ptr);
}
