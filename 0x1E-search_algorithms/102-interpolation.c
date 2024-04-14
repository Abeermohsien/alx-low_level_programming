#include "search_algos.h"

/**
  * interpolation_search - searching for element.
  * @array: pointw to array first element.
  * @size: array size.
  * @value: searched value.
  *
  * Return: 0.
  *
  * Description: print value.
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, lf, r;

	if (array == NULL)
		return (-1);

	for (lf = 0, r = size - 1; r >= l;)
	{
		i = lf + (((double)(r - lf) / (array[r] - array[lf])) * (value - array[lf]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			lf = i + 1;
	}

	return (-1);
}
