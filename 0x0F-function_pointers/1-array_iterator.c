#include "function_pointers.h"
/**
 * array_iterator - function that print an array
 * @array: array
 * @size: int
 * @action: function that prints an array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
