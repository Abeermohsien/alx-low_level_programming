#include "main.h"

/**
 * main - check the abslute value of the integers
 * @c: the integer 
 * Return: Always 0.
 */
int _abs(int c)
{
if (c < 0)
{
int abs;
abs = c * -1;
return (abs);
}
return (c);
}
