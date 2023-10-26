#include "main.h"                               /**
 * flip_bits - number to yurn
 * @n: int
 * @m: int                                       * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
        unsigned long int result = n ^ m;
        unsigned int c = 0;

	while (result)
	{
		if (result & 1ul)
			c++;
		result = result >> 1;
	}
	return (c);
}
