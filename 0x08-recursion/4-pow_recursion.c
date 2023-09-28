#include "main.h"
/**
 * _pow_recursion - raise x to the power y
 * @x: integer
 * @y: integer
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else if (y > 0)
{
x *=  _pow_recursion(x, (y - 1));
}
return (x);
}
