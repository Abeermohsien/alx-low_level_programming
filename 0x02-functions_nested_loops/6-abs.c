#include "main.h"

/**
 * _abs - computes the abslute value of numbers
 * @c: number
 *
 * Return: Always 0.
 */
int _abs(int c)
{
int absv;
if (c < 0)
{
absv = c * -1;
return (absv);
}
return (c);
}
