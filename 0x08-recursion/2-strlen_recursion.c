#include "main.h"
/**
 * _strlen_recursion - returns the lenght
 * @s:chaacter
 * Return: integer
 */
int _strlen_recursion(char *s)
{
int c = 0;
if (*s != '\0')
{
c = _strlen_recursion(s + 1) + 1;
}
return (c);
}
