#include "search_algos.h"

/**
  * binary_search - search for value.
  * @array: pointer to first elemwnt in array.
  * @size: array size.
  * @value: value searching for.
  *
  * Return: 0
  * Description: prin5 subarray.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t n, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (n = l; n < r; n++)
			printf("%d, ", array[n]);
		printf("%d\n", array[n]);

		n = l + (r - l) / 2;
		if (array[n] == value)
			return (n);
		if (array[n] > value)
			r = n - 1;
		else
			l = n + 1;
	}

	return (-1);
}
