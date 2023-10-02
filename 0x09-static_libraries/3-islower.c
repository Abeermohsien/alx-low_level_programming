#include "main.h"

/**
 * _islower - check the lowercase alphabets
 * @c: is an alphabet
 * Return: Always 0.
 */
int _islower(int  c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
