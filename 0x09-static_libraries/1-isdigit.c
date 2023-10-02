#include <ctype.h>
#include "main.h"
/**
 * _isdigit - check the digital throug 0-9
 * @c: intiger
 * Return: Always 0.
 */
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
return (0);
}
